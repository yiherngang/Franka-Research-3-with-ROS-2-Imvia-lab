// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.hpp"
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

void AllowedCollisionEntry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::AllowedCollisionEntry(_init);
}

void AllowedCollisionEntry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::AllowedCollisionEntry *>(message_memory);
  typed_message->~AllowedCollisionEntry();
}

size_t size_function__AllowedCollisionEntry__enabled(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__AllowedCollisionEntry__enabled(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__AllowedCollisionEntry__enabled(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__AllowedCollisionEntry__enabled(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AllowedCollisionEntry_message_member_array[1] = {
  {
    "enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::AllowedCollisionEntry, enabled),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllowedCollisionEntry__enabled,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__AllowedCollisionEntry__enabled,  // fetch(index, &value) function pointer
    assign_function__AllowedCollisionEntry__enabled,  // assign(index, value) function pointer
    resize_function__AllowedCollisionEntry__enabled  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AllowedCollisionEntry_message_members = {
  "moveit_msgs::msg",  // message namespace
  "AllowedCollisionEntry",  // message name
  1,  // number of fields
  sizeof(moveit_msgs::msg::AllowedCollisionEntry),
  AllowedCollisionEntry_message_member_array,  // message members
  AllowedCollisionEntry_init_function,  // function to initialize message memory (memory has to be allocated)
  AllowedCollisionEntry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AllowedCollisionEntry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AllowedCollisionEntry_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::AllowedCollisionEntry>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::AllowedCollisionEntry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, AllowedCollisionEntry)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::AllowedCollisionEntry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
