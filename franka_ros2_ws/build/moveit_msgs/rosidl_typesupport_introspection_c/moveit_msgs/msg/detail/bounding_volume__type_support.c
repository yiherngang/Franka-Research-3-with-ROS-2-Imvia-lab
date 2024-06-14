// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/bounding_volume__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/bounding_volume__functions.h"
#include "moveit_msgs/msg/detail/bounding_volume__struct.h"


// Include directives for member types
// Member `primitives`
#include "shape_msgs/msg/solid_primitive.h"
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__rosidl_typesupport_introspection_c.h"
// Member `primitive_poses`
// Member `mesh_poses`
#include "geometry_msgs/msg/pose.h"
// Member `primitive_poses`
// Member `mesh_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `meshes`
#include "shape_msgs/msg/mesh.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__BoundingVolume__init(message_memory);
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_fini_function(void * message_memory)
{
  moveit_msgs__msg__BoundingVolume__fini(message_memory);
}

size_t moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__size_function__BoundingVolume__primitives(
  const void * untyped_member)
{
  const shape_msgs__msg__SolidPrimitive__Sequence * member =
    (const shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__primitives(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__SolidPrimitive__Sequence * member =
    (const shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__primitives(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__SolidPrimitive__Sequence * member =
    (shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__fetch_function__BoundingVolume__primitives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shape_msgs__msg__SolidPrimitive * item =
    ((const shape_msgs__msg__SolidPrimitive *)
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__primitives(untyped_member, index));
  shape_msgs__msg__SolidPrimitive * value =
    (shape_msgs__msg__SolidPrimitive *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__assign_function__BoundingVolume__primitives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shape_msgs__msg__SolidPrimitive * item =
    ((shape_msgs__msg__SolidPrimitive *)
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__primitives(untyped_member, index));
  const shape_msgs__msg__SolidPrimitive * value =
    (const shape_msgs__msg__SolidPrimitive *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__resize_function__BoundingVolume__primitives(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__SolidPrimitive__Sequence * member =
    (shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  shape_msgs__msg__SolidPrimitive__Sequence__fini(member);
  return shape_msgs__msg__SolidPrimitive__Sequence__init(member, size);
}

size_t moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__size_function__BoundingVolume__primitive_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__primitive_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__primitive_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__fetch_function__BoundingVolume__primitive_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__primitive_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__assign_function__BoundingVolume__primitive_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__primitive_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__resize_function__BoundingVolume__primitive_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__size_function__BoundingVolume__meshes(
  const void * untyped_member)
{
  const shape_msgs__msg__Mesh__Sequence * member =
    (const shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__meshes(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__Mesh__Sequence * member =
    (const shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__meshes(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__Mesh__Sequence * member =
    (shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__fetch_function__BoundingVolume__meshes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const shape_msgs__msg__Mesh * item =
    ((const shape_msgs__msg__Mesh *)
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__meshes(untyped_member, index));
  shape_msgs__msg__Mesh * value =
    (shape_msgs__msg__Mesh *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__assign_function__BoundingVolume__meshes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  shape_msgs__msg__Mesh * item =
    ((shape_msgs__msg__Mesh *)
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__meshes(untyped_member, index));
  const shape_msgs__msg__Mesh * value =
    (const shape_msgs__msg__Mesh *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__resize_function__BoundingVolume__meshes(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__Mesh__Sequence * member =
    (shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  shape_msgs__msg__Mesh__Sequence__fini(member);
  return shape_msgs__msg__Mesh__Sequence__init(member, size);
}

size_t moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__size_function__BoundingVolume__mesh_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__mesh_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__mesh_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__fetch_function__BoundingVolume__mesh_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__mesh_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__assign_function__BoundingVolume__mesh_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__mesh_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__resize_function__BoundingVolume__mesh_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_member_array[4] = {
  {
    "primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__BoundingVolume, primitives),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__size_function__BoundingVolume__primitives,  // size() function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__primitives,  // get_const(index) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__primitives,  // get(index) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__fetch_function__BoundingVolume__primitives,  // fetch(index, &value) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__assign_function__BoundingVolume__primitives,  // assign(index, value) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__resize_function__BoundingVolume__primitives  // resize(index) function pointer
  },
  {
    "primitive_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__BoundingVolume, primitive_poses),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__size_function__BoundingVolume__primitive_poses,  // size() function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__primitive_poses,  // get_const(index) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__primitive_poses,  // get(index) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__fetch_function__BoundingVolume__primitive_poses,  // fetch(index, &value) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__assign_function__BoundingVolume__primitive_poses,  // assign(index, value) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__resize_function__BoundingVolume__primitive_poses  // resize(index) function pointer
  },
  {
    "meshes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__BoundingVolume, meshes),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__size_function__BoundingVolume__meshes,  // size() function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__meshes,  // get_const(index) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__meshes,  // get(index) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__fetch_function__BoundingVolume__meshes,  // fetch(index, &value) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__assign_function__BoundingVolume__meshes,  // assign(index, value) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__resize_function__BoundingVolume__meshes  // resize(index) function pointer
  },
  {
    "mesh_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__BoundingVolume, mesh_poses),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__size_function__BoundingVolume__mesh_poses,  // size() function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_const_function__BoundingVolume__mesh_poses,  // get_const(index) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__get_function__BoundingVolume__mesh_poses,  // get(index) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__fetch_function__BoundingVolume__mesh_poses,  // fetch(index, &value) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__assign_function__BoundingVolume__mesh_poses,  // assign(index, value) function pointer
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__resize_function__BoundingVolume__mesh_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_members = {
  "moveit_msgs__msg",  // message namespace
  "BoundingVolume",  // message name
  4,  // number of fields
  sizeof(moveit_msgs__msg__BoundingVolume),
  moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_member_array,  // message members
  moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_type_support_handle = {
  0,
  &moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, BoundingVolume)() {
  moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, SolidPrimitive)();
  moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Mesh)();
  moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__BoundingVolume__rosidl_typesupport_introspection_c__BoundingVolume_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
