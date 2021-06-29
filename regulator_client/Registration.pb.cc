// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Registration.proto

#include "Registration.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace request_proto {
constexpr RegisterInfo::RegisterInfo(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : ecc_pubkey_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , tx_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct RegisterInfoDefaultTypeInternal {
  constexpr RegisterInfoDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RegisterInfoDefaultTypeInternal() {}
  union {
    RegisterInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RegisterInfoDefaultTypeInternal _RegisterInfo_default_instance_;
constexpr Empty::Empty(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : nonce_(PROTOBUF_ULONGLONG(0)){}
struct EmptyDefaultTypeInternal {
  constexpr EmptyDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EmptyDefaultTypeInternal() {}
  union {
    Empty _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EmptyDefaultTypeInternal _Empty_default_instance_;
}  // namespace request_proto
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Registration_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Registration_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Registration_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Registration_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::request_proto::RegisterInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::request_proto::RegisterInfo, ecc_pubkey_),
  PROTOBUF_FIELD_OFFSET(::request_proto::RegisterInfo, tx_id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::request_proto::Empty, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::request_proto::Empty, nonce_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::request_proto::RegisterInfo)},
  { 7, -1, sizeof(::request_proto::Empty)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::request_proto::_RegisterInfo_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::request_proto::_Empty_default_instance_),
};

const char descriptor_table_protodef_Registration_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022Registration.proto\022\rrequest_proto\"1\n\014R"
  "egisterInfo\022\022\n\necc_pubkey\030\001 \001(\t\022\r\n\005tx_id"
  "\030\002 \001(\t\"\026\n\005Empty\022\r\n\005nonce\030\001 \001(\0042V\n\014Regist"
  "ration\022F\n\017GetRegisterInfo\022\024.request_prot"
  "o.Empty\032\033.request_proto.RegisterInfo\"\000b\006"
  "proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Registration_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Registration_2eproto = {
  false, false, 206, descriptor_table_protodef_Registration_2eproto, "Registration.proto", 
  &descriptor_table_Registration_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_Registration_2eproto::offsets,
  file_level_metadata_Registration_2eproto, file_level_enum_descriptors_Registration_2eproto, file_level_service_descriptors_Registration_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_Registration_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Registration_2eproto);
  return descriptor_table_Registration_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_Registration_2eproto(&descriptor_table_Registration_2eproto);
namespace request_proto {

// ===================================================================

class RegisterInfo::_Internal {
 public:
};

RegisterInfo::RegisterInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:request_proto.RegisterInfo)
}
RegisterInfo::RegisterInfo(const RegisterInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ecc_pubkey_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_ecc_pubkey().empty()) {
    ecc_pubkey_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_ecc_pubkey(), 
      GetArena());
  }
  tx_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_tx_id().empty()) {
    tx_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_tx_id(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:request_proto.RegisterInfo)
}

void RegisterInfo::SharedCtor() {
ecc_pubkey_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
tx_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

RegisterInfo::~RegisterInfo() {
  // @@protoc_insertion_point(destructor:request_proto.RegisterInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RegisterInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  ecc_pubkey_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  tx_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void RegisterInfo::ArenaDtor(void* object) {
  RegisterInfo* _this = reinterpret_cast< RegisterInfo* >(object);
  (void)_this;
}
void RegisterInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RegisterInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RegisterInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:request_proto.RegisterInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ecc_pubkey_.ClearToEmpty();
  tx_id_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RegisterInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string ecc_pubkey = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_ecc_pubkey();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "request_proto.RegisterInfo.ecc_pubkey"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string tx_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_tx_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "request_proto.RegisterInfo.tx_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RegisterInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:request_proto.RegisterInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string ecc_pubkey = 1;
  if (this->ecc_pubkey().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ecc_pubkey().data(), static_cast<int>(this->_internal_ecc_pubkey().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "request_proto.RegisterInfo.ecc_pubkey");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_ecc_pubkey(), target);
  }

  // string tx_id = 2;
  if (this->tx_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_tx_id().data(), static_cast<int>(this->_internal_tx_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "request_proto.RegisterInfo.tx_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_tx_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:request_proto.RegisterInfo)
  return target;
}

size_t RegisterInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:request_proto.RegisterInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string ecc_pubkey = 1;
  if (this->ecc_pubkey().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ecc_pubkey());
  }

  // string tx_id = 2;
  if (this->tx_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_tx_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RegisterInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:request_proto.RegisterInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const RegisterInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RegisterInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:request_proto.RegisterInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:request_proto.RegisterInfo)
    MergeFrom(*source);
  }
}

void RegisterInfo::MergeFrom(const RegisterInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:request_proto.RegisterInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.ecc_pubkey().size() > 0) {
    _internal_set_ecc_pubkey(from._internal_ecc_pubkey());
  }
  if (from.tx_id().size() > 0) {
    _internal_set_tx_id(from._internal_tx_id());
  }
}

void RegisterInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:request_proto.RegisterInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RegisterInfo::CopyFrom(const RegisterInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:request_proto.RegisterInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegisterInfo::IsInitialized() const {
  return true;
}

void RegisterInfo::InternalSwap(RegisterInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ecc_pubkey_.Swap(&other->ecc_pubkey_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  tx_id_.Swap(&other->tx_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata RegisterInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class Empty::_Internal {
 public:
};

Empty::Empty(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:request_proto.Empty)
}
Empty::Empty(const Empty& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  nonce_ = from.nonce_;
  // @@protoc_insertion_point(copy_constructor:request_proto.Empty)
}

void Empty::SharedCtor() {
nonce_ = PROTOBUF_ULONGLONG(0);
}

Empty::~Empty() {
  // @@protoc_insertion_point(destructor:request_proto.Empty)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Empty::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Empty::ArenaDtor(void* object) {
  Empty* _this = reinterpret_cast< Empty* >(object);
  (void)_this;
}
void Empty::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Empty::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Empty::Clear() {
// @@protoc_insertion_point(message_clear_start:request_proto.Empty)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  nonce_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Empty::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 nonce = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          nonce_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Empty::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:request_proto.Empty)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 nonce = 1;
  if (this->nonce() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_nonce(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:request_proto.Empty)
  return target;
}

size_t Empty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:request_proto.Empty)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint64 nonce = 1;
  if (this->nonce() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_nonce());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Empty::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:request_proto.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  const Empty* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Empty>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:request_proto.Empty)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:request_proto.Empty)
    MergeFrom(*source);
  }
}

void Empty::MergeFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:request_proto.Empty)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.nonce() != 0) {
    _internal_set_nonce(from._internal_nonce());
  }
}

void Empty::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:request_proto.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Empty::CopyFrom(const Empty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:request_proto.Empty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Empty::IsInitialized() const {
  return true;
}

void Empty::InternalSwap(Empty* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(nonce_, other->nonce_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Empty::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace request_proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::request_proto::RegisterInfo* Arena::CreateMaybeMessage< ::request_proto::RegisterInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::request_proto::RegisterInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::request_proto::Empty* Arena::CreateMaybeMessage< ::request_proto::Empty >(Arena* arena) {
  return Arena::CreateMessageInternal< ::request_proto::Empty >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
