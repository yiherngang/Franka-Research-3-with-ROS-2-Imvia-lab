// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/constraints__struct.hpp"
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

void Constraints_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::Constraints(_init);
}

void Constraints_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::Constraints *>(message_memory);
  typed_message->~Constraints();
}

size_t size_function__Constraints__joint_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::JointConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Constraints__joint_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::JointConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__Constraints__joint_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::JointConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__Constraints__joint_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::JointConstraint *>(
    get_const_function__Constraints__joint_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::JointConstraint *>(untyped_value);
  value = item;
}

void assign_function__Constraints__joint_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::JointConstraint *>(
    get_function__Constraints__joint_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::JointConstraint *>(untyped_value);
  item = value;
}

void resize_function__Constraints__joint_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::JointConstraint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Constraints__position_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::PositionConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Constraints__position_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::PositionConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__Constraints__position_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::PositionConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__Constraints__position_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::PositionConstraint *>(
    get_const_function__Constraints__position_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::PositionConstraint *>(untyped_value);
  value = item;
}

void assign_function__Constraints__position_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::PositionConstraint *>(
    get_function__Constraints__position_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::PositionConstraint *>(untyped_value);
  item = value;
}

void resize_function__Constraints__position_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::PositionConstraint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Constraints__orientation_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::OrientationConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Constraints__orientation_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::OrientationConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__Constraints__orientation_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::OrientationConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__Constraints__orientation_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::OrientationConstraint *>(
    get_const_function__Constraints__orientation_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::OrientationConstraint *>(untyped_value);
  value = item;
}

void assign_function__Constraints__orientation_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::OrientationConstraint *>(
    get_function__Constraints__orientation_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::OrientationConstraint *>(untyped_value);
  item = value;
}

void resize_function__Constraints__orientation_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::OrientationConstraint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Constraints__visibility_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::VisibilityConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Constraints__visibility_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::VisibilityConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__Constraints__visibility_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::VisibilityConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__Constraints__visibility_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::VisibilityConstraint *>(
    get_const_function__Constraints__visibility_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::VisibilityConstraint *>(untyped_value);
  value = item;
}

void assign_function__Constraints__visibility_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::VisibilityConstraint *>(
    get_function__Constraints__visibility_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::VisibilityConstraint *>(untyped_value);
  item = value;
}

void resize_function__Constraints__visibility_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::VisibilityConstraint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Constraints_message_member_array[5] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::Constraints, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::JointConstraint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::Constraints, joint_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__Constraints__joint_constraints,  // size() function pointer
    get_const_function__Constraints__joint_constraints,  // get_const(index) function pointer
    get_function__Constraints__joint_constraints,  // get(index) function pointer
    fetch_function__Constraints__joint_constraints,  // fetch(index, &value) function pointer
    assign_function__Constraints__joint_constraints,  // assign(index, value) function pointer
    resize_function__Constraints__joint_constraints  // resize(index) function pointer
  },
  {
    "position_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::PositionConstraint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::Constraints, position_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__Constraints__position_constraints,  // size() function pointer
    get_const_function__Constraints__position_constraints,  // get_const(index) function pointer
    get_function__Constraints__position_constraints,  // get(index) function pointer
    fetch_function__Constraints__position_constraints,  // fetch(index, &value) function pointer
    assign_function__Constraints__position_constraints,  // assign(index, value) function pointer
    resize_function__Constraints__position_constraints  // resize(index) function pointer
  },
  {
    "orientation_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::OrientationConstraint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::Constraints, orientation_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__Constraints__orientation_constraints,  // size() function pointer
    get_const_function__Constraints__orientation_constraints,  // get_const(index) function pointer
    get_function__Constraints__orientation_constraints,  // get(index) function pointer
    fetch_function__Constraints__orientation_constraints,  // fetch(index, &value) function pointer
    assign_function__Constraints__orientation_constraints,  // assign(index, value) function pointer
    resize_function__Constraints__orientation_constraints  // resize(index) function pointer
  },
  {
    "visibility_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::VisibilityConstraint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::Constraints, visibility_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__Constraints__visibility_constraints,  // size() function pointer
    get_const_function__Constraints__visibility_constraints,  // get_const(index) function pointer
    get_function__Constraints__visibility_constraints,  // get(index) function pointer
    fetch_function__Constraints__visibility_constraints,  // fetch(index, &value) function pointer
    assign_function__Constraints__visibility_constraints,  // assign(index, value) function pointer
    resize_function__Constraints__visibility_constraints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Constraints_message_members = {
  "moveit_msgs::msg",  // message namespace
  "Constraints",  // message name
  5,  // number of fields
  sizeof(moveit_msgs::msg::Constraints),
  Constraints_message_member_array,  // message members
  Constraints_init_function,  // function to initialize message memory (memory has to be allocated)
  Constraints_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Constraints_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Constraints_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::Constraints>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::Constraints_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, Constraints)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::Constraints_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
