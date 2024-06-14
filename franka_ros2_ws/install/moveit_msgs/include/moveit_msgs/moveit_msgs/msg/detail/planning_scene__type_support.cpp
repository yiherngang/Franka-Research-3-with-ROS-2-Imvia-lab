// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/planning_scene__struct.hpp"
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

void PlanningScene_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::PlanningScene(_init);
}

void PlanningScene_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::PlanningScene *>(message_memory);
  typed_message->~PlanningScene();
}

size_t size_function__PlanningScene__fixed_frame_transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningScene__fixed_frame_transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningScene__fixed_frame_transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningScene__fixed_frame_transforms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::TransformStamped *>(
    get_const_function__PlanningScene__fixed_frame_transforms(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::TransformStamped *>(untyped_value);
  value = item;
}

void assign_function__PlanningScene__fixed_frame_transforms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::TransformStamped *>(
    get_function__PlanningScene__fixed_frame_transforms(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::TransformStamped *>(untyped_value);
  item = value;
}

void resize_function__PlanningScene__fixed_frame_transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningScene__link_padding(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::LinkPadding> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningScene__link_padding(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::LinkPadding> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningScene__link_padding(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::LinkPadding> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningScene__link_padding(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::LinkPadding *>(
    get_const_function__PlanningScene__link_padding(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::LinkPadding *>(untyped_value);
  value = item;
}

void assign_function__PlanningScene__link_padding(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::LinkPadding *>(
    get_function__PlanningScene__link_padding(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::LinkPadding *>(untyped_value);
  item = value;
}

void resize_function__PlanningScene__link_padding(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::LinkPadding> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningScene__link_scale(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::LinkScale> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningScene__link_scale(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::LinkScale> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningScene__link_scale(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::LinkScale> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningScene__link_scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::LinkScale *>(
    get_const_function__PlanningScene__link_scale(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::LinkScale *>(untyped_value);
  value = item;
}

void assign_function__PlanningScene__link_scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::LinkScale *>(
    get_function__PlanningScene__link_scale(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::LinkScale *>(untyped_value);
  item = value;
}

void resize_function__PlanningScene__link_scale(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::LinkScale> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningScene__object_colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::ObjectColor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningScene__object_colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::ObjectColor> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningScene__object_colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::ObjectColor> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningScene__object_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::ObjectColor *>(
    get_const_function__PlanningScene__object_colors(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::ObjectColor *>(untyped_value);
  value = item;
}

void assign_function__PlanningScene__object_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::ObjectColor *>(
    get_function__PlanningScene__object_colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::ObjectColor *>(untyped_value);
  item = value;
}

void resize_function__PlanningScene__object_colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::ObjectColor> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningScene_message_member_array[10] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::RobotState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, robot_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_model_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, robot_model_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fixed_frame_transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, fixed_frame_transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningScene__fixed_frame_transforms,  // size() function pointer
    get_const_function__PlanningScene__fixed_frame_transforms,  // get_const(index) function pointer
    get_function__PlanningScene__fixed_frame_transforms,  // get(index) function pointer
    fetch_function__PlanningScene__fixed_frame_transforms,  // fetch(index, &value) function pointer
    assign_function__PlanningScene__fixed_frame_transforms,  // assign(index, value) function pointer
    resize_function__PlanningScene__fixed_frame_transforms  // resize(index) function pointer
  },
  {
    "allowed_collision_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::AllowedCollisionMatrix>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, allowed_collision_matrix),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_padding",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::LinkPadding>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, link_padding),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningScene__link_padding,  // size() function pointer
    get_const_function__PlanningScene__link_padding,  // get_const(index) function pointer
    get_function__PlanningScene__link_padding,  // get(index) function pointer
    fetch_function__PlanningScene__link_padding,  // fetch(index, &value) function pointer
    assign_function__PlanningScene__link_padding,  // assign(index, value) function pointer
    resize_function__PlanningScene__link_padding  // resize(index) function pointer
  },
  {
    "link_scale",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::LinkScale>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, link_scale),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningScene__link_scale,  // size() function pointer
    get_const_function__PlanningScene__link_scale,  // get_const(index) function pointer
    get_function__PlanningScene__link_scale,  // get(index) function pointer
    fetch_function__PlanningScene__link_scale,  // fetch(index, &value) function pointer
    assign_function__PlanningScene__link_scale,  // assign(index, value) function pointer
    resize_function__PlanningScene__link_scale  // resize(index) function pointer
  },
  {
    "object_colors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::ObjectColor>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, object_colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningScene__object_colors,  // size() function pointer
    get_const_function__PlanningScene__object_colors,  // get_const(index) function pointer
    get_function__PlanningScene__object_colors,  // get(index) function pointer
    fetch_function__PlanningScene__object_colors,  // fetch(index, &value) function pointer
    assign_function__PlanningScene__object_colors,  // assign(index, value) function pointer
    resize_function__PlanningScene__object_colors  // resize(index) function pointer
  },
  {
    "world",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::PlanningSceneWorld>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, world),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_diff",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::PlanningScene, is_diff),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningScene_message_members = {
  "moveit_msgs::msg",  // message namespace
  "PlanningScene",  // message name
  10,  // number of fields
  sizeof(moveit_msgs::msg::PlanningScene),
  PlanningScene_message_member_array,  // message members
  PlanningScene_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningScene_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningScene_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningScene_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::PlanningScene>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::PlanningScene_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, PlanningScene)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::PlanningScene_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
