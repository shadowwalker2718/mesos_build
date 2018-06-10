// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mesos/maintenance/maintenance.proto

#ifndef PROTOBUF_mesos_2fmaintenance_2fmaintenance_2eproto__INCLUDED
#define PROTOBUF_mesos_2fmaintenance_2fmaintenance_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "mesos/mesos.pb.h"
#include "mesos/allocator/allocator.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_mesos_2fmaintenance_2fmaintenance_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsWindowImpl();
void InitDefaultsWindow();
void InitDefaultsScheduleImpl();
void InitDefaultsSchedule();
void InitDefaultsClusterStatus_DrainingMachineImpl();
void InitDefaultsClusterStatus_DrainingMachine();
void InitDefaultsClusterStatusImpl();
void InitDefaultsClusterStatus();
inline void InitDefaults() {
  InitDefaultsWindow();
  InitDefaultsSchedule();
  InitDefaultsClusterStatus_DrainingMachine();
  InitDefaultsClusterStatus();
}
}  // namespace protobuf_mesos_2fmaintenance_2fmaintenance_2eproto
namespace mesos {
namespace maintenance {
class ClusterStatus;
class ClusterStatusDefaultTypeInternal;
extern ClusterStatusDefaultTypeInternal _ClusterStatus_default_instance_;
class ClusterStatus_DrainingMachine;
class ClusterStatus_DrainingMachineDefaultTypeInternal;
extern ClusterStatus_DrainingMachineDefaultTypeInternal _ClusterStatus_DrainingMachine_default_instance_;
class Schedule;
class ScheduleDefaultTypeInternal;
extern ScheduleDefaultTypeInternal _Schedule_default_instance_;
class Window;
class WindowDefaultTypeInternal;
extern WindowDefaultTypeInternal _Window_default_instance_;
}  // namespace maintenance
}  // namespace mesos
namespace mesos {
namespace maintenance {

// ===================================================================

class Window : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mesos.maintenance.Window) */ {
 public:
  Window();
  virtual ~Window();

  Window(const Window& from);

