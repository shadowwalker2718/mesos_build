// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mesos/v1/allocator/allocator.proto

#ifndef PROTOBUF_mesos_2fv1_2fallocator_2fallocator_2eproto__INCLUDED
#define PROTOBUF_mesos_2fv1_2fallocator_2fallocator_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "mesos/v1/mesos.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_mesos_2fv1_2fallocator_2fallocator_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsInverseOfferStatusImpl();
void InitDefaultsInverseOfferStatus();
inline void InitDefaults() {
  InitDefaultsInverseOfferStatus();
}
}  // namespace protobuf_mesos_2fv1_2fallocator_2fallocator_2eproto
namespace mesos {
namespace v1 {
namespace allocator {
class InverseOfferStatus;
class InverseOfferStatusDefaultTypeInternal;
extern InverseOfferStatusDefaultTypeInternal _InverseOfferStatus_default_instance_;
}  // namespace allocator
}  // namespace v1
}  // namespace mesos
namespace mesos {
namespace v1 {
namespace allocator {

enum InverseOfferStatus_Status {
  InverseOfferStatus_Status_UNKNOWN = 1,
  InverseOfferStatus_Status_ACCEPT = 2,
  InverseOfferStatus_Status_DECLINE = 3
};
bool InverseOfferStatus_Status_IsValid(int value);
const InverseOfferStatus_Status InverseOfferStatus_Status_Status_MIN = InverseOfferStatus_Status_UNKNOWN;
const InverseOfferStatus_Status InverseOfferStatus_Status_Status_MAX = InverseOfferStatus_Status_DECLINE;
const int InverseOfferStatus_Status_Status_ARRAYSIZE = InverseOfferStatus_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* InverseOfferStatus_Status_descriptor();
inline const ::std::string& InverseOfferStatus_Status_Name(InverseOfferStatus_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    InverseOfferStatus_Status_descriptor(), value);
}
inline bool InverseOfferStatus_Status_Parse(
    const ::std::string& name, InverseOfferStatus_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<InverseOfferStatus_Status>(
    InverseOfferStatus_Status_descriptor(), name, value);
}
// ===================================================================

class InverseOfferStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mesos.v1.allocator.InverseOfferStatus) */ {
 public:
  InverseOfferStatus();
  virtual ~InverseOfferStatus();

  InverseOfferStatus(const InverseOfferStatus& from);

