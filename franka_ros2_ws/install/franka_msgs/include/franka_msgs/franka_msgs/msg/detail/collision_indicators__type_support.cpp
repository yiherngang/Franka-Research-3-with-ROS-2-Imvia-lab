// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "franka_msgs/msg/detail/collision_indicators__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CollisionIndicators_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::msg::CollisionIndicators(_init);
}

void CollisionIndicators_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::msg::CollisionIndicators *>(message_memory);
  typed_message->~CollisionIndicators();
}

size_t size_function__CollisionIndicators__is_joint_collision(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__CollisionIndicators__is_joint_collision(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionIndicators__is_joint_collision(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionIndicators__is_joint_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CollisionIndicators__is_joint_collision(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CollisionIndicators__is_joint_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CollisionIndicators__is_joint_collision(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__CollisionIndicators__is_joint_contact(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__CollisionIndicators__is_joint_contact(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionIndicators__is_joint_contact(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionIndicators__is_joint_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CollisionIndicators__is_joint_contact(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CollisionIndicators__is_joint_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CollisionIndicators__is_joint_contact(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CollisionIndicators_message_member_array[6] = {
  {
    "is_cartesian_linear_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::CollisionIndicators, is_cartesian_linear_collision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_cartesian_angular_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::CollisionIndicators, is_cartesian_angular_collision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_cartesian_linear_contact",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::CollisionIndicators, is_cartesian_linear_contact),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_cartesian_angular_contact",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::CollisionIndicators, is_cartesian_angular_contact),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_joint_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::CollisionIndicators, is_joint_collision),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionIndicators__is_joint_collision,  // size() function pointer
    get_const_function__CollisionIndicators__is_joint_collision,  // get_const(index) function pointer
    get_function__CollisionIndicators__is_joint_collision,  // get(index) function pointer
    fetch_function__CollisionIndicators__is_joint_collision,  // fetch(index, &value) function pointer
    assign_function__CollisionIndicators__is_joint_collision,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_joint_contact",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::CollisionIndicators, is_joint_contact),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionIndicators__is_joint_contact,  // size() function pointer
    get_const_function__CollisionIndicators__is_joint_contact,  // get_const(index) function pointer
    get_function__CollisionIndicators__is_joint_contact,  // get(index) function pointer
    fetch_function__CollisionIndicators__is_joint_contact,  // fetch(index, &value) function pointer
    assign_function__CollisionIndicators__is_joint_contact,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CollisionIndicators_message_members = {
  "franka_msgs::msg",  // message namespace
  "CollisionIndicators",  // message name
  6,  // number of fields
  sizeof(franka_msgs::msg::CollisionIndicators),
  CollisionIndicators_message_member_array,  // message members
  CollisionIndicators_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionIndicators_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CollisionIndicators_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CollisionIndicators_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::msg::CollisionIndicators>()
{
  return &::franka_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionIndicators_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, msg, CollisionIndicators)() {
  return &::franka_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionIndicators_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
