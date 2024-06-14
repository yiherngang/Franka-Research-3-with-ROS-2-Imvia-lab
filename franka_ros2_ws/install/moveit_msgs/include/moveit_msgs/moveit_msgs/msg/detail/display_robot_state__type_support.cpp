// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/DisplayRobotState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/display_robot_state__struct.hpp"
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

void DisplayRobotState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::DisplayRobotState(_init);
}

void DisplayRobotState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::DisplayRobotState *>(message_memory);
  typed_message->~DisplayRobotState();
}

size_t size_function__DisplayRobotState__highlight_links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::ObjectColor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DisplayRobotState__highlight_links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::ObjectColor> *>(untyped_member);
  return &member[index];
}

void * get_function__DisplayRobotState__highlight_links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::ObjectColor> *>(untyped_member);
  return &member[index];
}

void fetch_function__DisplayRobotState__highlight_links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::ObjectColor *>(
    get_const_function__DisplayRobotState__highlight_links(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::ObjectColor *>(untyped_value);
  value = item;
}

void assign_function__DisplayRobotState__highlight_links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::ObjectColor *>(
    get_function__DisplayRobotState__highlight_links(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::ObjectColor *>(untyped_value);
  item = value;
}

void resize_function__DisplayRobotState__highlight_links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::ObjectColor> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DisplayRobotState_message_member_array[3] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::RobotState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::DisplayRobotState, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "highlight_links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::ObjectColor>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::DisplayRobotState, highlight_links),  // bytes offset in struct
    nullptr,  // default value
    size_function__DisplayRobotState__highlight_links,  // size() function pointer
    get_const_function__DisplayRobotState__highlight_links,  // get_const(index) function pointer
    get_function__DisplayRobotState__highlight_links,  // get(index) function pointer
    fetch_function__DisplayRobotState__highlight_links,  // fetch(index, &value) function pointer
    assign_function__DisplayRobotState__highlight_links,  // assign(index, value) function pointer
    resize_function__DisplayRobotState__highlight_links  // resize(index) function pointer
  },
  {
    "hide",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::DisplayRobotState, hide),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DisplayRobotState_message_members = {
  "moveit_msgs::msg",  // message namespace
  "DisplayRobotState",  // message name
  3,  // number of fields
  sizeof(moveit_msgs::msg::DisplayRobotState),
  DisplayRobotState_message_member_array,  // message members
  DisplayRobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  DisplayRobotState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DisplayRobotState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DisplayRobotState_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::DisplayRobotState>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::DisplayRobotState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, DisplayRobotState)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::DisplayRobotState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