  inline InverseOfferStatus& operator=(const InverseOfferStatus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InverseOfferStatus(InverseOfferStatus&& from) noexcept
    : InverseOfferStatus() {
    *this = ::std::move(from);
  }

  inline InverseOfferStatus& operator=(InverseOfferStatus&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const InverseOfferStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InverseOfferStatus* internal_default_instance() {
    return reinterpret_cast<const InverseOfferStatus*>(
               &_InverseOfferStatus_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(InverseOfferStatus* other);
  friend void swap(InverseOfferStatus& a, InverseOfferStatus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InverseOfferStatus* New() const PROTOBUF_FINAL { return New(NULL); }

  InverseOfferStatus* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const InverseOfferStatus& from);
  void MergeFrom(const InverseOfferStatus& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(InverseOfferStatus* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef InverseOfferStatus_Status Status;
  static const Status UNKNOWN =
    InverseOfferStatus_Status_UNKNOWN;
  static const Status ACCEPT =
    InverseOfferStatus_Status_ACCEPT;
  static const Status DECLINE =
    InverseOfferStatus_Status_DECLINE;
  static inline bool Status_IsValid(int value) {
    return InverseOfferStatus_Status_IsValid(value);
  }
  static const Status Status_MIN =
    InverseOfferStatus_Status_Status_MIN;
  static const Status Status_MAX =
    InverseOfferStatus_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    InverseOfferStatus_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return InverseOfferStatus_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return InverseOfferStatus_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return InverseOfferStatus_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .mesos.v1.FrameworkID framework_id = 2;
  bool has_framework_id() const;
  void clear_framework_id();
  static const int kFrameworkIdFieldNumber = 2;
  const ::mesos::v1::FrameworkID& framework_id() const;
  ::mesos::v1::FrameworkID* release_framework_id();
  ::mesos::v1::FrameworkID* mutable_framework_id();
  void set_allocated_framework_id(::mesos::v1::FrameworkID* framework_id);

  // required .mesos.v1.TimeInfo timestamp = 3;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  const ::mesos::v1::TimeInfo& timestamp() const;
  ::mesos::v1::TimeInfo* release_timestamp();
  ::mesos::v1::TimeInfo* mutable_timestamp();
  void set_allocated_timestamp(::mesos::v1::TimeInfo* timestamp);

  // required .mesos.v1.allocator.InverseOfferStatus.Status status = 1;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::mesos::v1::allocator::InverseOfferStatus_Status status() const;
  void set_status(::mesos::v1::allocator::InverseOfferStatus_Status value);

  // @@protoc_insertion_point(class_scope:mesos.v1.allocator.InverseOfferStatus)
 private:
  void set_has_status();
  void clear_has_status();
  void set_has_framework_id();
  void clear_has_framework_id();
  void set_has_timestamp();
  void clear_has_timestamp();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::mesos::v1::FrameworkID* framework_id_;
  ::mesos::v1::TimeInfo* timestamp_;
  int status_;
  friend struct ::protobuf_mesos_2fv1_2fallocator_2fallocator_2eproto::TableStruct;
  friend void ::protobuf_mesos_2fv1_2fallocator_2fallocator_2eproto::InitDefaultsInverseOfferStatusImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InverseOfferStatus

// required .mesos.v1.allocator.InverseOfferStatus.Status status = 1;
inline bool InverseOfferStatus::has_status() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InverseOfferStatus::set_has_status() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InverseOfferStatus::clear_has_status() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void InverseOfferStatus::clear_status() {
  status_ = 1;
  clear_has_status();
}
inline ::mesos::v1::allocator::InverseOfferStatus_Status InverseOfferStatus::status() const {
  // @@protoc_insertion_point(field_get:mesos.v1.allocator.InverseOfferStatus.status)
  return static_cast< ::mesos::v1::allocator::InverseOfferStatus_Status >(status_);
}
inline void InverseOfferStatus::set_status(::mesos::v1::allocator::InverseOfferStatus_Status value) {
  assert(::mesos::v1::allocator::InverseOfferStatus_Status_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:mesos.v1.allocator.InverseOfferStatus.status)
}

// required .mesos.v1.FrameworkID framework_id = 2;
inline bool InverseOfferStatus::has_framework_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InverseOfferStatus::set_has_framework_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InverseOfferStatus::clear_has_framework_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::mesos::v1::FrameworkID& InverseOfferStatus::framework_id() const {
  const ::mesos::v1::FrameworkID* p = framework_id_;
  // @@protoc_insertion_point(field_get:mesos.v1.allocator.InverseOfferStatus.framework_id)
  return p != NULL ? *p : *reinterpret_cast<const ::mesos::v1::FrameworkID*>(
      &::mesos::v1::_FrameworkID_default_instance_);
}
inline ::mesos::v1::FrameworkID* InverseOfferStatus::release_framework_id() {
  // @@protoc_insertion_point(field_release:mesos.v1.allocator.InverseOfferStatus.framework_id)
  clear_has_framework_id();
  ::mesos::v1::FrameworkID* temp = framework_id_;
  framework_id_ = NULL;
  return temp;
}
inline ::mesos::v1::FrameworkID* InverseOfferStatus::mutable_framework_id() {
  set_has_framework_id();
  if (framework_id_ == NULL) {
    framework_id_ = new ::mesos::v1::FrameworkID;
  }
  // @@protoc_insertion_point(field_mutable:mesos.v1.allocator.InverseOfferStatus.framework_id)
  return framework_id_;
}
inline void InverseOfferStatus::set_allocated_framework_id(::mesos::v1::FrameworkID* framework_id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(framework_id_);
  }
  if (framework_id) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      framework_id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, framework_id, submessage_arena);
    }
    set_has_framework_id();
  } else {
    clear_has_framework_id();
  }
  framework_id_ = framework_id;
  // @@protoc_insertion_point(field_set_allocated:mesos.v1.allocator.InverseOfferStatus.framework_id)
}

// required .mesos.v1.TimeInfo timestamp = 3;
inline bool InverseOfferStatus::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InverseOfferStatus::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InverseOfferStatus::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::mesos::v1::TimeInfo& InverseOfferStatus::timestamp() const {
  const ::mesos::v1::TimeInfo* p = timestamp_;
  // @@protoc_insertion_point(field_get:mesos.v1.allocator.InverseOfferStatus.timestamp)
  return p != NULL ? *p : *reinterpret_cast<const ::mesos::v1::TimeInfo*>(
      &::mesos::v1::_TimeInfo_default_instance_);
}
inline ::mesos::v1::TimeInfo* InverseOfferStatus::release_timestamp() {
  // @@protoc_insertion_point(field_release:mesos.v1.allocator.InverseOfferStatus.timestamp)
  clear_has_timestamp();
  ::mesos::v1::TimeInfo* temp = timestamp_;
  timestamp_ = NULL;
  return temp;
}
inline ::mesos::v1::TimeInfo* InverseOfferStatus::mutable_timestamp() {
  set_has_timestamp();
  if (timestamp_ == NULL) {
    timestamp_ = new ::mesos::v1::TimeInfo;
  }
  // @@protoc_insertion_point(field_mutable:mesos.v1.allocator.InverseOfferStatus.timestamp)
  return timestamp_;
}
inline void InverseOfferStatus::set_allocated_timestamp(::mesos::v1::TimeInfo* timestamp) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(timestamp_);
  }
  if (timestamp) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      timestamp = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    set_has_timestamp();
  } else {
    clear_has_timestamp();
  }
  timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:mesos.v1.allocator.InverseOfferStatus.timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace allocator
}  // namespace v1
}  // namespace mesos

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::mesos::v1::allocator::InverseOfferStatus_Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mesos::v1::allocator::InverseOfferStatus_Status>() {
  return ::mesos::v1::allocator::InverseOfferStatus_Status_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mesos_2fv1_2fallocator_2fallocator_2eproto__INCLUDED
