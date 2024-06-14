// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_task_constructor_msgs:msg/TaskStatistics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_task_constructor_msgs/msg/detail/task_statistics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_task_constructor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TaskStatistics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_task_constructor_msgs::msg::TaskStatistics(_init);
}

void TaskStatistics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_task_constructor_msgs::msg::TaskStatistics *>(message_memory);
  typed_message->~TaskStatistics();
}

size_t size_function__TaskStatistics__stages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_task_constructor_msgs::msg::StageStatistics> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskStatistics__stages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_task_constructor_msgs::msg::StageStatistics> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskStatistics__stages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_task_constructor_msgs::msg::StageStatistics> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskStatistics__stages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_task_constructor_msgs::msg::StageStatistics *>(
    get_const_function__TaskStatistics__stages(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_task_constructor_msgs::msg::StageStatistics *>(untyped_value);
  value = item;
}

void assign_function__TaskStatistics__stages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_task_constructor_msgs::msg::StageStatistics *>(
    get_function__TaskStatistics__stages(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_task_constructor_msgs::msg::StageStatistics *>(untyped_value);
  item = value;
}

void resize_function__TaskStatistics__stages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_task_constructor_msgs::msg::StageStatistics> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskStatistics_message_member_array[2] = {
  {
    "task_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_task_constructor_msgs::msg::TaskStatistics, task_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_task_constructor_msgs::msg::StageStatistics>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_task_constructor_msgs::msg::TaskStatistics, stages),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskStatistics__stages,  // size() function pointer
    get_const_function__TaskStatistics__stages,  // get_const(index) function pointer
    get_function__TaskStatistics__stages,  // get(index) function pointer
    fetch_function__TaskStatistics__stages,  // fetch(index, &value) function pointer
    assign_function__TaskStatistics__stages,  // assign(index, value) function pointer
    resize_function__TaskStatistics__stages  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskStatistics_message_members = {
  "moveit_task_constructor_msgs::msg",  // message namespace
  "TaskStatistics",  // message name
  2,  // number of fields
  sizeof(moveit_task_constructor_msgs::msg::TaskStatistics),
  TaskStatistics_message_member_array,  // message members
  TaskStatistics_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskStatistics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskStatistics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskStatistics_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace moveit_task_constructor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_task_constructor_msgs::msg::TaskStatistics>()
{
  return &::moveit_task_constructor_msgs::msg::rosidl_typesupport_introspection_cpp::TaskStatistics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_task_constructor_msgs, msg, TaskStatistics)() {
  return &::moveit_task_constructor_msgs::msg::rosidl_typesupport_introspection_cpp::TaskStatistics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
