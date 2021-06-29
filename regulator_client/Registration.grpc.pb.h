// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Registration.proto
#ifndef GRPC_Registration_2eproto__INCLUDED
#define GRPC_Registration_2eproto__INCLUDED

#include "Registration.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace request_proto {

class Registration final {
 public:
  static constexpr char const* service_full_name() {
    return "request_proto.Registration";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::request_proto::RegisterInfo* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::request_proto::RegisterInfo>> AsyncGetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::request_proto::RegisterInfo>>(AsyncGetRegisterInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::request_proto::RegisterInfo>> PrepareAsyncGetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::request_proto::RegisterInfo>>(PrepareAsyncGetRegisterInfoRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty* request, ::request_proto::RegisterInfo* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty* request, ::request_proto::RegisterInfo* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty* request, ::request_proto::RegisterInfo* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::request_proto::RegisterInfo>* AsyncGetRegisterInfoRaw(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::request_proto::RegisterInfo>* PrepareAsyncGetRegisterInfoRaw(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::request_proto::RegisterInfo* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::request_proto::RegisterInfo>> AsyncGetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::request_proto::RegisterInfo>>(AsyncGetRegisterInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::request_proto::RegisterInfo>> PrepareAsyncGetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::request_proto::RegisterInfo>>(PrepareAsyncGetRegisterInfoRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty* request, ::request_proto::RegisterInfo* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty* request, ::request_proto::RegisterInfo* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetRegisterInfo(::grpc::ClientContext* context, const ::request_proto::Empty* request, ::request_proto::RegisterInfo* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::request_proto::RegisterInfo>* AsyncGetRegisterInfoRaw(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::request_proto::RegisterInfo>* PrepareAsyncGetRegisterInfoRaw(::grpc::ClientContext* context, const ::request_proto::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetRegisterInfo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetRegisterInfo(::grpc::ServerContext* context, const ::request_proto::Empty* request, ::request_proto::RegisterInfo* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetRegisterInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetRegisterInfo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetRegisterInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRegisterInfo(::grpc::ServerContext* /*context*/, const ::request_proto::Empty* /*request*/, ::request_proto::RegisterInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetRegisterInfo(::grpc::ServerContext* context, ::request_proto::Empty* request, ::grpc::ServerAsyncResponseWriter< ::request_proto::RegisterInfo>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetRegisterInfo<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetRegisterInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetRegisterInfo() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::request_proto::Empty, ::request_proto::RegisterInfo>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::request_proto::Empty* request, ::request_proto::RegisterInfo* response) { return this->GetRegisterInfo(context, request, response); }));}
    void SetMessageAllocatorFor_GetRegisterInfo(
        ::grpc::experimental::MessageAllocator< ::request_proto::Empty, ::request_proto::RegisterInfo>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::request_proto::Empty, ::request_proto::RegisterInfo>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetRegisterInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRegisterInfo(::grpc::ServerContext* /*context*/, const ::request_proto::Empty* /*request*/, ::request_proto::RegisterInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetRegisterInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::request_proto::Empty* /*request*/, ::request_proto::RegisterInfo* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetRegisterInfo(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::request_proto::Empty* /*request*/, ::request_proto::RegisterInfo* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetRegisterInfo<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetRegisterInfo<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetRegisterInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetRegisterInfo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetRegisterInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRegisterInfo(::grpc::ServerContext* /*context*/, const ::request_proto::Empty* /*request*/, ::request_proto::RegisterInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetRegisterInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetRegisterInfo() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetRegisterInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRegisterInfo(::grpc::ServerContext* /*context*/, const ::request_proto::Empty* /*request*/, ::request_proto::RegisterInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetRegisterInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetRegisterInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetRegisterInfo() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetRegisterInfo(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetRegisterInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRegisterInfo(::grpc::ServerContext* /*context*/, const ::request_proto::Empty* /*request*/, ::request_proto::RegisterInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetRegisterInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetRegisterInfo(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetRegisterInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetRegisterInfo() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::request_proto::Empty, ::request_proto::RegisterInfo>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::request_proto::Empty, ::request_proto::RegisterInfo>* streamer) {
                       return this->StreamedGetRegisterInfo(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetRegisterInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetRegisterInfo(::grpc::ServerContext* /*context*/, const ::request_proto::Empty* /*request*/, ::request_proto::RegisterInfo* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetRegisterInfo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::request_proto::Empty,::request_proto::RegisterInfo>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetRegisterInfo<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetRegisterInfo<Service > StreamedService;
};

}  // namespace request_proto


#endif  // GRPC_Registration_2eproto__INCLUDED
