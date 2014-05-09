// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gabriel/protocol/shared.proto

#ifndef PROTOBUF_gabriel_2fprotocol_2fshared_2eproto__INCLUDED
#define PROTOBUF_gabriel_2fprotocol_2fshared_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace gabriel {
namespace protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_gabriel_2fprotocol_2fshared_2eproto();
void protobuf_AssignDesc_gabriel_2fprotocol_2fshared_2eproto();
void protobuf_ShutdownFile_gabriel_2fprotocol_2fshared_2eproto();

class PubMsg;
class PubOuter;
class PubOuter_PubInner;

enum PubOuter_PubInnerEnum {
  PubOuter_PubInnerEnum_ENUM_PUBINNER_1 = 8,
  PubOuter_PubInnerEnum_ENUM_PUBINNER_2 = 9,
  PubOuter_PubInnerEnum_ENUM_PUBINNER_3 = 10
};
bool PubOuter_PubInnerEnum_IsValid(int value);
const PubOuter_PubInnerEnum PubOuter_PubInnerEnum_PubInnerEnum_MIN = PubOuter_PubInnerEnum_ENUM_PUBINNER_1;
const PubOuter_PubInnerEnum PubOuter_PubInnerEnum_PubInnerEnum_MAX = PubOuter_PubInnerEnum_ENUM_PUBINNER_3;
const int PubOuter_PubInnerEnum_PubInnerEnum_ARRAYSIZE = PubOuter_PubInnerEnum_PubInnerEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* PubOuter_PubInnerEnum_descriptor();
inline const ::std::string& PubOuter_PubInnerEnum_Name(PubOuter_PubInnerEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    PubOuter_PubInnerEnum_descriptor(), value);
}
inline bool PubOuter_PubInnerEnum_Parse(
    const ::std::string& name, PubOuter_PubInnerEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PubOuter_PubInnerEnum>(
    PubOuter_PubInnerEnum_descriptor(), name, value);
}
enum PubEnum {
  ENUMPUB_1 = 999,
  ENUMPUB_2 = 233,
  ENUMPUB_3 = 234
};
bool PubEnum_IsValid(int value);
const PubEnum PubEnum_MIN = ENUMPUB_2;
const PubEnum PubEnum_MAX = ENUMPUB_1;
const int PubEnum_ARRAYSIZE = PubEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* PubEnum_descriptor();
inline const ::std::string& PubEnum_Name(PubEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    PubEnum_descriptor(), value);
}
inline bool PubEnum_Parse(
    const ::std::string& name, PubEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PubEnum>(
    PubEnum_descriptor(), name, value);
}
// ===================================================================

class PubMsg : public ::google::protobuf::Message {
 public:
  PubMsg();
  virtual ~PubMsg();
  
  PubMsg(const PubMsg& from);
  
  inline PubMsg& operator=(const PubMsg& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PubMsg& default_instance();
  
  void Swap(PubMsg* other);
  
  // implements Message ----------------------------------------------
  
  PubMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PubMsg& from);
  void MergeFrom(const PubMsg& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 pubid = 1;
  inline bool has_pubid() const;
  inline void clear_pubid();
  static const int kPubidFieldNumber = 1;
  inline ::google::protobuf::int32 pubid() const;
  inline void set_pubid(::google::protobuf::int32 value);
  
  // optional string pubname = 2;
  inline bool has_pubname() const;
  inline void clear_pubname();
  static const int kPubnameFieldNumber = 2;
  inline const ::std::string& pubname() const;
  inline void set_pubname(const ::std::string& value);
  inline void set_pubname(const char* value);
  inline void set_pubname(const char* value, size_t size);
  inline ::std::string* mutable_pubname();
  inline ::std::string* release_pubname();
  
  // @@protoc_insertion_point(class_scope:gabriel.protocol.PubMsg)
 private:
  inline void set_has_pubid();
  inline void clear_has_pubid();
  inline void set_has_pubname();
  inline void clear_has_pubname();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* pubname_;
  ::google::protobuf::int32 pubid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_gabriel_2fprotocol_2fshared_2eproto();
  friend void protobuf_AssignDesc_gabriel_2fprotocol_2fshared_2eproto();
  friend void protobuf_ShutdownFile_gabriel_2fprotocol_2fshared_2eproto();
  
  void InitAsDefaultInstance();
  static PubMsg* default_instance_;
};
// -------------------------------------------------------------------

class PubOuter_PubInner : public ::google::protobuf::Message {
 public:
  PubOuter_PubInner();
  virtual ~PubOuter_PubInner();
  
