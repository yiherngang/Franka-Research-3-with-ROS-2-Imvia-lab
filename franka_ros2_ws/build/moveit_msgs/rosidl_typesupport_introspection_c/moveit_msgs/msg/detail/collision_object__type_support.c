// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/collision_object__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/collision_object__functions.h"
#include "moveit_msgs/msg/detail/collision_object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
// Member `primitive_poses`
// Member `mesh_poses`
// Member `plane_poses`
// Member `subframe_poses`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
// Member `primitive_poses`
// Member `mesh_poses`
// Member `plane_poses`
// Member `subframe_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `id`
// Member `subframe_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "object_recognition_msgs/msg/object_type.h"
// Member `type`
#include "object_recognition_msgs/msg/detail/object_type__rosidl_typesupport_introspection_c.h"
// Member `primitives`
#include "shape_msgs/msg/solid_primitive.h"
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__rosidl_typesupport_introspection_c.h"
// Member `meshes`
#include "shape_msgs/msg/mesh.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__rosidl_typesupport_introspection_c.h"
// Member `planes`
#include "shape_msgs/msg/plane.h"
// Member `planes`
#include "shape_msgs/msg/detail/plane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__CollisionObject__init(message_memory);
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_fini_function(void * message_memory)
{
  moveit_msgs__msg__CollisionObject__fini(message_memory);
}

size_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__primitives(
  const void * untyped_member)
{
  const shape_msgs__msg__SolidPrimitive__Sequence * member =
    (const shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__primitives(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__SolidPrimitive__Sequence * member =
    (const shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__primitives(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__SolidPrimitive__Sequence * member =
    (shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__primitives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shape_msgs__msg__SolidPrimitive * item =
    ((const shape_msgs__msg__SolidPrimitive *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__primitives(untyped_member, index));
  shape_msgs__msg__SolidPrimitive * value =
    (shape_msgs__msg__SolidPrimitive *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__primitives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shape_msgs__msg__SolidPrimitive * item =
    ((shape_msgs__msg__SolidPrimitive *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__primitives(untyped_member, index));
  const shape_msgs__msg__SolidPrimitive * value =
    (const shape_msgs__msg__SolidPrimitive *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__primitives(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__SolidPrimitive__Sequence * member =
    (shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  shape_msgs__msg__SolidPrimitive__Sequence__fini(member);
  return shape_msgs__msg__SolidPrimitive__Sequence__init(member, size);
}

size_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__primitive_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__primitive_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__primitive_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__primitive_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__primitive_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__primitive_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__primitive_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__primitive_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__meshes(
  const void * untyped_member)
{
  const shape_msgs__msg__Mesh__Sequence * member =
    (const shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__meshes(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__Mesh__Sequence * member =
    (const shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__meshes(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__Mesh__Sequence * member =
    (shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__meshes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shape_msgs__msg__Mesh * item =
    ((const shape_msgs__msg__Mesh *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__meshes(untyped_member, index));
  shape_msgs__msg__Mesh * value =
    (shape_msgs__msg__Mesh *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__meshes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shape_msgs__msg__Mesh * item =
    ((shape_msgs__msg__Mesh *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__meshes(untyped_member, index));
  const shape_msgs__msg__Mesh * value =
    (const shape_msgs__msg__Mesh *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__meshes(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__Mesh__Sequence * member =
    (shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  shape_msgs__msg__Mesh__Sequence__fini(member);
  return shape_msgs__msg__Mesh__Sequence__init(member, size);
}

size_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__mesh_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__mesh_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__mesh_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__mesh_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__mesh_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__mesh_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__mesh_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__mesh_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__planes(
  const void * untyped_member)
{
  const shape_msgs__msg__Plane__Sequence * member =
    (const shape_msgs__msg__Plane__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__planes(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__Plane__Sequence * member =
    (const shape_msgs__msg__Plane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__planes(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__Plane__Sequence * member =
    (shape_msgs__msg__Plane__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__planes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shape_msgs__msg__Plane * item =
    ((const shape_msgs__msg__Plane *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__planes(untyped_member, index));
  shape_msgs__msg__Plane * value =
    (shape_msgs__msg__Plane *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__planes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shape_msgs__msg__Plane * item =
    ((shape_msgs__msg__Plane *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__planes(untyped_member, index));
  const shape_msgs__msg__Plane * value =
    (const shape_msgs__msg__Plane *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__planes(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__Plane__Sequence * member =
    (shape_msgs__msg__Plane__Sequence *)(untyped_member);
  shape_msgs__msg__Plane__Sequence__fini(member);
  return shape_msgs__msg__Plane__Sequence__init(member, size);
}

size_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__plane_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__plane_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__plane_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__plane_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__plane_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__plane_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__plane_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__plane_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__subframe_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__subframe_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__subframe_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__subframe_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__subframe_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__subframe_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__subframe_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__subframe_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__subframe_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__subframe_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__subframe_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__subframe_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__subframe_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__subframe_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__subframe_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__subframe_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, primitives),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__primitives,  // size() function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__primitives,  // get_const(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__primitives,  // get(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__primitives,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__primitives,  // assign(index, value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__primitives  // resize(index) function pointer
  },
  {
    "primitive_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, primitive_poses),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__primitive_poses,  // size() function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__primitive_poses,  // get_const(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__primitive_poses,  // get(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__primitive_poses,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__primitive_poses,  // assign(index, value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__primitive_poses  // resize(index) function pointer
  },
  {
    "meshes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, meshes),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__meshes,  // size() function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__meshes,  // get_const(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__meshes,  // get(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__meshes,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__meshes,  // assign(index, value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__meshes  // resize(index) function pointer
  },
  {
    "mesh_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, mesh_poses),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__mesh_poses,  // size() function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__mesh_poses,  // get_const(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__mesh_poses,  // get(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__mesh_poses,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__mesh_poses,  // assign(index, value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__mesh_poses  // resize(index) function pointer
  },
  {
    "planes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, planes),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__planes,  // size() function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__planes,  // get_const(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__planes,  // get(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__planes,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__planes,  // assign(index, value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__planes  // resize(index) function pointer
  },
  {
    "plane_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, plane_poses),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__plane_poses,  // size() function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__plane_poses,  // get_const(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__plane_poses,  // get(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__plane_poses,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__plane_poses,  // assign(index, value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__plane_poses  // resize(index) function pointer
  },
  {
    "subframe_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, subframe_names),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__subframe_names,  // size() function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__subframe_names,  // get_const(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__subframe_names,  // get(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__subframe_names,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__subframe_names,  // assign(index, value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__subframe_names  // resize(index) function pointer
  },
  {
    "subframe_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, subframe_poses),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__size_function__CollisionObject__subframe_poses,  // size() function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_const_function__CollisionObject__subframe_poses,  // get_const(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__get_function__CollisionObject__subframe_poses,  // get(index) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__fetch_function__CollisionObject__subframe_poses,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__assign_function__CollisionObject__subframe_poses,  // assign(index, value) function pointer
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__resize_function__CollisionObject__subframe_poses  // resize(index) function pointer
  },
  {
    "operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, operation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_members = {
  "moveit_msgs__msg",  // message namespace
  "CollisionObject",  // message name
  13,  // number of fields
  sizeof(moveit_msgs__msg__CollisionObject),
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array,  // message members
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_type_support_handle = {
  0,
  &moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CollisionObject)() {
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, ObjectType)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, SolidPrimitive)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Mesh)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Plane)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
