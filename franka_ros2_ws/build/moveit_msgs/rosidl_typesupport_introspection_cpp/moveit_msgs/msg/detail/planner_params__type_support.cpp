// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/PlannerParams.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/planner_params__struct.hpp"
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

void PlannerParams_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::PlannerParams(_init);
}

void PlannerParams_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::PlannerParams *>(message_memory);
  typed_message->~PlannerParams();
}

size_t size_function__PlannerParams__keys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlannerParams__keys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PlannerParams__keys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlannerParams__keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PlannerParams__keys(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PlannerParams__keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PlannerParams__keys(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PlannerParams__keys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlannerParams__values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlannerParams__values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PlannerParams__values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlannerParams__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PlannerParams__values(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PlannerParams__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PlannerParams__values(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PlannerParams__values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlannerParams__descriptions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlannerParams__descriptions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PlannerParams__descriptions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlannerParams__descriptions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PlannerParams__descriptions(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PlannerParams__descriptions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PlannerParams__descriptions(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PlannerParams__descriptions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlannerParams_message_member_array[3] = {
  {
    "keys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlannerParams, keys),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlannerParams__keys,  // size() function pointer
    get_const_function__PlannerParams__keys,  // get_const(index) function pointer
    get_function__PlannerParams__keys,  // get(index) function pointer
    fetch_function__PlannerParams__keys,  // fetch(index, &value) function pointer
    assign_function__PlannerParams__keys,  // assign(index, value) function pointer
    resize_function__PlannerParams__keys  // resize(index) function pointer
  },
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlannerParams, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlannerParams__values,  // size() function pointer
    get_const_function__PlannerParams__values,  // get_const(index) function pointer
    get_function__PlannerParams__values,  // get(index) function pointer
    fetch_function__PlannerParams__values,  // fetch(index, &value) function pointer
    assign_function__PlannerParams__values,  // assign(index, value) function pointer
    resize_function__PlannerParams__values  // resize(index) function pointer
  },
  {
    "descriptions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlannerParams, descriptions),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlannerParams__descriptions,  // size() function pointer
    get_const_function__PlannerParams__descriptions,  // get_const(index) function pointer
    get_function__PlannerParams__descriptions,  // get(index) function pointer
    fetch_function__PlannerParams__descriptions,  // fetch(index, &value) function pointer
    assign_function__PlannerParams__descriptions,  // assign(index, value) function pointer
    resize_function__PlannerParams__descriptions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlannerParams_message_members = {
  "moveit_msgs::msg",  // message namespace
  "PlannerParams",  // message name
  3,  // number of fields
  sizeof(moveit_msgs::msg::PlannerParams),
  PlannerParams_message_member_array,  // message members
  PlannerParams_init_function,  // function to initialize message memory (memory has to be allocated)
  PlannerParams_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlannerParams_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlannerParams_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::PlannerParams>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::PlannerParams_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, PlannerParams)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::PlannerParams_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
