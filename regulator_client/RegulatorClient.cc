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
#include <random>
#include <grpcpp/grpcpp.h>

#include "Regulator.grpc.pb.h"
#include "RegulatorClient.h"

using namespace std;
using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using protos::Regulator;
using protos::Empty;
using protos::RegisterInfo;


class RegulatorClient {
 public:
  RegulatorClient(std::shared_ptr<Channel> channel)
      : stub_(Regulator::NewStub(channel)) {}

  // Assembles the client's payload, sends it and presents the response back
  // from the server.
  RegisterInfo GetRegisterInfo() {

    std::default_random_engine random;
    // Data we are sending to the server.
    Empty request;
    request.set_nonce(random());

    // Container for the data we expect from the server.
    RegisterInfo reply;

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    ClientContext context;

    // The actual RPC.
    Status status = stub_->GetRegisterInfo(&context, request, &reply);

    // Act upon its status.
    if (status.ok()) {
      return reply;
    } else {
      std::cout << status.error_code() << ": " << status.error_message()
                << std::endl;
      reply.set_ecc_pubkey("RPC failed");
      return reply;
    }
  }

 private:
  std::unique_ptr<Regulator::Stub> stub_;
};

int main(int argc, char** argv) {
  // Instantiate the client. It requires a channel, out of which the actual RPCs
  // are created. This channel models a connection to an endpoint specified by
  // the argument "--target=" which is the only expected argument.
  // We indicate that the channel isn't authenticated (use of
  // InsecureChannelCredentials()).
  std::string target_str;
  std::string arg_str("--target");
  if (argc > 1) {
    std::string arg_val = argv[1];
    size_t start_pos = arg_val.find(arg_str);
    if (start_pos != std::string::npos) {
      start_pos += arg_str.size();
      if (arg_val[start_pos] == '=') {
        target_str = arg_val.substr(start_pos + 1);
      } else {
        std::cout << "The only correct argument syntax is --target="
                  << std::endl;
        return 0;
      }
    } else {
      std::cout << "The only acceptable argument is --target=" << std::endl;
      return 0;
    }
  } else {
    target_str = "localhost:50051";
  }
  RegulatorClient regulator_client(
      grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));
  RegisterInfo reply = regulator_client.GetRegisterInfo();
  std::cout << "---------get register infoermation from server---------" << std::endl;
  std::cout << "ecc_pubkey: " << reply.ecc_pubkey() << std::endl;
  std::cout << "tx_id: " << reply.tx_id() << std::endl;

  return 0;
}
