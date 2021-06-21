cmake_minimum_required(VERSION 3.10)

project(RegulatorServer VERSION 1.0)

include(common.cmake)

# add debug compile flag
SET(CMAKE_BUILD_TYPE "Debug") 
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb ")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

# Proto file
get_filename_component(cp_proto "./protos/Compliance.proto" ABSOLUTE)
get_filename_component(cp_proto_path "${cp_proto}" PATH)

get_filename_component(rg_proto "./protos/Regulator.proto" ABSOLUTE)
get_filename_component(rg_proto_path "${rg_proto}" PATH)

get_filename_component(ws_proto "./protos/Wset.proto" ABSOLUTE)
get_filename_component(ws_proto_path "${ws_proto}" PATH)

message("cp_proto_path is ${cp_proto}")
message("rg_proto_path is ${rg_proto_path}")
message("ws_proto_path is ${ws_proto}")

# Generated sources
set(cp_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/Compliance.pb.cc")
set(cp_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/Compliance.pb.h")

set(rg_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/Regulator.pb.cc")
set(rg_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/Regulator.pb.h")

set(ws_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/Wset.pb.cc")
set(ws_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/Wset.pb.h")

set(rg_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/Regulator.grpc.pb.cc")
set(rg_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/Regulator.grpc.pb.h")

#set(_REFLECTION grpc++_reflection)
#set(_PROTOBUF_LIBPROTOBUF protobuf)
#set(_GRPC_GRPCPP grpc++)

find_program(_PROTOBUF_PROTOC protoc)
find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)

add_custom_command(
      OUTPUT "${cp_proto_srcs}" "${cp_proto_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${cp_proto_path}" 
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${cp_proto}"
      DEPENDS "${cp_proto}")

add_custom_command(
      OUTPUT "${ws_proto_srcs}" "${ws_proto_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${cp_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${ws_proto}"
      DEPENDS "${ws_proto}")

add_custom_command(
      OUTPUT "${rg_proto_srcs}" "${rg_proto_hdrs}" "${rg_grpc_srcs}" "${rg_grpc_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${cp_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${rg_proto}"
      DEPENDS "${rg_proto}")

#message("${CMAKE_CURRENT_BINARY_DIR}")

# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# rg_grpc_proto
add_library(rg_grpc_proto
  ${rg_grpc_srcs}
  ${rg_grpc_hdrs}
  ${rg_proto_srcs}
  ${rg_proto_hdrs})

add_library(cp_proto
  ${cp_proto_srcs}
  ${cp_proto_hdrs})

add_library(ws_proto
  ${ws_proto_srcs}
  ${ws_proto_hdrs})

target_link_libraries(rg_grpc_proto cp_proto ws_proto)

# Targets RegulatorServer
#set(MYINCLUDE "/usr/local/lib `pkg-config --libs grpc++ grpc`")
#message("${MYINCLUDE}")
foreach(_target
  RegulatorServer)
  add_executable(${_target} "../regulator_server/${_target}.cc")
  target_link_libraries(${_target}
    rg_grpc_proto cp_proto ws_proto
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF}
    )
endforeach()
foreach(_target
  RegulatorClient)
  add_executable(${_target} "../regulator_client/${_target}.cc")
  target_link_libraries(${_target}
    rg_grpc_proto cp_proto ws_proto
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF}
    )
endforeach()
message("CMakeList run finish")