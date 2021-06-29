/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include "ThreadPool.h"

#include "Regulator.grpc.pb.h"
#include "Compliance.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using request_proto::Regulator;
using request_proto::ProofRequest;
using request_proto::ProofResponse;

// Same as before but now we have an output parameter
request_proto::CProof binding(request_proto::TransactionInfo tx) {
  //simulate_hard_computation();
  request_proto::CProof cproof;
  return cproof;
}

// Get thread pool size from environemnt variable
const char* thsize = std::getenv("THREAD_POOL_SIZE");

// std::cout << " thsize = " << thsize << std::endl;
int n_workers = thsize != nullptr
                            ? std::stoi(thsize) : std::thread::hardware_concurrency();
// Create pool with 5 threads
ThreadPool pool(n_workers);

// Logic and data behind the server's behavior.
class RegulatorServiceImpl final : public request_proto::Regulator::Service {
public:
  // grpc service for compliance
  grpc::Status GetComplianceProof(::grpc::ServerContext *context,
                                  grpc::ServerReaderWriter<::request_proto::ProofResponse, ::request_proto::ProofRequest> *stream) override {
    request_proto::ProofRequest proof_req;
    while(stream->Read(&proof_req)){
      std::cout << "--- GetComplianceProof start ---" << std::endl;
      //request_proto::TransactionInfo transaction;
      //TxWriteSet tx_write_wet;
      
      // Parsing Compliance request
      std::cout << "[COMPLIANCE REQUEST] info : " << std::endl;
      std::cout << "nonce: " << proof_req.nonce() << std::endl;
      
      if (proof_req.has_tx_info())
      {
        std::cout << "transaction id: " << proof_req.tx_info().tx_id() << std::endl;
        std::cout << "channel id: " << proof_req.tx_info().ch_id() << std::endl;
        std::cout << "chainCode id: " << proof_req.tx_info().cc_id() << std::endl;
        std::cout << "function name: " << proof_req.tx_info().func_name() << std::endl;
        
        size_t args_size = proof_req.tx_info().args_size();
        // init args size
        //transaction.args.resize(args_size);
        std::cout << "[args] info: " << std::endl;
        for (size_t i = 0; i < args_size; i++)
        {
          std::cout << "arguements " << i << ": "<< proof_req.tx_info().args(i) << std::endl;
          //transaction.args[i] = proof_req.tx_info().args(i);
        }
          
        std::cout << "[wsets] info: " << std::endl;
        if (proof_req.tx_info().has_wset())
        {
          std::cout << "public wset: " << std::endl;
          size_t pb_wset_size = proof_req.tx_info().wset().pb_wset_size();
          size_t pv_wset_size = proof_req.tx_info().wset().pv_wset_size();
          for (size_t i = 0; i < pb_wset_size; i++)
          {
            //tx_write_wet.pb_wset.resize(pb_wset_size);
            std::cout << "wset index is " << i << std::endl;
            std::cout << "key: " << proof_req.tx_info().wset().pb_wset(i).key() << std::endl;
            std::cout << "value: " << proof_req.tx_info().wset().pb_wset(i).value() << std::endl;
            std::cout << "namespace: " << proof_req.tx_info().wset().pb_wset(i).name_space() << std::endl;
            //tx_write_wet.pb_wset[i].key = proof_req.tx_info().wset().pb_wset(i).key();
            //tx_write_wet.pb_wset[i].value = proof_req.tx_info().wset().pb_wset(i).value();
            //tx_write_wet.pb_wset[i].name_space = proof_req.tx_info().wset().pb_wset(i).name_space();
          }

          std::cout << "private wset: " << std::endl;
          for (size_t j = 0; j < pv_wset_size; j++)
          {
            //tx_write_wet.pv_wset.resize(pv_wset_size);
            std::cout << "wset index is " << j << std::endl;
            std::cout << "key: " << proof_req.tx_info().wset().pv_wset(j).key() << std::endl;
            std::cout << "value: " << proof_req.tx_info().wset().pv_wset(j).value() << std::endl;
            std::cout << "namespace: " << proof_req.tx_info().wset().pv_wset(j).name_space() << std::endl;
            //tx_write_wet.pv_wset[j].key = proof_req.tx_info().wset().pv_wset(j).key();
            //tx_write_wet.pv_wset[j].value = proof_req.tx_info().wset().pv_wset(j).value();
            //tx_write_wet.pv_wset[j].name_space = proof_req.tx_info().wset().pv_wset(j).name_space();
          }
          //transaction.wSet = tx_write_wet;
        }
        
        if (proof_req.tx_info().has_version())
        {
          std::cout << "[version] info: " << std::endl;
          std::cout << "block number: " << proof_req.tx_info().version().block_number() << std::endl;
          std::cout << "transaction id: " << proof_req.tx_info().version().tx_id() << std::endl;
          //transaction.version.block_number = proof_req.tx_info().version().block_number();
          //transaction.version.tx_id = proof_req.tx_info().version().tx_id();
        } 
      }
      // Submit function with return parameter
      auto future = pool.submit(binding, proof_req.tx_info());
      // Wait for binding output
      request_proto::CProof *cproof = new request_proto::CProof;
      *cproof = future.get();
      //std::cout << "Last operation result is equals to " << res << std::endl;
      //std::cout << " request is processing: " << std::endl;
      request_proto::ProofResponse proof_res;
      cproof->add_status(request_proto::CProof_CSTATE::CProof_CSTATE_SATISFIED);
      proof_res.set_nonce(proof_req.nonce());
      proof_res.set_allocated_c_proof(cproof);

      stream->Write(proof_res);
      std::cout << "--- GetComplianceProof finish ---" << std::endl;
      return grpc::Status::OK;
    }
  }
};


void RunServer() {
  std::string server_address("0.0.0.0:50051");
  RegulatorServiceImpl service;

  grpc::EnableDefaultHealthCheckService(true);
  grpc::reflection::InitProtoReflectionServerBuilderPlugin();
  ServerBuilder builder;
  // Listen on the given address without any authentication mechanism.
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  // Register "service" as the instance through which we'll communicate with
  // clients. In this case it corresponds to an *synchronous* service.
  builder.RegisterService(&service);
  // Finally assemble the server.
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;

  // Wait for the server to shutdown. Note that some other thread must be
  // responsible for shutting down the server for this call to ever return.
  server->Wait();
}

int main(int argc, char** argv) {
  // Initialize pool
  std::cout << "$ENV{CXXFLAGS}" << std::endl;
  pool.init();

  RunServer();

  return 0;
}
