// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Regulator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Regulator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Regulator_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Compliance.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Regulator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Regulator_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Regulator_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_Regulator_2eproto_metadata_getter(int index);
namespace request_proto {
class ProofRequest;
struct ProofRequestDefaultTypeInternal;
extern ProofRequestDefaultTypeInternal _ProofRequest_default_instance_;
class ProofResponse;
struct ProofResponseDefaultTypeInternal;
extern ProofResponseDefaultTypeInternal _ProofResponse_default_instance_;
}  // namespace request_proto
PROTOBUF_NAMESPACE_OPEN
template<> ::request_proto::ProofRequest* Arena::CreateMaybeMessage<::request_proto::ProofRequest>(Arena*);
template<> ::request_proto::ProofResponse* Arena::CreateMaybeMessage<::request_proto::ProofResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace request_proto {

// ===================================================================

class ProofRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:request_proto.ProofRequest) */ {
 public:
  inline ProofRequest() : ProofRequest(nullptr) {}
  virtual ~ProofRequest();
  explicit constexpr ProofRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ProofRequest(const ProofRequest& from);
  ProofRequest(ProofRequest&& from) noexcept
    : ProofRequest() {
    *this = ::std::move(from);
  }

  inline ProofRequest& operator=(const ProofRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProofRequest& operator=(ProofRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ProofRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ProofRequest* internal_default_instance() {
    return reinterpret_cast<const ProofRequest*>(
               &_ProofRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProofRequest& a, ProofRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ProofRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ProofRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ProofRequest* New() const final {
    return CreateMaybeMessage<ProofRequest>(nullptr);
  }

  ProofRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ProofRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ProofRequest& from);
  void MergeFrom(const ProofRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProofRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "request_proto.ProofRequest";
  }
  protected:
  explicit ProofRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_Regulator_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPeerSignatureFieldNumber = 2,
    kTxInfoFieldNumber = 3,
    kNonceFieldNumber = 1,
  };
  // string peer_signature = 2;
  void clear_peer_signature();
  const std::string& peer_signature() const;
  void set_peer_signature(const std::string& value);
  void set_peer_signature(std::string&& value);
  void set_peer_signature(const char* value);
  void set_peer_signature(const char* value, size_t size);
  std::string* mutable_peer_signature();
  std::string* release_peer_signature();
  void set_allocated_peer_signature(std::string* peer_signature);
  private:
  const std::string& _internal_peer_signature() const;
  void _internal_set_peer_signature(const std::string& value);
  std::string* _internal_mutable_peer_signature();
  public:

  // .request_proto.TransactionInfo tx_info = 3;
  bool has_tx_info() const;
  private:
  bool _internal_has_tx_info() const;
  public:
  void clear_tx_info();
  const ::request_proto::TransactionInfo& tx_info() const;
  ::request_proto::TransactionInfo* release_tx_info();
  ::request_proto::TransactionInfo* mutable_tx_info();
  void set_allocated_tx_info(::request_proto::TransactionInfo* tx_info);
  private:
  const ::request_proto::TransactionInfo& _internal_tx_info() const;
  ::request_proto::TransactionInfo* _internal_mutable_tx_info();
  public:
  void unsafe_arena_set_allocated_tx_info(
      ::request_proto::TransactionInfo* tx_info);
  ::request_proto::TransactionInfo* unsafe_arena_release_tx_info();

  // uint64 nonce = 1;
  void clear_nonce();
  ::PROTOBUF_NAMESPACE_ID::uint64 nonce() const;
  void set_nonce(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_nonce() const;
  void _internal_set_nonce(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:request_proto.ProofRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr peer_signature_;
  ::request_proto::TransactionInfo* tx_info_;
  ::PROTOBUF_NAMESPACE_ID::uint64 nonce_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Regulator_2eproto;
};
// -------------------------------------------------------------------

class ProofResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:request_proto.ProofResponse) */ {
 public:
  inline ProofResponse() : ProofResponse(nullptr) {}
  virtual ~ProofResponse();
  explicit constexpr ProofResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ProofResponse(const ProofResponse& from);
  ProofResponse(ProofResponse&& from) noexcept
    : ProofResponse() {
    *this = ::std::move(from);
  }

  inline ProofResponse& operator=(const ProofResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProofResponse& operator=(ProofResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ProofResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ProofResponse* internal_default_instance() {
    return reinterpret_cast<const ProofResponse*>(
               &_ProofResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ProofResponse& a, ProofResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ProofResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ProofResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ProofResponse* New() const final {
    return CreateMaybeMessage<ProofResponse>(nullptr);
  }

  ProofResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ProofResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ProofResponse& from);
  void MergeFrom(const ProofResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProofResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "request_proto.ProofResponse";
  }
  protected:
  explicit ProofResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_Regulator_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCProofFieldNumber = 2,
    kNonceFieldNumber = 1,
  };
  // .request_proto.CProof c_proof = 2;
  bool has_c_proof() const;
  private:
  bool _internal_has_c_proof() const;
  public:
  void clear_c_proof();
  const ::request_proto::CProof& c_proof() const;
  ::request_proto::CProof* release_c_proof();
  ::request_proto::CProof* mutable_c_proof();
  void set_allocated_c_proof(::request_proto::CProof* c_proof);
  private:
  const ::request_proto::CProof& _internal_c_proof() const;
  ::request_proto::CProof* _internal_mutable_c_proof();
  public:
  void unsafe_arena_set_allocated_c_proof(
      ::request_proto::CProof* c_proof);
  ::request_proto::CProof* unsafe_arena_release_c_proof();

  // uint64 nonce = 1;
  void clear_nonce();
  ::PROTOBUF_NAMESPACE_ID::uint64 nonce() const;
  void set_nonce(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_nonce() const;
  void _internal_set_nonce(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:request_proto.ProofResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::request_proto::CProof* c_proof_;
  ::PROTOBUF_NAMESPACE_ID::uint64 nonce_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Regulator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProofRequest

// uint64 nonce = 1;
inline void ProofRequest::clear_nonce() {
  nonce_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ProofRequest::_internal_nonce() const {
  return nonce_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ProofRequest::nonce() const {
  // @@protoc_insertion_point(field_get:request_proto.ProofRequest.nonce)
  return _internal_nonce();
}
inline void ProofRequest::_internal_set_nonce(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  nonce_ = value;
}
inline void ProofRequest::set_nonce(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_nonce(value);
  // @@protoc_insertion_point(field_set:request_proto.ProofRequest.nonce)
}

// string peer_signature = 2;
inline void ProofRequest::clear_peer_signature() {
  peer_signature_.ClearToEmpty();
}
inline const std::string& ProofRequest::peer_signature() const {
  // @@protoc_insertion_point(field_get:request_proto.ProofRequest.peer_signature)
  return _internal_peer_signature();
}
inline void ProofRequest::set_peer_signature(const std::string& value) {
  _internal_set_peer_signature(value);
  // @@protoc_insertion_point(field_set:request_proto.ProofRequest.peer_signature)
}
inline std::string* ProofRequest::mutable_peer_signature() {
  // @@protoc_insertion_point(field_mutable:request_proto.ProofRequest.peer_signature)
  return _internal_mutable_peer_signature();
}
inline const std::string& ProofRequest::_internal_peer_signature() const {
  return peer_signature_.Get();
}
inline void ProofRequest::_internal_set_peer_signature(const std::string& value) {
  
  peer_signature_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ProofRequest::set_peer_signature(std::string&& value) {
  
  peer_signature_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:request_proto.ProofRequest.peer_signature)
}
inline void ProofRequest::set_peer_signature(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  peer_signature_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:request_proto.ProofRequest.peer_signature)
}
inline void ProofRequest::set_peer_signature(const char* value,
    size_t size) {
  
  peer_signature_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:request_proto.ProofRequest.peer_signature)
}
inline std::string* ProofRequest::_internal_mutable_peer_signature() {
  
  return peer_signature_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ProofRequest::release_peer_signature() {
  // @@protoc_insertion_point(field_release:request_proto.ProofRequest.peer_signature)
  return peer_signature_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ProofRequest::set_allocated_peer_signature(std::string* peer_signature) {
  if (peer_signature != nullptr) {
    
  } else {
    
  }
  peer_signature_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), peer_signature,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:request_proto.ProofRequest.peer_signature)
}

// .request_proto.TransactionInfo tx_info = 3;
inline bool ProofRequest::_internal_has_tx_info() const {
  return this != internal_default_instance() && tx_info_ != nullptr;
}
inline bool ProofRequest::has_tx_info() const {
  return _internal_has_tx_info();
}
inline const ::request_proto::TransactionInfo& ProofRequest::_internal_tx_info() const {
  const ::request_proto::TransactionInfo* p = tx_info_;
  return p != nullptr ? *p : reinterpret_cast<const ::request_proto::TransactionInfo&>(
      ::request_proto::_TransactionInfo_default_instance_);
}
inline const ::request_proto::TransactionInfo& ProofRequest::tx_info() const {
  // @@protoc_insertion_point(field_get:request_proto.ProofRequest.tx_info)
  return _internal_tx_info();
}
inline void ProofRequest::unsafe_arena_set_allocated_tx_info(
    ::request_proto::TransactionInfo* tx_info) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(tx_info_);
  }
  tx_info_ = tx_info;
  if (tx_info) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:request_proto.ProofRequest.tx_info)
}
inline ::request_proto::TransactionInfo* ProofRequest::release_tx_info() {
  
  ::request_proto::TransactionInfo* temp = tx_info_;
  tx_info_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::request_proto::TransactionInfo* ProofRequest::unsafe_arena_release_tx_info() {
  // @@protoc_insertion_point(field_release:request_proto.ProofRequest.tx_info)
  
  ::request_proto::TransactionInfo* temp = tx_info_;
  tx_info_ = nullptr;
  return temp;
}
inline ::request_proto::TransactionInfo* ProofRequest::_internal_mutable_tx_info() {
  
  if (tx_info_ == nullptr) {
    auto* p = CreateMaybeMessage<::request_proto::TransactionInfo>(GetArena());
    tx_info_ = p;
  }
  return tx_info_;
}
inline ::request_proto::TransactionInfo* ProofRequest::mutable_tx_info() {
  // @@protoc_insertion_point(field_mutable:request_proto.ProofRequest.tx_info)
  return _internal_mutable_tx_info();
}
inline void ProofRequest::set_allocated_tx_info(::request_proto::TransactionInfo* tx_info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(tx_info_);
  }
  if (tx_info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(tx_info)->GetArena();
    if (message_arena != submessage_arena) {
      tx_info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, tx_info, submessage_arena);
    }
    
  } else {
    
  }
  tx_info_ = tx_info;
  // @@protoc_insertion_point(field_set_allocated:request_proto.ProofRequest.tx_info)
}

// -------------------------------------------------------------------

// ProofResponse

// uint64 nonce = 1;
inline void ProofResponse::clear_nonce() {
  nonce_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ProofResponse::_internal_nonce() const {
  return nonce_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ProofResponse::nonce() const {
  // @@protoc_insertion_point(field_get:request_proto.ProofResponse.nonce)
  return _internal_nonce();
}
inline void ProofResponse::_internal_set_nonce(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  nonce_ = value;
}
inline void ProofResponse::set_nonce(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_nonce(value);
  // @@protoc_insertion_point(field_set:request_proto.ProofResponse.nonce)
}

// .request_proto.CProof c_proof = 2;
inline bool ProofResponse::_internal_has_c_proof() const {
  return this != internal_default_instance() && c_proof_ != nullptr;
}
inline bool ProofResponse::has_c_proof() const {
  return _internal_has_c_proof();
}
inline const ::request_proto::CProof& ProofResponse::_internal_c_proof() const {
  const ::request_proto::CProof* p = c_proof_;
  return p != nullptr ? *p : reinterpret_cast<const ::request_proto::CProof&>(
      ::request_proto::_CProof_default_instance_);
}
inline const ::request_proto::CProof& ProofResponse::c_proof() const {
  // @@protoc_insertion_point(field_get:request_proto.ProofResponse.c_proof)
  return _internal_c_proof();
}
inline void ProofResponse::unsafe_arena_set_allocated_c_proof(
    ::request_proto::CProof* c_proof) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(c_proof_);
  }
  c_proof_ = c_proof;
  if (c_proof) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:request_proto.ProofResponse.c_proof)
}
inline ::request_proto::CProof* ProofResponse::release_c_proof() {
  
  ::request_proto::CProof* temp = c_proof_;
  c_proof_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::request_proto::CProof* ProofResponse::unsafe_arena_release_c_proof() {
  // @@protoc_insertion_point(field_release:request_proto.ProofResponse.c_proof)
  
  ::request_proto::CProof* temp = c_proof_;
  c_proof_ = nullptr;
  return temp;
}
inline ::request_proto::CProof* ProofResponse::_internal_mutable_c_proof() {
  
  if (c_proof_ == nullptr) {
    auto* p = CreateMaybeMessage<::request_proto::CProof>(GetArena());
    c_proof_ = p;
  }
  return c_proof_;
}
inline ::request_proto::CProof* ProofResponse::mutable_c_proof() {
  // @@protoc_insertion_point(field_mutable:request_proto.ProofResponse.c_proof)
  return _internal_mutable_c_proof();
}
inline void ProofResponse::set_allocated_c_proof(::request_proto::CProof* c_proof) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(c_proof_);
  }
  if (c_proof) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(c_proof)->GetArena();
    if (message_arena != submessage_arena) {
      c_proof = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, c_proof, submessage_arena);
    }
    
  } else {
    
  }
  c_proof_ = c_proof;
  // @@protoc_insertion_point(field_set_allocated:request_proto.ProofResponse.c_proof)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace request_proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Regulator_2eproto
