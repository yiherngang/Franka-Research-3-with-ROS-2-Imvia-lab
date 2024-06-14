// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "franka_msgs/msg/detail/elbow__struct.hpp"
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

void Elbow_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::msg::Elbow(_init);
}

void Elbow_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::msg::Elbow *>(message_memory);
  typed_message->~Elbow();
}

size_t size_function__Elbow__position(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Elbow__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Elbow__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Elbow__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Elbow__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Elbow__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Elbow__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Elbow__desired_position(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Elbow__desired_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Elbow__desired_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Elbow__desired_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Elbow__desired_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Elbow__desired_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Elbow__desired_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Elbow__commanded_position(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Elbow__commanded_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Elbow__commanded_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Elbow__commanded_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Elbow__commanded_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Elbow__commanded_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Elbow__commanded_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Elbow__commanded_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Elbow__commanded_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Elbow__commanded_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Elbow__commanded_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Elbow__commanded_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Elbow__commanded_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Elbow__commanded_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Elbow__commanded_acceleration(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Elbow__commanded_acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Elbow__commanded_acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Elbow__commanded_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Elbow__commanded_acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Elbow__commanded_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Elbow__commanded_acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Elbow_message_member_array[5] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::Elbow, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__Elbow__position,  // size() function pointer
    get_const_function__Elbow__position,  // get_const(index) function pointer
    get_function__Elbow__position,  // get(index) function pointer
    fetch_function__Elbow__position,  // fetch(index, &value) function pointer
    assign_function__Elbow__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "desired_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::Elbow, desired_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__Elbow__desired_position,  // size() function pointer
    get_const_function__Elbow__desired_position,  // get_const(index) function pointer
    get_function__Elbow__desired_position,  // get(index) function pointer
    fetch_function__Elbow__desired_position,  // fetch(index, &value) function pointer
    assign_function__Elbow__desired_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commanded_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::Elbow, commanded_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__Elbow__commanded_position,  // size() function pointer
    get_const_function__Elbow__commanded_position,  // get_const(index) function pointer
    get_function__Elbow__commanded_position,  // get(index) function pointer
    fetch_function__Elbow__commanded_position,  // fetch(index, &value) function pointer
    assign_function__Elbow__commanded_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commanded_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::Elbow, commanded_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__Elbow__commanded_velocity,  // size() function pointer
    get_const_function__Elbow__commanded_velocity,  // get_const(index) function pointer
    get_function__Elbow__commanded_velocity,  // get(index) function pointer
    fetch_function__Elbow__commanded_velocity,  // fetch(index, &value) function pointer
    assign_function__Elbow__commanded_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commanded_acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::Elbow, commanded_acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__Elbow__commanded_acceleration,  // size() function pointer
    get_const_function__Elbow__commanded_acceleration,  // get_const(index) function pointer
    get_function__Elbow__commanded_acceleration,  // get(index) function pointer
    fetch_function__Elbow__commanded_acceleration,  // fetch(index, &value) function pointer
    assign_function__Elbow__commanded_acceleration,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Elbow_message_members = {
  "franka_msgs::msg",  // message namespace
  "Elbow",  // message name
  5,  // number of fields
  sizeof(franka_msgs::msg::Elbow),
  Elbow_message_member_array,  // message members
  Elbow_init_function,  // function to initialize message memory (memory has to be allocated)
  Elbow_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Elbow_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Elbow_message_members,
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
get_message_type_support_handle<franka_msgs::msg::Elbow>()
{
  return &::franka_msgs::msg::rosidl_typesupport_introspection_cpp::Elbow_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, msg, Elbow)() {
  return &::franka_msgs::msg::rosidl_typesupport_introspection_cpp::Elbow_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
