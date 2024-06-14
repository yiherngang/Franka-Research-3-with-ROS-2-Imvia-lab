// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/msg/detail/collision_object__struct.hpp"
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

void CollisionObject_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::msg::CollisionObject(_init);
}

void CollisionObject_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::msg::CollisionObject *>(message_memory);
  typed_message->~CollisionObject();
}

size_t size_function__CollisionObject__primitives(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shape_msgs::msg::SolidPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionObject__primitives(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shape_msgs::msg::SolidPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionObject__primitives(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shape_msgs::msg::SolidPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionObject__primitives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shape_msgs::msg::SolidPrimitive *>(
    get_const_function__CollisionObject__primitives(untyped_member, index));
  auto & value = *reinterpret_cast<shape_msgs::msg::SolidPrimitive *>(untyped_value);
  value = item;
}

void assign_function__CollisionObject__primitives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shape_msgs::msg::SolidPrimitive *>(
    get_function__CollisionObject__primitives(untyped_member, index));
  const auto & value = *reinterpret_cast<const shape_msgs::msg::SolidPrimitive *>(untyped_value);
  item = value;
}

void resize_function__CollisionObject__primitives(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shape_msgs::msg::SolidPrimitive> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CollisionObject__primitive_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionObject__primitive_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionObject__primitive_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionObject__primitive_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__CollisionObject__primitive_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__CollisionObject__primitive_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__CollisionObject__primitive_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__CollisionObject__primitive_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CollisionObject__meshes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shape_msgs::msg::Mesh> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionObject__meshes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shape_msgs::msg::Mesh> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionObject__meshes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shape_msgs::msg::Mesh> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionObject__meshes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shape_msgs::msg::Mesh *>(
    get_const_function__CollisionObject__meshes(untyped_member, index));
  auto & value = *reinterpret_cast<shape_msgs::msg::Mesh *>(untyped_value);
  value = item;
}

void assign_function__CollisionObject__meshes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shape_msgs::msg::Mesh *>(
    get_function__CollisionObject__meshes(untyped_member, index));
  const auto & value = *reinterpret_cast<const shape_msgs::msg::Mesh *>(untyped_value);
  item = value;
}

void resize_function__CollisionObject__meshes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shape_msgs::msg::Mesh> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CollisionObject__mesh_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionObject__mesh_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionObject__mesh_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionObject__mesh_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__CollisionObject__mesh_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__CollisionObject__mesh_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__CollisionObject__mesh_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__CollisionObject__mesh_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CollisionObject__planes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<shape_msgs::msg::Plane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionObject__planes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<shape_msgs::msg::Plane> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionObject__planes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<shape_msgs::msg::Plane> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionObject__planes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const shape_msgs::msg::Plane *>(
    get_const_function__CollisionObject__planes(untyped_member, index));
  auto & value = *reinterpret_cast<shape_msgs::msg::Plane *>(untyped_value);
  value = item;
}

void assign_function__CollisionObject__planes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<shape_msgs::msg::Plane *>(
    get_function__CollisionObject__planes(untyped_member, index));
  const auto & value = *reinterpret_cast<const shape_msgs::msg::Plane *>(untyped_value);
  item = value;
}

