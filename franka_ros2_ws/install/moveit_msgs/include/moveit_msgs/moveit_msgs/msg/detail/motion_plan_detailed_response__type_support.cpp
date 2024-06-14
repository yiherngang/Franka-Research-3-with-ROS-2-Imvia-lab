// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/MotionPlanDetailedResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/motion_plan_detailed_response__struct.hpp"
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

void MotionPlanDetailedResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::MotionPlanDetailedResponse(_init);
}

void MotionPlanDetailedResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::MotionPlanDetailedResponse *>(message_memory);
  typed_message->~MotionPlanDetailedResponse();
}

size_t size_function__MotionPlanDetailedResponse__trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionPlanDetailedResponse__trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionPlanDetailedResponse__trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionPlanDetailedResponse__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::RobotTrajectory *>(
    get_const_function__MotionPlanDetailedResponse__trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::RobotTrajectory *>(untyped_value);
  value = item;
}

void assign_function__MotionPlanDetailedResponse__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::RobotTrajectory *>(
    get_function__MotionPlanDetailedResponse__trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::RobotTrajectory *>(untyped_value);
  item = value;
}

void resize_function__MotionPlanDetailedResponse__trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionPlanDetailedResponse__description(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionPlanDetailedResponse__description(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionPlanDetailedResponse__description(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionPlanDetailedResponse__description(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__MotionPlanDetailedResponse__description(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__MotionPlanDetailedResponse__description(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__MotionPlanDetailedResponse__description(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__MotionPlanDetailedResponse__description(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionPlanDetailedResponse__processing_time(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionPlanDetailedResponse__processing_time(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionPlanDetailedResponse__processing_time(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionPlanDetailedResponse__processing_time(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotionPlanDetailedResponse__processing_time(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotionPlanDetailedResponse__processing_time(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotionPlanDetailedResponse__processing_time(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MotionPlanDetailedResponse__processing_time(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionPlanDetailedResponse_message_member_array[6] = {
  {
    "trajectory_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::RobotState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::MotionPlanDetailedResponse, trajectory_start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "group_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::MotionPlanDetailedResponse, group_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::RobotTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::MotionPlanDetailedResponse, trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionPlanDetailedResponse__trajectory,  // size() function pointer
    get_const_function__MotionPlanDetailedResponse__trajectory,  // get_const(index) function pointer
    get_function__MotionPlanDetailedResponse__trajectory,  // get(index) function pointer
    fetch_function__MotionPlanDetailedResponse__trajectory,  // fetch(index, &value) function pointer
    assign_function__MotionPlanDetailedResponse__trajectory,  // assign(index, value) function pointer
    resize_function__MotionPlanDetailedResponse__trajectory  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::MotionPlanDetailedResponse, description),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionPlanDetailedResponse__description,  // size() function pointer
    get_const_function__MotionPlanDetailedResponse__description,  // get_const(index) function pointer
    get_function__MotionPlanDetailedResponse__description,  // get(index) function pointer
    fetch_function__MotionPlanDetailedResponse__description,  // fetch(index, &value) function pointer
    assign_function__MotionPlanDetailedResponse__description,  // assign(index, value) function pointer
    resize_function__MotionPlanDetailedResponse__description  // resize(index) function pointer
  },
  {
    "processing_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::MotionPlanDetailedResponse, processing_time),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionPlanDetailedResponse__processing_time,  // size() function pointer
    get_const_function__MotionPlanDetailedResponse__processing_time,  // get_const(index) function pointer
    get_function__MotionPlanDetailedResponse__processing_time,  // get(index) function pointer
    fetch_function__MotionPlanDetailedResponse__processing_time,  // fetch(index, &value) function pointer
    assign_function__MotionPlanDetailedResponse__processing_time,  // assign(index, value) function pointer
    resize_function__MotionPlanDetailedResponse__processing_time  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::MoveItErrorCodes>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::MotionPlanDetailedResponse, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionPlanDetailedResponse_message_members = {
  "moveit_msgs::msg",  // message namespace
  "MotionPlanDetailedResponse",  // message name
  6,  // number of fields
  sizeof(moveit_msgs::msg::MotionPlanDetailedResponse),
  MotionPlanDetailedResponse_message_member_array,  // message members
  MotionPlanDetailedResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionPlanDetailedResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionPlanDetailedResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionPlanDetailedResponse_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::MotionPlanDetailedResponse>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::MotionPlanDetailedResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, MotionPlanDetailedResponse)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::MotionPlanDetailedResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
