// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AllowedCollisionMatrix_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::AllowedCollisionMatrix(_init);
}

void AllowedCollisionMatrix_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::AllowedCollisionMatrix *>(message_memory);
  typed_message->~AllowedCollisionMatrix();
}

size_t size_function__AllowedCollisionMatrix__entry_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AllowedCollisionMatrix__entry_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AllowedCollisionMatrix__entry_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllowedCollisionMatrix__entry_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__AllowedCollisionMatrix__entry_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__AllowedCollisionMatrix__entry_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__AllowedCollisionMatrix__entry_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__AllowedCollisionMatrix__entry_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AllowedCollisionMatrix__entry_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AllowedCollisionMatrix__entry_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return &member[index];
}

void * get_function__AllowedCollisionMatrix__entry_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllowedCollisionMatrix__entry_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::AllowedCollisionEntry *>(
    get_const_function__AllowedCollisionMatrix__entry_values(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::AllowedCollisionEntry *>(untyped_value);
  value = item;
}

void assign_function__AllowedCollisionMatrix__entry_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::AllowedCollisionEntry *>(
    get_function__AllowedCollisionMatrix__entry_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::AllowedCollisionEntry *>(untyped_value);
  item = value;
}

void resize_function__AllowedCollisionMatrix__entry_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::AllowedCollisionEntry> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AllowedCollisionMatrix__default_entry_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AllowedCollisionMatrix__default_entry_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AllowedCollisionMatrix__default_entry_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllowedCollisionMatrix__default_entry_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__AllowedCollisionMatrix__default_entry_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__AllowedCollisionMatrix__default_entry_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__AllowedCollisionMatrix__default_entry_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__AllowedCollisionMatrix__default_entry_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AllowedCollisionMatrix__default_entry_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__AllowedCollisionMatrix__default_entry_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__AllowedCollisionMatrix__default_entry_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__AllowedCollisionMatrix__default_entry_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AllowedCollisionMatrix_message_member_array[4] = {
  {
    "entry_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::AllowedCollisionMatrix, entry_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllowedCollisionMatrix__entry_names,  // size() function pointer
    get_const_function__AllowedCollisionMatrix__entry_names,  // get_const(index) function pointer
    get_function__AllowedCollisionMatrix__entry_names,  // get(index) function pointer
    fetch_function__AllowedCollisionMatrix__entry_names,  // fetch(index, &value) function pointer
    assign_function__AllowedCollisionMatrix__entry_names,  // assign(index, value) function pointer
    resize_function__AllowedCollisionMatrix__entry_names  // resize(index) function pointer
  },
  {
    "entry_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::AllowedCollisionEntry>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::AllowedCollisionMatrix, entry_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllowedCollisionMatrix__entry_values,  // size() function pointer
    get_const_function__AllowedCollisionMatrix__entry_values,  // get_const(index) function pointer
    get_function__AllowedCollisionMatrix__entry_values,  // get(index) function pointer
    fetch_function__AllowedCollisionMatrix__entry_values,  // fetch(index, &value) function pointer
    assign_function__AllowedCollisionMatrix__entry_values,  // assign(index, value) function pointer
    resize_function__AllowedCollisionMatrix__entry_values  // resize(index) function pointer
  },
  {
    "default_entry_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::AllowedCollisionMatrix, default_entry_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllowedCollisionMatrix__default_entry_names,  // size() function pointer
    get_const_function__AllowedCollisionMatrix__default_entry_names,  // get_const(index) function pointer
    get_function__AllowedCollisionMatrix__default_entry_names,  // get(index) function pointer
    fetch_function__AllowedCollisionMatrix__default_entry_names,  // fetch(index, &value) function pointer
    assign_function__AllowedCollisionMatrix__default_entry_names,  // assign(index, value) function pointer
    resize_function__AllowedCollisionMatrix__default_entry_names  // resize(index) function pointer
  },
  {
    "default_entry_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::AllowedCollisionMatrix, default_entry_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllowedCollisionMatrix__default_entry_values,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__AllowedCollisionMatrix__default_entry_values,  // fetch(index, &value) function pointer
    assign_function__AllowedCollisionMatrix__default_entry_values,  // assign(index, value) function pointer
    resize_function__AllowedCollisionMatrix__default_entry_values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AllowedCollisionMatrix_message_members = {
  "moveit_msgs::msg",  // message namespace
  "AllowedCollisionMatrix",  // message name
  4,  // number of fields
  sizeof(moveit_msgs::msg::AllowedCollisionMatrix),
  AllowedCollisionMatrix_message_member_array,  // message members
  AllowedCollisionMatrix_init_function,  // function to initialize message memory (memory has to be allocated)
  AllowedCollisionMatrix_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AllowedCollisionMatrix_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AllowedCollisionMatrix_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::msg::AllowedCollisionMatrix>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::AllowedCollisionMatrix_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, AllowedCollisionMatrix)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::AllowedCollisionMatrix_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
