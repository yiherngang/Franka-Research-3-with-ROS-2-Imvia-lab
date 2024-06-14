// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/KinematicSolverInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/kinematic_solver_info__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/kinematic_solver_info__functions.h"
#include "moveit_msgs/msg/detail/kinematic_solver_info__struct.h"


// Include directives for member types
// Member `joint_names`
// Member `link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `limits`
#include "moveit_msgs/msg/joint_limits.h"
// Member `limits`
#include "moveit_msgs/msg/detail/joint_limits__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__KinematicSolverInfo__init(message_memory);
}

void moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_fini_function(void * message_memory)
{
  moveit_msgs__msg__KinematicSolverInfo__fini(message_memory);
}

size_t moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__size_function__KinematicSolverInfo__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicSolverInfo__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__assign_function__KinematicSolverInfo__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__resize_function__KinematicSolverInfo__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__size_function__KinematicSolverInfo__limits(
  const void * untyped_member)
{
  const moveit_msgs__msg__JointLimits__Sequence * member =
    (const moveit_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__limits(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__JointLimits__Sequence * member =
    (const moveit_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__limits(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__JointLimits__Sequence * member =
    (moveit_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicSolverInfo__limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__JointLimits * item =
    ((const moveit_msgs__msg__JointLimits *)
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__limits(untyped_member, index));
  moveit_msgs__msg__JointLimits * value =
    (moveit_msgs__msg__JointLimits *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__assign_function__KinematicSolverInfo__limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__JointLimits * item =
    ((moveit_msgs__msg__JointLimits *)
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__limits(untyped_member, index));
  const moveit_msgs__msg__JointLimits * value =
    (const moveit_msgs__msg__JointLimits *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__resize_function__KinematicSolverInfo__limits(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__JointLimits__Sequence * member =
    (moveit_msgs__msg__JointLimits__Sequence *)(untyped_member);
  moveit_msgs__msg__JointLimits__Sequence__fini(member);
  return moveit_msgs__msg__JointLimits__Sequence__init(member, size);
}

size_t moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__size_function__KinematicSolverInfo__link_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__link_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__link_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicSolverInfo__link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__link_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__assign_function__KinematicSolverInfo__link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__link_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__resize_function__KinematicSolverInfo__link_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_member_array[3] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__KinematicSolverInfo, joint_names),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__size_function__KinematicSolverInfo__joint_names,  // size() function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__joint_names,  // get_const(index) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__joint_names,  // get(index) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicSolverInfo__joint_names,  // fetch(index, &value) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__assign_function__KinematicSolverInfo__joint_names,  // assign(index, value) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__resize_function__KinematicSolverInfo__joint_names  // resize(index) function pointer
  },
  {
    "limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__KinematicSolverInfo, limits),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__size_function__KinematicSolverInfo__limits,  // size() function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__limits,  // get_const(index) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__limits,  // get(index) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicSolverInfo__limits,  // fetch(index, &value) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__assign_function__KinematicSolverInfo__limits,  // assign(index, value) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__resize_function__KinematicSolverInfo__limits  // resize(index) function pointer
  },
  {
    "link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__KinematicSolverInfo, link_names),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__size_function__KinematicSolverInfo__link_names,  // size() function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicSolverInfo__link_names,  // get_const(index) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__get_function__KinematicSolverInfo__link_names,  // get(index) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicSolverInfo__link_names,  // fetch(index, &value) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__assign_function__KinematicSolverInfo__link_names,  // assign(index, value) function pointer
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__resize_function__KinematicSolverInfo__link_names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_members = {
  "moveit_msgs__msg",  // message namespace
  "KinematicSolverInfo",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__msg__KinematicSolverInfo),
  moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_member_array,  // message members
  moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_type_support_handle = {
  0,
  &moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, KinematicSolverInfo)() {
  moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, JointLimits)();
  if (!moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__KinematicSolverInfo__rosidl_typesupport_introspection_c__KinematicSolverInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
