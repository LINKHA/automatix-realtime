// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: protobuf/test.proto
// Protobuf C++ Version: 5.28.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2ftest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2ftest_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5028002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protobuf_2ftest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2ftest_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_protobuf_2ftest_2eproto;
class move_start;
struct move_startDefaultTypeInternal;
extern move_startDefaultTypeInternal _move_start_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class move_start final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:move_start) */ {
 public:
  inline move_start() : move_start(nullptr) {}
  ~move_start() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR move_start(
      ::google::protobuf::internal::ConstantInitialized);

  inline move_start(const move_start& from) : move_start(nullptr, from) {}
  inline move_start(move_start&& from) noexcept
      : move_start(nullptr, std::move(from)) {}
  inline move_start& operator=(const move_start& from) {
    CopyFrom(from);
    return *this;
  }
  inline move_start& operator=(move_start&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const move_start& default_instance() {
    return *internal_default_instance();
  }
  static inline const move_start* internal_default_instance() {
    return reinterpret_cast<const move_start*>(
        &_move_start_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(move_start& a, move_start& b) { a.Swap(&b); }
  inline void Swap(move_start* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(move_start* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  move_start* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<move_start>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const move_start& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const move_start& from) { move_start::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(move_start* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "move_start"; }

 protected:
  explicit move_start(::google::protobuf::Arena* arena);
  move_start(::google::protobuf::Arena* arena, const move_start& from);
  move_start(::google::protobuf::Arena* arena, move_start&& from) noexcept
      : move_start(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kAngleFieldNumber = 1,
    kMoveStateFieldNumber = 2,
    kUidFieldNumber = 3,
    kMoveTimeFieldNumber = 4,
  };
  // int64 angle = 1;
  void clear_angle() ;
  ::int64_t angle() const;
  void set_angle(::int64_t value);

  private:
  ::int64_t _internal_angle() const;
  void _internal_set_angle(::int64_t value);

  public:
  // int64 move_state = 2;
  void clear_move_state() ;
  ::int64_t move_state() const;
  void set_move_state(::int64_t value);

  private:
  ::int64_t _internal_move_state() const;
  void _internal_set_move_state(::int64_t value);

  public:
  // int64 uid = 3;
  void clear_uid() ;
  ::int64_t uid() const;
  void set_uid(::int64_t value);

  private:
  ::int64_t _internal_uid() const;
  void _internal_set_uid(::int64_t value);

  public:
  // int64 move_time = 4;
  void clear_move_time() ;
  ::int64_t move_time() const;
  void set_move_time(::int64_t value);

  private:
  ::int64_t _internal_move_time() const;
  void _internal_set_move_time(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:move_start)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_move_start_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const move_start& from_msg);
    ::int64_t angle_;
    ::int64_t move_state_;
    ::int64_t uid_;
    ::int64_t move_time_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protobuf_2ftest_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// move_start

// int64 angle = 1;
inline void move_start::clear_angle() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.angle_ = ::int64_t{0};
}
inline ::int64_t move_start::angle() const {
  // @@protoc_insertion_point(field_get:move_start.angle)
  return _internal_angle();
}
inline void move_start::set_angle(::int64_t value) {
  _internal_set_angle(value);
  // @@protoc_insertion_point(field_set:move_start.angle)
}
inline ::int64_t move_start::_internal_angle() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.angle_;
}
inline void move_start::_internal_set_angle(::int64_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.angle_ = value;
}

// int64 move_state = 2;
inline void move_start::clear_move_state() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.move_state_ = ::int64_t{0};
}
inline ::int64_t move_start::move_state() const {
  // @@protoc_insertion_point(field_get:move_start.move_state)
  return _internal_move_state();
}
inline void move_start::set_move_state(::int64_t value) {
  _internal_set_move_state(value);
  // @@protoc_insertion_point(field_set:move_start.move_state)
}
inline ::int64_t move_start::_internal_move_state() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.move_state_;
}
inline void move_start::_internal_set_move_state(::int64_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.move_state_ = value;
}

// int64 uid = 3;
inline void move_start::clear_uid() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.uid_ = ::int64_t{0};
}
inline ::int64_t move_start::uid() const {
  // @@protoc_insertion_point(field_get:move_start.uid)
  return _internal_uid();
}
inline void move_start::set_uid(::int64_t value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:move_start.uid)
}
inline ::int64_t move_start::_internal_uid() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.uid_;
}
inline void move_start::_internal_set_uid(::int64_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.uid_ = value;
}

// int64 move_time = 4;
inline void move_start::clear_move_time() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.move_time_ = ::int64_t{0};
}
inline ::int64_t move_start::move_time() const {
  // @@protoc_insertion_point(field_get:move_start.move_time)
  return _internal_move_time();
}
inline void move_start::set_move_time(::int64_t value) {
  _internal_set_move_time(value);
  // @@protoc_insertion_point(field_set:move_start.move_time)
}
inline ::int64_t move_start::_internal_move_time() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.move_time_;
}
inline void move_start::_internal_set_move_time(::int64_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.move_time_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protobuf_2ftest_2eproto_2epb_2eh