// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/GenericTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/generic_trajectory__struct.hpp"
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

void GenericTrajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::GenericTrajectory(_init);
}

void GenericTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::GenericTrajectory *>(message_memory);
  typed_message->~GenericTrajectory();
}

size_t size_function__GenericTrajectory__joint_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GenericTrajectory__joint_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__GenericTrajectory__joint_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__GenericTrajectory__joint_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const trajectory_msgs::msg::JointTrajectory *>(
    get_const_function__GenericTrajectory__joint_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<trajectory_msgs::msg::JointTrajectory *>(untyped_value);
  value = item;
}

void assign_function__GenericTrajectory__joint_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<trajectory_msgs::msg::JointTrajectory *>(
    get_function__GenericTrajectory__joint_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const trajectory_msgs::msg::JointTrajectory *>(untyped_value);
  item = value;
}

void resize_function__GenericTrajectory__joint_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<trajectory_msgs::msg::JointTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GenericTrajectory__cartesian_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::CartesianTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GenericTrajectory__cartesian_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::CartesianTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__GenericTrajectory__cartesian_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::CartesianTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__GenericTrajectory__cartesian_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::CartesianTrajectory *>(
    get_const_function__GenericTrajectory__cartesian_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::CartesianTrajectory *>(untyped_value);
  value = item;
}

void assign_function__GenericTrajectory__cartesian_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::CartesianTrajectory *>(
    get_function__GenericTrajectory__cartesian_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::CartesianTrajectory *>(untyped_value);
  item = value;
}

void resize_function__GenericTrajectory__cartesian_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::CartesianTrajectory> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GenericTrajectory_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::GenericTrajectory, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::GenericTrajectory, joint_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__GenericTrajectory__joint_trajectory,  // size() function pointer
    get_const_function__GenericTrajectory__joint_trajectory,  // get_const(index) function pointer
    get_function__GenericTrajectory__joint_trajectory,  // get(index) function pointer
    fetch_function__GenericTrajectory__joint_trajectory,  // fetch(index, &value) function pointer
    assign_function__GenericTrajectory__joint_trajectory,  // assign(index, value) function pointer
    resize_function__GenericTrajectory__joint_trajectory  // resize(index) function pointer
  },
  {
    "cartesian_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::CartesianTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::GenericTrajectory, cartesian_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__GenericTrajectory__cartesian_trajectory,  // size() function pointer
    get_const_function__GenericTrajectory__cartesian_trajectory,  // get_const(index) function pointer
    get_function__GenericTrajectory__cartesian_trajectory,  // get(index) function pointer
    fetch_function__GenericTrajectory__cartesian_trajectory,  // fetch(index, &value) function pointer
    assign_function__GenericTrajectory__cartesian_trajectory,  // assign(index, value) function pointer
    resize_function__GenericTrajectory__cartesian_trajectory  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GenericTrajectory_message_members = {
  "moveit_msgs::msg",  // message namespace
  "GenericTrajectory",  // message name
  3,  // number of fields
  sizeof(moveit_msgs::msg::GenericTrajectory),
  GenericTrajectory_message_member_array,  // message members
  GenericTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  GenericTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GenericTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GenericTrajectory_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::GenericTrajectory>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::GenericTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, GenericTrajectory)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::GenericTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
