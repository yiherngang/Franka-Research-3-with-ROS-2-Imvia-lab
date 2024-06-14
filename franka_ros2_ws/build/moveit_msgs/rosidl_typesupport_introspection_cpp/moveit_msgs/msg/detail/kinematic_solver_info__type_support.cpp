// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/KinematicSolverInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/kinematic_solver_info__struct.hpp"
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

void KinematicSolverInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::KinematicSolverInfo(_init);
}

void KinematicSolverInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::KinematicSolverInfo *>(message_memory);
  typed_message->~KinematicSolverInfo();
}

size_t size_function__KinematicSolverInfo__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicSolverInfo__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicSolverInfo__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicSolverInfo__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__KinematicSolverInfo__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__KinematicSolverInfo__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__KinematicSolverInfo__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__KinematicSolverInfo__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicSolverInfo__limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::JointLimits> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicSolverInfo__limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::JointLimits> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicSolverInfo__limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::JointLimits> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicSolverInfo__limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::JointLimits *>(
    get_const_function__KinematicSolverInfo__limits(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::JointLimits *>(untyped_value);
  value = item;
}

void assign_function__KinematicSolverInfo__limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::JointLimits *>(
    get_function__KinematicSolverInfo__limits(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::JointLimits *>(untyped_value);
  item = value;
}

void resize_function__KinematicSolverInfo__limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::JointLimits> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KinematicSolverInfo__link_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KinematicSolverInfo__link_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__KinematicSolverInfo__link_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__KinematicSolverInfo__link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__KinematicSolverInfo__link_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__KinematicSolverInfo__link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__KinematicSolverInfo__link_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__KinematicSolverInfo__link_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KinematicSolverInfo_message_member_array[3] = {
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::KinematicSolverInfo, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicSolverInfo__joint_names,  // size() function pointer
    get_const_function__KinematicSolverInfo__joint_names,  // get_const(index) function pointer
    get_function__KinematicSolverInfo__joint_names,  // get(index) function pointer
    fetch_function__KinematicSolverInfo__joint_names,  // fetch(index, &value) function pointer
    assign_function__KinematicSolverInfo__joint_names,  // assign(index, value) function pointer
    resize_function__KinematicSolverInfo__joint_names  // resize(index) function pointer
  },
  {
    "limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::JointLimits>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::KinematicSolverInfo, limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicSolverInfo__limits,  // size() function pointer
    get_const_function__KinematicSolverInfo__limits,  // get_const(index) function pointer
    get_function__KinematicSolverInfo__limits,  // get(index) function pointer
    fetch_function__KinematicSolverInfo__limits,  // fetch(index, &value) function pointer
    assign_function__KinematicSolverInfo__limits,  // assign(index, value) function pointer
    resize_function__KinematicSolverInfo__limits  // resize(index) function pointer
  },
  {
    "link_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::KinematicSolverInfo, link_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__KinematicSolverInfo__link_names,  // size() function pointer
    get_const_function__KinematicSolverInfo__link_names,  // get_const(index) function pointer
    get_function__KinematicSolverInfo__link_names,  // get(index) function pointer
    fetch_function__KinematicSolverInfo__link_names,  // fetch(index, &value) function pointer
    assign_function__KinematicSolverInfo__link_names,  // assign(index, value) function pointer
    resize_function__KinematicSolverInfo__link_names  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KinematicSolverInfo_message_members = {
  "moveit_msgs::msg",  // message namespace
  "KinematicSolverInfo",  // message name
  3,  // number of fields
  sizeof(moveit_msgs::msg::KinematicSolverInfo),
  KinematicSolverInfo_message_member_array,  // message members
  KinematicSolverInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  KinematicSolverInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KinematicSolverInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KinematicSolverInfo_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::KinematicSolverInfo>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::KinematicSolverInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, KinematicSolverInfo)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::KinematicSolverInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