void resize_function__CollisionObject__planes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<shape_msgs::msg::Plane> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CollisionObject__plane_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionObject__plane_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionObject__plane_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionObject__plane_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__CollisionObject__plane_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__CollisionObject__plane_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__CollisionObject__plane_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__CollisionObject__plane_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CollisionObject__subframe_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionObject__subframe_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionObject__subframe_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionObject__subframe_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__CollisionObject__subframe_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__CollisionObject__subframe_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__CollisionObject__subframe_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__CollisionObject__subframe_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CollisionObject__subframe_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CollisionObject__subframe_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__CollisionObject__subframe_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__CollisionObject__subframe_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__CollisionObject__subframe_poses(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__CollisionObject__subframe_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__CollisionObject__subframe_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__CollisionObject__subframe_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CollisionObject_message_member_array[13] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_recognition_msgs::msg::ObjectType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "primitives",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shape_msgs::msg::SolidPrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, primitives),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionObject__primitives,  // size() function pointer
    get_const_function__CollisionObject__primitives,  // get_const(index) function pointer
    get_function__CollisionObject__primitives,  // get(index) function pointer
    fetch_function__CollisionObject__primitives,  // fetch(index, &value) function pointer
    assign_function__CollisionObject__primitives,  // assign(index, value) function pointer
    resize_function__CollisionObject__primitives  // resize(index) function pointer
  },
  {
    "primitive_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, primitive_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionObject__primitive_poses,  // size() function pointer
    get_const_function__CollisionObject__primitive_poses,  // get_const(index) function pointer
    get_function__CollisionObject__primitive_poses,  // get(index) function pointer
    fetch_function__CollisionObject__primitive_poses,  // fetch(index, &value) function pointer
    assign_function__CollisionObject__primitive_poses,  // assign(index, value) function pointer
    resize_function__CollisionObject__primitive_poses  // resize(index) function pointer
  },
  {
    "meshes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shape_msgs::msg::Mesh>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, meshes),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionObject__meshes,  // size() function pointer
    get_const_function__CollisionObject__meshes,  // get_const(index) function pointer
    get_function__CollisionObject__meshes,  // get(index) function pointer
    fetch_function__CollisionObject__meshes,  // fetch(index, &value) function pointer
    assign_function__CollisionObject__meshes,  // assign(index, value) function pointer
    resize_function__CollisionObject__meshes  // resize(index) function pointer
  },
  {
    "mesh_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, mesh_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionObject__mesh_poses,  // size() function pointer
    get_const_function__CollisionObject__mesh_poses,  // get_const(index) function pointer
    get_function__CollisionObject__mesh_poses,  // get(index) function pointer
    fetch_function__CollisionObject__mesh_poses,  // fetch(index, &value) function pointer
    assign_function__CollisionObject__mesh_poses,  // assign(index, value) function pointer
    resize_function__CollisionObject__mesh_poses  // resize(index) function pointer
  },
  {
    "planes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<shape_msgs::msg::Plane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, planes),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionObject__planes,  // size() function pointer
    get_const_function__CollisionObject__planes,  // get_const(index) function pointer
    get_function__CollisionObject__planes,  // get(index) function pointer
    fetch_function__CollisionObject__planes,  // fetch(index, &value) function pointer
    assign_function__CollisionObject__planes,  // assign(index, value) function pointer
    resize_function__CollisionObject__planes  // resize(index) function pointer
  },
  {
    "plane_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, plane_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionObject__plane_poses,  // size() function pointer
    get_const_function__CollisionObject__plane_poses,  // get_const(index) function pointer
    get_function__CollisionObject__plane_poses,  // get(index) function pointer
    fetch_function__CollisionObject__plane_poses,  // fetch(index, &value) function pointer
    assign_function__CollisionObject__plane_poses,  // assign(index, value) function pointer
    resize_function__CollisionObject__plane_poses  // resize(index) function pointer
  },
  {
    "subframe_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, subframe_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionObject__subframe_names,  // size() function pointer
    get_const_function__CollisionObject__subframe_names,  // get_const(index) function pointer
    get_function__CollisionObject__subframe_names,  // get(index) function pointer
    fetch_function__CollisionObject__subframe_names,  // fetch(index, &value) function pointer
    assign_function__CollisionObject__subframe_names,  // assign(index, value) function pointer
    resize_function__CollisionObject__subframe_names  // resize(index) function pointer
  },
  {
    "subframe_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, subframe_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__CollisionObject__subframe_poses,  // size() function pointer
    get_const_function__CollisionObject__subframe_poses,  // get_const(index) function pointer
    get_function__CollisionObject__subframe_poses,  // get(index) function pointer
    fetch_function__CollisionObject__subframe_poses,  // fetch(index, &value) function pointer
    assign_function__CollisionObject__subframe_poses,  // assign(index, value) function pointer
    resize_function__CollisionObject__subframe_poses  // resize(index) function pointer
  },
  {
    "operation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::msg::CollisionObject, operation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CollisionObject_message_members = {
  "moveit_msgs::msg",  // message namespace
  "CollisionObject",  // message name
  13,  // number of fields
  sizeof(moveit_msgs::msg::CollisionObject),
  CollisionObject_message_member_array,  // message members
  CollisionObject_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionObject_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CollisionObject_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CollisionObject_message_members,
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
get_message_type_support_handle<moveit_msgs::msg::CollisionObject>()
{
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionObject_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, msg, CollisionObject)() {
  return &::moveit_msgs::msg::rosidl_typesupport_introspection_cpp::CollisionObject_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
