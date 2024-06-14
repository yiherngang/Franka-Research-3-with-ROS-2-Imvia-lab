// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/bounding_volume__struct.hpp"
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

void BoundingVolume_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::BoundingVolume(_init);
}

void BoundingVolume_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::BoundingVolume *>(message_memory);
  typed_message->~BoundingVolume();
}

size_t size_function__BoundingVolume__primitives(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shape_msgs::msg::SolidPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundingVolume__primitives(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shape_msgs::msg::SolidPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundingVolume__primitives(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shape_msgs::msg::SolidPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundingVolume__primitives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shape_msgs::msg::SolidPrimitive *>(
    get_const_function__BoundingVolume__primitives(untyped_member, index));
  auto & value = *reinterpret_cast<shape_msgs::msg::SolidPrimitive *>(untyped_value);
  value = item;
}

void assign_function__BoundingVolume__primitives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shape_msgs::msg::SolidPrimitive *>(
    get_function__BoundingVolume__primitives(untyped_member, index));
  const auto & value = *reinterpret_cast<const shape_msgs::msg::SolidPrimitive *>(untyped_value);
  item = value;
}

void resize_function__BoundingVolume__primitives(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shape_msgs::msg::SolidPrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundingVolume__primitive_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundingVolume__primitive_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundingVolume__primitive_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundingVolume__primitive_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__BoundingVolume__primitive_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__BoundingVolume__primitive_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__BoundingVolume__primitive_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__BoundingVolume__primitive_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundingVolume__meshes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shape_msgs::msg::Mesh> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundingVolume__meshes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shape_msgs::msg::Mesh> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundingVolume__meshes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shape_msgs::msg::Mesh> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundingVolume__meshes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shape_msgs::msg::Mesh *>(
    get_const_function__BoundingVolume__meshes(untyped_member, index));
  auto & value = *reinterpret_cast<shape_msgs::msg::Mesh *>(untyped_value);
  value = item;
}

void assign_function__BoundingVolume__meshes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shape_msgs::msg::Mesh *>(
    get_function__BoundingVolume__meshes(untyped_member, index));
  const auto & value = *reinterpret_cast<const shape_msgs::msg::Mesh *>(untyped_value);
  item = value;
}

void resize_function__BoundingVolume__meshes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shape_msgs::msg::Mesh> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BoundingVolume__mesh_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BoundingVolume__mesh_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__BoundingVolume__mesh_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__BoundingVolume__mesh_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__BoundingVolume__mesh_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__BoundingVolume__mesh_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__BoundingVolume__mesh_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__BoundingVolume__mesh_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoundingVolume_message_member_array[4] = {
  {
    "primitives",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shape_msgs::msg::SolidPrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::BoundingVolume, primitives),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundingVolume__primitives,  // size() function pointer
    get_const_function__BoundingVolume__primitives,  // get_const(index) function pointer
    get_function__BoundingVolume__primitives,  // get(index) function pointer
    fetch_function__BoundingVolume__primitives,  // fetch(index, &value) function pointer
    assign_function__BoundingVolume__primitives,  // assign(index, value) function pointer
    resize_function__BoundingVolume__primitives  // resize(index) function pointer
  },
  {
    "primitive_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::BoundingVolume, primitive_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundingVolume__primitive_poses,  // size() function pointer
    get_const_function__BoundingVolume__primitive_poses,  // get_const(index) function pointer
    get_function__BoundingVolume__primitive_poses,  // get(index) function pointer
    fetch_function__BoundingVolume__primitive_poses,  // fetch(index, &value) function pointer
    assign_function__BoundingVolume__primitive_poses,  // assign(index, value) function pointer
    resize_function__BoundingVolume__primitive_poses  // resize(index) function pointer
  },
  {
    "meshes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shape_msgs::msg::Mesh>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::BoundingVolume, meshes),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundingVolume__meshes,  // size() function pointer
    get_const_function__BoundingVolume__meshes,  // get_const(index) function pointer
    get_function__BoundingVolume__meshes,  // get(index) function pointer
    fetch_function__BoundingVolume__meshes,  // fetch(index, &value) function pointer
    assign_function__BoundingVolume__meshes,  // assign(index, value) function pointer
    resize_function__BoundingVolume__meshes  // resize(index) function pointer
  },
  {
    "mesh_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::BoundingVolume, mesh_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__BoundingVolume__mesh_poses,  // size() function pointer
    get_const_function__BoundingVolume__mesh_poses,  // get_const(index) function pointer
    get_function__BoundingVolume__mesh_poses,  // get(index) function pointer
    fetch_function__BoundingVolume__mesh_poses,  // fetch(index, &value) function pointer
    assign_function__BoundingVolume__mesh_poses,  // assign(index, value) function pointer
    resize_function__BoundingVolume__mesh_poses  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoundingVolume_message_members = {
  "moveit_msgs::msg",  // message namespace
  "BoundingVolume",  // message name
  4,  // number of fields
  sizeof(moveit_msgs::msg::BoundingVolume),
  BoundingVolume_message_member_array,  // message members
  BoundingVolume_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingVolume_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoundingVolume_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoundingVolume_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::BoundingVolume>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::BoundingVolume_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, BoundingVolume)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::BoundingVolume_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
