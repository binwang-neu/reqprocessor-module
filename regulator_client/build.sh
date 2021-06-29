# protoc -I . --proto_path=/home/liyue/request_processor/protos/ --cpp_out=. /home/liyue/request_processor/protos/Registration.proto 
# protoc -I . --proto_path=/home/liyue/request_processor/protos/ --cpp_out=. /home/liyue/request_processor/protos/Compliance.proto 
# protoc -I . --proto_path=/home/liyue/request_processor/protos/ --cpp_out=. /home/liyue/request_processor/protos/Regulator.proto 
# protoc -I . --proto_path=/home/liyue/request_processor/protos/ --grpc_out=. --plugin=protoc-gen-grpc=/home/liyue/.local/bin/grpc_cpp_plugin /home/liyue/request_processor/protos/Regulator.proto
# protoc -I . --proto_path=/home/liyue/request_processor/protos/ --grpc_out=. --plugin=protoc-gen-grpc=/home/liyue/.local/bin/grpc_cpp_plugin /home/liyue/request_processor/protos/Registration.proto

# g++ -std=c++11 -I/usr/local/include -pthread -c Compliance.pb.cc -o Compliance.pb.o
# g++ -std=c++11 -I/usr/local/include -pthread -c Regulator.grpc.pb.cc -o Regulator.grpc.pb.o
# g++ -std=c++11 -I/usr/local/include -pthread -c Regulator.pb.cc -o Regulator.pb.o
g++ -std=c++11 -I/usr/local/include -pthread -c Registration.pb.cc -o Registration.pb.o
g++ -std=c++11 -I/usr/local/include -pthread -c Registration.grpc.pb.cc -o Registration.grpc.pb.o

g++ -std=c++11 -I/usr/local/include -pthread -c RegulatorClient.cc -o RegulatorClient.o

g++ Registration.pb.o Registration.grpc.pb.o RegulatorClient.o -L/usr/local/lib `pkg-config --libs grpc++ grpc` -Wl,--no-as-needed -lgrpc++_reflection -Wl,--as-needed -lprotobuf -lpthread -ldl -lssl -o RegulatorClient