  PubOuter_PubInner(const PubOuter_PubInner& from);
  
  inline PubOuter_PubInner& operator=(const PubOuter_PubInner& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PubOuter_PubInner& default_instance();
  
  void Swap(PubOuter_PubInner* other);
  
  // implements Message ----------------------------------------------
  
  PubOuter_PubInner* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PubOuter_PubInner& from);
  void MergeFrom(const PubOuter_PubInner& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 innerid = 1;
  inline bool has_innerid() const;
  inline void clear_innerid();
  static const int kInneridFieldNumber = 1;
  inline ::google::protobuf::int32 innerid() const;
  inline void set_innerid(::google::protobuf::int32 value);
  
  // optional string innername = 2;
  inline bool has_innername() const;
  inline void clear_innername();
  static const int kInnernameFieldNumber = 2;
  inline const ::std::string& innername() const;
  inline void set_innername(const ::std::string& value);
  inline void set_innername(const char* value);
  inline void set_innername(const char* value, size_t size);
  inline ::std::string* mutable_innername();
  inline ::std::string* release_innername();
  
  // @@protoc_insertion_point(class_scope:gabriel.protocol.PubOuter.PubInner)
 private:
  inline void set_has_innerid();
  inline void clear_has_innerid();
  inline void set_has_innername();
  inline void clear_has_innername();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* innername_;
  ::google::protobuf::int32 innerid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_gabriel_2fprotocol_2fshared_2eproto();
  friend void protobuf_AssignDesc_gabriel_2fprotocol_2fshared_2eproto();
  friend void protobuf_ShutdownFile_gabriel_2fprotocol_2fshared_2eproto();
  
  void InitAsDefaultInstance();
  static PubOuter_PubInner* default_instance_;
};
// -------------------------------------------------------------------

class PubOuter : public ::google::protobuf::Message {
 public:
  PubOuter();
  virtual ~PubOuter();
  
  PubOuter(const PubOuter& from);
  
