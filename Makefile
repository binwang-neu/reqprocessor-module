#.PRECIOUS: %.grpc.pb.cc
%.grpc.pb.cc: %.proto
	protoc -I . --grpc_out=. --plugin=protoc-gen-grpc=/home/liyue/.local/bin/grpc_cpp_plugin $<

#.PRECIOUS: %.pb.cc
%.pb.cc: %.proto
	protoc -I . --cpp_out=. $<

%.grpc.pb.o: %.grpc.pb.cc
	g++ -std=c++11 -I/usr/local/include -pthread -c $^ -o $@

%.pb.o: %.pb.cc
	g++ -std=c++11 -I/usr/local/include -pthread -c $^ -o $@

%.o: %.cc
	g++ -std=c++11 -I/usr/local/include -pthread -c $^ -o $@

clean:
	rm -f *.o *.pb.cc *.pb.h server 

server: helloworld.pb.o helloworld.grpc.pb.o greeter_server.o
	g++ $^ -L/usr/local/lib `pkg-config --libs grpc++ grpc` -Wl,--no-as-needed -lgrpc++_reflection -Wl,--as-needed -lprotobuf -lpthread -ldl -lssl -o $@
