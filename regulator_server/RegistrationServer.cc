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

#include "Registration.pb.h"
#include "Registration.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using request_proto::RegisterInfo;

// Same as before but now we have an output parameter
request_proto::RegisterInfo remoteattestation() {
  //simulate_hard_computation();
  request_proto::RegisterInfo register_info;
    register_info.set_ecc_pubkey("123");
    register_info.set_tx_id("100");
  return register_info;
}

// Get thread pool size from environemnt variable
const char* thsize = std::getenv("THREAD_POOL_SIZE");

// std::cout << " thsize = " << thsize << std::endl;
int n_workers = thsize != nullptr
                            ? std::stoi(thsize) : std::thread::hardware_concurrency();
// Create pool with 5 threads
ThreadPool pool(n_workers);

// Logic and data behind the server's behavior.
class RegistrationServiceImpl final : public request_proto::Registration::Service {
public:
  // grpc service for registration
  grpc::Status GetRegisterInfo(::grpc::ServerContext *context,
                               const ::request_proto::Empty *request,
                               ::request_proto::RegisterInfo *response) override {
    std::cout << "--- GetRegisterInfo start ---" << std::endl;
    request_proto::RegisterInfo register_info = remoteattestation();
    response = &register_info;

    std::cout << " request is processing: " << std::endl;
    std::cout << "--- GetRegisterInfo finish ---" << std::endl;
    return grpc::Status::OK;
  }
};

void RunServer() {
  std::string server_address("0.0.0.0:50051");
  RegistrationServiceImpl service;

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