  inline PubOuter& operator=(const PubOuter& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PubOuter& default_instance();
  
  void Swap(PubOuter* other);
  
  // implements Message ----------------------------------------------
  
  PubOuter* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PubOuter& from);
  void MergeFrom(const PubOuter& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef PubOuter_PubInner PubInner;
  
  typedef PubOuter_PubInnerEnum PubInnerEnum;
  static const PubInnerEnum ENUM_PUBINNER_1 = PubOuter_PubInnerEnum_ENUM_PUBINNER_1;
  static const PubInnerEnum ENUM_PUBINNER_2 = PubOuter_PubInnerEnum_ENUM_PUBINNER_2;
  static const PubInnerEnum ENUM_PUBINNER_3 = PubOuter_PubInnerEnum_ENUM_PUBINNER_3;
  static inline bool PubInnerEnum_IsValid(int value) {
    return PubOuter_PubInnerEnum_IsValid(value);
  }
  static const PubInnerEnum PubInnerEnum_MIN =
    PubOuter_PubInnerEnum_PubInnerEnum_MIN;
  static const PubInnerEnum PubInnerEnum_MAX =
    PubOuter_PubInnerEnum_PubInnerEnum_MAX;
  static const int PubInnerEnum_ARRAYSIZE =
    PubOuter_PubInnerEnum_PubInnerEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PubInnerEnum_descriptor() {
    return PubOuter_PubInnerEnum_descriptor();
  }
  static inline const ::std::string& PubInnerEnum_Name(PubInnerEnum value) {
    return PubOuter_PubInnerEnum_Name(value);
  }
  static inline bool PubInnerEnum_Parse(const ::std::string& name,
      PubInnerEnum* value) {
    return PubOuter_PubInnerEnum_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // optional int32 outerid = 1;
  inline bool has_outerid() const;
  inline void clear_outerid();
  static const int kOuteridFieldNumber = 1;
  inline ::google::protobuf::int32 outerid() const;
  inline void set_outerid(::google::protobuf::int32 value);
  
  // optional string outername = 2;
  inline bool has_outername() const;
  inline void clear_outername();
  static const int kOuternameFieldNumber = 2;
  inline const ::std::string& outername() const;
  inline void set_outername(const ::std::string& value);
  inline void set_outername(const char* value);
  inline void set_outername(const char* value, size_t size);
  inline ::std::string* mutable_outername();
  inline ::std::string* release_outername();
  
  // @@protoc_insertion_point(class_scope:gabriel.protocol.PubOuter)
 private:
  inline void set_has_outerid();
  inline void clear_has_outerid();
  inline void set_has_outername();
  inline void clear_has_outername();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* outername_;
  ::google::protobuf::int32 outerid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_gabriel_2fprotocol_2fshared_2eproto();
  friend void protobuf_AssignDesc_gabriel_2fprotocol_2fshared_2eproto();
  friend void protobuf_ShutdownFile_gabriel_2fprotocol_2fshared_2eproto();
  
  void InitAsDefaultInstance();
  static PubOuter* default_instance_;
};
// ===================================================================


// ===================================================================

// PubMsg

// optional int32 pubid = 1;
inline bool PubMsg::has_pubid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PubMsg::set_has_pubid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PubMsg::clear_has_pubid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PubMsg::clear_pubid() {
  pubid_ = 0;
  clear_has_pubid();
}
inline ::google::protobuf::int32 PubMsg::pubid() const {
  return pubid_;
}
inline void PubMsg::set_pubid(::google::protobuf::int32 value) {
  set_has_pubid();
  pubid_ = value;
}

// optional string pubname = 2;
inline bool PubMsg::has_pubname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PubMsg::set_has_pubname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PubMsg::clear_has_pubname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PubMsg::clear_pubname() {
  if (pubname_ != &::google::protobuf::internal::kEmptyString) {
    pubname_->clear();
  }
  clear_has_pubname();
}
inline const ::std::string& PubMsg::pubname() const {
  return *pubname_;
}
inline void PubMsg::set_pubname(const ::std::string& value) {
  set_has_pubname();
  if (pubname_ == &::google::protobuf::internal::kEmptyString) {
    pubname_ = new ::std::string;
  }
  pubname_->assign(value);
}
inline void PubMsg::set_pubname(const char* value) {
  set_has_pubname();
  if (pubname_ == &::google::protobuf::internal::kEmptyString) {
    pubname_ = new ::std::string;
  }
  pubname_->assign(value);
}
inline void PubMsg::set_pubname(const char* value, size_t size) {
  set_has_pubname();
  if (pubname_ == &::google::protobuf::internal::kEmptyString) {
    pubname_ = new ::std::string;
  }
  pubname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PubMsg::mutable_pubname() {
  set_has_pubname();
  if (pubname_ == &::google::protobuf::internal::kEmptyString) {
    pubname_ = new ::std::string;
  }
  return pubname_;
}
inline ::std::string* PubMsg::release_pubname() {
  clear_has_pubname();
  if (pubname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = pubname_;
    pubname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// PubOuter_PubInner

// optional int32 innerid = 1;
inline bool PubOuter_PubInner::has_innerid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PubOuter_PubInner::set_has_innerid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PubOuter_PubInner::clear_has_innerid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PubOuter_PubInner::clear_innerid() {
  innerid_ = 0;
  clear_has_innerid();
}
inline ::google::protobuf::int32 PubOuter_PubInner::innerid() const {
  return innerid_;
}
inline void PubOuter_PubInner::set_innerid(::google::protobuf::int32 value) {
  set_has_innerid();
  innerid_ = value;
}

// optional string innername = 2;
inline bool PubOuter_PubInner::has_innername() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PubOuter_PubInner::set_has_innername() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PubOuter_PubInner::clear_has_innername() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PubOuter_PubInner::clear_innername() {
  if (innername_ != &::google::protobuf::internal::kEmptyString) {
    innername_->clear();
  }
  clear_has_innername();
}
inline const ::std::string& PubOuter_PubInner::innername() const {
  return *innername_;
}
inline void PubOuter_PubInner::set_innername(const ::std::string& value) {
  set_has_innername();
  if (innername_ == &::google::protobuf::internal::kEmptyString) {
    innername_ = new ::std::string;
  }
  innername_->assign(value);
}
inline void PubOuter_PubInner::set_innername(const char* value) {
  set_has_innername();
  if (innername_ == &::google::protobuf::internal::kEmptyString) {
    innername_ = new ::std::string;
  }
  innername_->assign(value);
}
inline void PubOuter_PubInner::set_innername(const char* value, size_t size) {
  set_has_innername();
  if (innername_ == &::google::protobuf::internal::kEmptyString) {
    innername_ = new ::std::string;
  }
  innername_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PubOuter_PubInner::mutable_innername() {
  set_has_innername();
  if (innername_ == &::google::protobuf::internal::kEmptyString) {
    innername_ = new ::std::string;
  }
  return innername_;
}
inline ::std::string* PubOuter_PubInner::release_innername() {
  clear_has_innername();
  if (innername_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = innername_;
    innername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// PubOuter

// optional int32 outerid = 1;
inline bool PubOuter::has_outerid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PubOuter::set_has_outerid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PubOuter::clear_has_outerid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PubOuter::clear_outerid() {
  outerid_ = 0;
  clear_has_outerid();
}
inline ::google::protobuf::int32 PubOuter::outerid() const {
  return outerid_;
}
inline void PubOuter::set_outerid(::google::protobuf::int32 value) {
  set_has_outerid();
  outerid_ = value;
}

// optional string outername = 2;
inline bool PubOuter::has_outername() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PubOuter::set_has_outername() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PubOuter::clear_has_outername() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PubOuter::clear_outername() {
  if (outername_ != &::google::protobuf::internal::kEmptyString) {
    outername_->clear();
  }
  clear_has_outername();
}
inline const ::std::string& PubOuter::outername() const {
  return *outername_;
}
inline void PubOuter::set_outername(const ::std::string& value) {
  set_has_outername();
  if (outername_ == &::google::protobuf::internal::kEmptyString) {
    outername_ = new ::std::string;
  }
  outername_->assign(value);
}
inline void PubOuter::set_outername(const char* value) {
  set_has_outername();
  if (outername_ == &::google::protobuf::internal::kEmptyString) {
    outername_ = new ::std::string;
  }
  outername_->assign(value);
}
inline void PubOuter::set_outername(const char* value, size_t size) {
  set_has_outername();
  if (outername_ == &::google::protobuf::internal::kEmptyString) {
    outername_ = new ::std::string;
  }
  outername_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PubOuter::mutable_outername() {
  set_has_outername();
  if (outername_ == &::google::protobuf::internal::kEmptyString) {
    outername_ = new ::std::string;
  }
  return outername_;
}
inline ::std::string* PubOuter::release_outername() {
  clear_has_outername();
  if (outername_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = outername_;
    outername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace gabriel

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gabriel::protocol::PubOuter_PubInnerEnum>() {
  return ::gabriel::protocol::PubOuter_PubInnerEnum_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< gabriel::protocol::PubEnum>() {
  return gabriel::protocol::PubEnum_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gabriel_2fprotocol_2fshared_2eproto__INCLUDED