  inline Window& operator=(const Window& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Window(Window&& from) noexcept
    : Window() {
    *this = ::std::move(from);
  }

  inline Window& operator=(Window&& from) noexcept {
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
  static const Window& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Window* internal_default_instance() {
    return reinterpret_cast<const Window*>(
               &_Window_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Window* other);
  friend void swap(Window& a, Window& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Window* New() const PROTOBUF_FINAL { return New(NULL); }

  Window* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Window& from);
  void MergeFrom(const Window& from);
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
  void InternalSwap(Window* other);
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

  // accessors -------------------------------------------------------

  // repeated .mesos.MachineID machine_ids = 1;
  int machine_ids_size() const;
  void clear_machine_ids();
  static const int kMachineIdsFieldNumber = 1;
  const ::mesos::MachineID& machine_ids(int index) const;
  ::mesos::MachineID* mutable_machine_ids(int index);
  ::mesos::MachineID* add_machine_ids();
  ::google::protobuf::RepeatedPtrField< ::mesos::MachineID >*
      mutable_machine_ids();
  const ::google::protobuf::RepeatedPtrField< ::mesos::MachineID >&
      machine_ids() const;

  // required .mesos.Unavailability unavailability = 2;
  bool has_unavailability() const;
  void clear_unavailability();
  static const int kUnavailabilityFieldNumber = 2;
  const ::mesos::Unavailability& unavailability() const;
  ::mesos::Unavailability* release_unavailability();
  ::mesos::Unavailability* mutable_unavailability();
  void set_allocated_unavailability(::mesos::Unavailability* unavailability);

  // @@protoc_insertion_point(class_scope:mesos.maintenance.Window)
 private:
  void set_has_unavailability();
  void clear_has_unavailability();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mesos::MachineID > machine_ids_;
  ::mesos::Unavailability* unavailability_;
  friend struct ::protobuf_mesos_2fmaintenance_2fmaintenance_2eproto::TableStruct;
  friend void ::protobuf_mesos_2fmaintenance_2fmaintenance_2eproto::InitDefaultsWindowImpl();
};
// -------------------------------------------------------------------

class Schedule : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mesos.maintenance.Schedule) */ {
 public:
  Schedule();
  virtual ~Schedule();

  Schedule(const Schedule& from);

  inline Schedule& operator=(const Schedule& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Schedule(Schedule&& from) noexcept
    : Schedule() {
    *this = ::std::move(from);
  }

  inline Schedule& operator=(Schedule&& from) noexcept {
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
  static const Schedule& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Schedule* internal_default_instance() {
    return reinterpret_cast<const Schedule*>(
               &_Schedule_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Schedule* other);
  friend void swap(Schedule& a, Schedule& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Schedule* New() const PROTOBUF_FINAL { return New(NULL); }

  Schedule* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Schedule& from);
  void MergeFrom(const Schedule& from);
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
  void InternalSwap(Schedule* other);
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

  // accessors -------------------------------------------------------

  // repeated .mesos.maintenance.Window windows = 1;
  int windows_size() const;
  void clear_windows();
  static const int kWindowsFieldNumber = 1;
  const ::mesos::maintenance::Window& windows(int index) const;
  ::mesos::maintenance::Window* mutable_windows(int index);
  ::mesos::maintenance::Window* add_windows();
  ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::Window >*
      mutable_windows();
  const ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::Window >&
      windows() const;

  // @@protoc_insertion_point(class_scope:mesos.maintenance.Schedule)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::Window > windows_;
  friend struct ::protobuf_mesos_2fmaintenance_2fmaintenance_2eproto::TableStruct;
  friend void ::protobuf_mesos_2fmaintenance_2fmaintenance_2eproto::InitDefaultsScheduleImpl();
};
// -------------------------------------------------------------------

class ClusterStatus_DrainingMachine : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mesos.maintenance.ClusterStatus.DrainingMachine) */ {
 public:
  ClusterStatus_DrainingMachine();
  virtual ~ClusterStatus_DrainingMachine();

  ClusterStatus_DrainingMachine(const ClusterStatus_DrainingMachine& from);

  inline ClusterStatus_DrainingMachine& operator=(const ClusterStatus_DrainingMachine& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ClusterStatus_DrainingMachine(ClusterStatus_DrainingMachine&& from) noexcept
    : ClusterStatus_DrainingMachine() {
    *this = ::std::move(from);
  }

  inline ClusterStatus_DrainingMachine& operator=(ClusterStatus_DrainingMachine&& from) noexcept {
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
  static const ClusterStatus_DrainingMachine& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClusterStatus_DrainingMachine* internal_default_instance() {
    return reinterpret_cast<const ClusterStatus_DrainingMachine*>(
               &_ClusterStatus_DrainingMachine_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ClusterStatus_DrainingMachine* other);
  friend void swap(ClusterStatus_DrainingMachine& a, ClusterStatus_DrainingMachine& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClusterStatus_DrainingMachine* New() const PROTOBUF_FINAL { return New(NULL); }

  ClusterStatus_DrainingMachine* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ClusterStatus_DrainingMachine& from);
  void MergeFrom(const ClusterStatus_DrainingMachine& from);
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
  void InternalSwap(ClusterStatus_DrainingMachine* other);
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

  // accessors -------------------------------------------------------

  // repeated .mesos.allocator.InverseOfferStatus statuses = 2;
  int statuses_size() const;
  void clear_statuses();
  static const int kStatusesFieldNumber = 2;
  const ::mesos::allocator::InverseOfferStatus& statuses(int index) const;
  ::mesos::allocator::InverseOfferStatus* mutable_statuses(int index);
  ::mesos::allocator::InverseOfferStatus* add_statuses();
  ::google::protobuf::RepeatedPtrField< ::mesos::allocator::InverseOfferStatus >*
      mutable_statuses();
  const ::google::protobuf::RepeatedPtrField< ::mesos::allocator::InverseOfferStatus >&
      statuses() const;

  // required .mesos.MachineID id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::mesos::MachineID& id() const;
  ::mesos::MachineID* release_id();
  ::mesos::MachineID* mutable_id();
  void set_allocated_id(::mesos::MachineID* id);

  // @@protoc_insertion_point(class_scope:mesos.maintenance.ClusterStatus.DrainingMachine)
 private:
  void set_has_id();
  void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mesos::allocator::InverseOfferStatus > statuses_;
  ::mesos::MachineID* id_;
  friend struct ::protobuf_mesos_2fmaintenance_2fmaintenance_2eproto::TableStruct;
  friend void ::protobuf_mesos_2fmaintenance_2fmaintenance_2eproto::InitDefaultsClusterStatus_DrainingMachineImpl();
};
// -------------------------------------------------------------------

class ClusterStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mesos.maintenance.ClusterStatus) */ {
 public:
  ClusterStatus();
  virtual ~ClusterStatus();

  ClusterStatus(const ClusterStatus& from);

  inline ClusterStatus& operator=(const ClusterStatus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ClusterStatus(ClusterStatus&& from) noexcept
    : ClusterStatus() {
    *this = ::std::move(from);
  }

  inline ClusterStatus& operator=(ClusterStatus&& from) noexcept {
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
  static const ClusterStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClusterStatus* internal_default_instance() {
    return reinterpret_cast<const ClusterStatus*>(
               &_ClusterStatus_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(ClusterStatus* other);
  friend void swap(ClusterStatus& a, ClusterStatus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClusterStatus* New() const PROTOBUF_FINAL { return New(NULL); }

  ClusterStatus* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ClusterStatus& from);
  void MergeFrom(const ClusterStatus& from);
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
  void InternalSwap(ClusterStatus* other);
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

  typedef ClusterStatus_DrainingMachine DrainingMachine;

  // accessors -------------------------------------------------------

  // repeated .mesos.maintenance.ClusterStatus.DrainingMachine draining_machines = 1;
  int draining_machines_size() const;
  void clear_draining_machines();
  static const int kDrainingMachinesFieldNumber = 1;
  const ::mesos::maintenance::ClusterStatus_DrainingMachine& draining_machines(int index) const;
  ::mesos::maintenance::ClusterStatus_DrainingMachine* mutable_draining_machines(int index);
  ::mesos::maintenance::ClusterStatus_DrainingMachine* add_draining_machines();
  ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::ClusterStatus_DrainingMachine >*
      mutable_draining_machines();
  const ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::ClusterStatus_DrainingMachine >&
      draining_machines() const;

  // repeated .mesos.MachineID down_machines = 2;
  int down_machines_size() const;
  void clear_down_machines();
  static const int kDownMachinesFieldNumber = 2;
  const ::mesos::MachineID& down_machines(int index) const;
  ::mesos::MachineID* mutable_down_machines(int index);
  ::mesos::MachineID* add_down_machines();
  ::google::protobuf::RepeatedPtrField< ::mesos::MachineID >*
      mutable_down_machines();
  const ::google::protobuf::RepeatedPtrField< ::mesos::MachineID >&
      down_machines() const;

  // @@protoc_insertion_point(class_scope:mesos.maintenance.ClusterStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::ClusterStatus_DrainingMachine > draining_machines_;
  ::google::protobuf::RepeatedPtrField< ::mesos::MachineID > down_machines_;
  friend struct ::protobuf_mesos_2fmaintenance_2fmaintenance_2eproto::TableStruct;
  friend void ::protobuf_mesos_2fmaintenance_2fmaintenance_2eproto::InitDefaultsClusterStatusImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Window

// repeated .mesos.MachineID machine_ids = 1;
inline int Window::machine_ids_size() const {
  return machine_ids_.size();
}
inline const ::mesos::MachineID& Window::machine_ids(int index) const {
  // @@protoc_insertion_point(field_get:mesos.maintenance.Window.machine_ids)
  return machine_ids_.Get(index);
}
inline ::mesos::MachineID* Window::mutable_machine_ids(int index) {
  // @@protoc_insertion_point(field_mutable:mesos.maintenance.Window.machine_ids)
  return machine_ids_.Mutable(index);
}
inline ::mesos::MachineID* Window::add_machine_ids() {
  // @@protoc_insertion_point(field_add:mesos.maintenance.Window.machine_ids)
  return machine_ids_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mesos::MachineID >*
Window::mutable_machine_ids() {
  // @@protoc_insertion_point(field_mutable_list:mesos.maintenance.Window.machine_ids)
  return &machine_ids_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mesos::MachineID >&
Window::machine_ids() const {
  // @@protoc_insertion_point(field_list:mesos.maintenance.Window.machine_ids)
  return machine_ids_;
}

// required .mesos.Unavailability unavailability = 2;
inline bool Window::has_unavailability() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Window::set_has_unavailability() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Window::clear_has_unavailability() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::mesos::Unavailability& Window::unavailability() const {
  const ::mesos::Unavailability* p = unavailability_;
  // @@protoc_insertion_point(field_get:mesos.maintenance.Window.unavailability)
  return p != NULL ? *p : *reinterpret_cast<const ::mesos::Unavailability*>(
      &::mesos::_Unavailability_default_instance_);
}
inline ::mesos::Unavailability* Window::release_unavailability() {
  // @@protoc_insertion_point(field_release:mesos.maintenance.Window.unavailability)
  clear_has_unavailability();
  ::mesos::Unavailability* temp = unavailability_;
  unavailability_ = NULL;
  return temp;
}
inline ::mesos::Unavailability* Window::mutable_unavailability() {
  set_has_unavailability();
  if (unavailability_ == NULL) {
    unavailability_ = new ::mesos::Unavailability;
  }
  // @@protoc_insertion_point(field_mutable:mesos.maintenance.Window.unavailability)
  return unavailability_;
}
inline void Window::set_allocated_unavailability(::mesos::Unavailability* unavailability) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(unavailability_);
  }
  if (unavailability) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(unavailability)->GetArena();
    if (message_arena != submessage_arena) {
      unavailability = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, unavailability, submessage_arena);
    }
    set_has_unavailability();
  } else {
    clear_has_unavailability();
  }
  unavailability_ = unavailability;
  // @@protoc_insertion_point(field_set_allocated:mesos.maintenance.Window.unavailability)
}

// -------------------------------------------------------------------

// Schedule

// repeated .mesos.maintenance.Window windows = 1;
inline int Schedule::windows_size() const {
  return windows_.size();
}
inline void Schedule::clear_windows() {
  windows_.Clear();
}
inline const ::mesos::maintenance::Window& Schedule::windows(int index) const {
  // @@protoc_insertion_point(field_get:mesos.maintenance.Schedule.windows)
  return windows_.Get(index);
}
inline ::mesos::maintenance::Window* Schedule::mutable_windows(int index) {
  // @@protoc_insertion_point(field_mutable:mesos.maintenance.Schedule.windows)
  return windows_.Mutable(index);
}
inline ::mesos::maintenance::Window* Schedule::add_windows() {
  // @@protoc_insertion_point(field_add:mesos.maintenance.Schedule.windows)
  return windows_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::Window >*
Schedule::mutable_windows() {
  // @@protoc_insertion_point(field_mutable_list:mesos.maintenance.Schedule.windows)
  return &windows_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::Window >&
Schedule::windows() const {
  // @@protoc_insertion_point(field_list:mesos.maintenance.Schedule.windows)
  return windows_;
}

// -------------------------------------------------------------------

// ClusterStatus_DrainingMachine

// required .mesos.MachineID id = 1;
inline bool ClusterStatus_DrainingMachine::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClusterStatus_DrainingMachine::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClusterStatus_DrainingMachine::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::mesos::MachineID& ClusterStatus_DrainingMachine::id() const {
  const ::mesos::MachineID* p = id_;
  // @@protoc_insertion_point(field_get:mesos.maintenance.ClusterStatus.DrainingMachine.id)
  return p != NULL ? *p : *reinterpret_cast<const ::mesos::MachineID*>(
      &::mesos::_MachineID_default_instance_);
}
inline ::mesos::MachineID* ClusterStatus_DrainingMachine::release_id() {
  // @@protoc_insertion_point(field_release:mesos.maintenance.ClusterStatus.DrainingMachine.id)
  clear_has_id();
  ::mesos::MachineID* temp = id_;
  id_ = NULL;
  return temp;
}
inline ::mesos::MachineID* ClusterStatus_DrainingMachine::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    id_ = new ::mesos::MachineID;
  }
  // @@protoc_insertion_point(field_mutable:mesos.maintenance.ClusterStatus.DrainingMachine.id)
  return id_;
}
inline void ClusterStatus_DrainingMachine::set_allocated_id(::mesos::MachineID* id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(id_);
  }
  if (id) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(id)->GetArena();
    if (message_arena != submessage_arena) {
      id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, id, submessage_arena);
    }
    set_has_id();
  } else {
    clear_has_id();
  }
  id_ = id;
  // @@protoc_insertion_point(field_set_allocated:mesos.maintenance.ClusterStatus.DrainingMachine.id)
}

// repeated .mesos.allocator.InverseOfferStatus statuses = 2;
inline int ClusterStatus_DrainingMachine::statuses_size() const {
  return statuses_.size();
}
inline const ::mesos::allocator::InverseOfferStatus& ClusterStatus_DrainingMachine::statuses(int index) const {
  // @@protoc_insertion_point(field_get:mesos.maintenance.ClusterStatus.DrainingMachine.statuses)
  return statuses_.Get(index);
}
inline ::mesos::allocator::InverseOfferStatus* ClusterStatus_DrainingMachine::mutable_statuses(int index) {
  // @@protoc_insertion_point(field_mutable:mesos.maintenance.ClusterStatus.DrainingMachine.statuses)
  return statuses_.Mutable(index);
}
inline ::mesos::allocator::InverseOfferStatus* ClusterStatus_DrainingMachine::add_statuses() {
  // @@protoc_insertion_point(field_add:mesos.maintenance.ClusterStatus.DrainingMachine.statuses)
  return statuses_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mesos::allocator::InverseOfferStatus >*
ClusterStatus_DrainingMachine::mutable_statuses() {
  // @@protoc_insertion_point(field_mutable_list:mesos.maintenance.ClusterStatus.DrainingMachine.statuses)
  return &statuses_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mesos::allocator::InverseOfferStatus >&
ClusterStatus_DrainingMachine::statuses() const {
  // @@protoc_insertion_point(field_list:mesos.maintenance.ClusterStatus.DrainingMachine.statuses)
  return statuses_;
}

// -------------------------------------------------------------------

// ClusterStatus

// repeated .mesos.maintenance.ClusterStatus.DrainingMachine draining_machines = 1;
inline int ClusterStatus::draining_machines_size() const {
  return draining_machines_.size();
}
inline void ClusterStatus::clear_draining_machines() {
  draining_machines_.Clear();
}
inline const ::mesos::maintenance::ClusterStatus_DrainingMachine& ClusterStatus::draining_machines(int index) const {
  // @@protoc_insertion_point(field_get:mesos.maintenance.ClusterStatus.draining_machines)
  return draining_machines_.Get(index);
}
inline ::mesos::maintenance::ClusterStatus_DrainingMachine* ClusterStatus::mutable_draining_machines(int index) {
  // @@protoc_insertion_point(field_mutable:mesos.maintenance.ClusterStatus.draining_machines)
  return draining_machines_.Mutable(index);
}
inline ::mesos::maintenance::ClusterStatus_DrainingMachine* ClusterStatus::add_draining_machines() {
  // @@protoc_insertion_point(field_add:mesos.maintenance.ClusterStatus.draining_machines)
  return draining_machines_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::ClusterStatus_DrainingMachine >*
ClusterStatus::mutable_draining_machines() {
  // @@protoc_insertion_point(field_mutable_list:mesos.maintenance.ClusterStatus.draining_machines)
  return &draining_machines_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mesos::maintenance::ClusterStatus_DrainingMachine >&
ClusterStatus::draining_machines() const {
  // @@protoc_insertion_point(field_list:mesos.maintenance.ClusterStatus.draining_machines)
  return draining_machines_;
}

// repeated .mesos.MachineID down_machines = 2;
inline int ClusterStatus::down_machines_size() const {
  return down_machines_.size();
}
inline const ::mesos::MachineID& ClusterStatus::down_machines(int index) const {
  // @@protoc_insertion_point(field_get:mesos.maintenance.ClusterStatus.down_machines)
  return down_machines_.Get(index);
}
inline ::mesos::MachineID* ClusterStatus::mutable_down_machines(int index) {
  // @@protoc_insertion_point(field_mutable:mesos.maintenance.ClusterStatus.down_machines)
  return down_machines_.Mutable(index);
}
inline ::mesos::MachineID* ClusterStatus::add_down_machines() {
  // @@protoc_insertion_point(field_add:mesos.maintenance.ClusterStatus.down_machines)
  return down_machines_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mesos::MachineID >*
ClusterStatus::mutable_down_machines() {
  // @@protoc_insertion_point(field_mutable_list:mesos.maintenance.ClusterStatus.down_machines)
  return &down_machines_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mesos::MachineID >&
ClusterStatus::down_machines() const {
  // @@protoc_insertion_point(field_list:mesos.maintenance.ClusterStatus.down_machines)
  return down_machines_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace maintenance
}  // namespace mesos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mesos_2fmaintenance_2fmaintenance_2eproto__INCLUDED
