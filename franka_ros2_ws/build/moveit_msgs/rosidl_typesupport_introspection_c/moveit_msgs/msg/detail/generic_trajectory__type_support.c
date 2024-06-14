// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/GenericTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/generic_trajectory__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/generic_trajectory__functions.h"
#include "moveit_msgs/msg/detail/generic_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `cartesian_trajectory`
#include "moveit_msgs/msg/cartesian_trajectory.h"
// Member `cartesian_trajectory`
#include "moveit_msgs/msg/detail/cartesian_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__GenericTrajectory__init(message_memory);
}

void moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_fini_function(void * message_memory)
{
  moveit_msgs__msg__GenericTrajectory__fini(message_memory);
}

size_t moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__size_function__GenericTrajectory__joint_trajectory(
  const void * untyped_member)
{
  const trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (const trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_const_function__GenericTrajectory__joint_trajectory(
  const void * untyped_member, size_t index)
{
  const trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (const trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_function__GenericTrajectory__joint_trajectory(
  void * untyped_member, size_t index)
{
  trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__fetch_function__GenericTrajectory__joint_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const trajectory_msgs__msg__JointTrajectory * item =
    ((const trajectory_msgs__msg__JointTrajectory *)
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_const_function__GenericTrajectory__joint_trajectory(untyped_member, index));
  trajectory_msgs__msg__JointTrajectory * value =
    (trajectory_msgs__msg__JointTrajectory *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__assign_function__GenericTrajectory__joint_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  trajectory_msgs__msg__JointTrajectory * item =
    ((trajectory_msgs__msg__JointTrajectory *)
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_function__GenericTrajectory__joint_trajectory(untyped_member, index));
  const trajectory_msgs__msg__JointTrajectory * value =
    (const trajectory_msgs__msg__JointTrajectory *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__resize_function__GenericTrajectory__joint_trajectory(
  void * untyped_member, size_t size)
{
  trajectory_msgs__msg__JointTrajectory__Sequence * member =
    (trajectory_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  trajectory_msgs__msg__JointTrajectory__Sequence__fini(member);
  return trajectory_msgs__msg__JointTrajectory__Sequence__init(member, size);
}

size_t moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__size_function__GenericTrajectory__cartesian_trajectory(
  const void * untyped_member)
{
  const moveit_msgs__msg__CartesianTrajectory__Sequence * member =
    (const moveit_msgs__msg__CartesianTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_const_function__GenericTrajectory__cartesian_trajectory(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__CartesianTrajectory__Sequence * member =
    (const moveit_msgs__msg__CartesianTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_function__GenericTrajectory__cartesian_trajectory(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__CartesianTrajectory__Sequence * member =
    (moveit_msgs__msg__CartesianTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__fetch_function__GenericTrajectory__cartesian_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__CartesianTrajectory * item =
    ((const moveit_msgs__msg__CartesianTrajectory *)
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_const_function__GenericTrajectory__cartesian_trajectory(untyped_member, index));
  moveit_msgs__msg__CartesianTrajectory * value =
    (moveit_msgs__msg__CartesianTrajectory *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__assign_function__GenericTrajectory__cartesian_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__CartesianTrajectory * item =
    ((moveit_msgs__msg__CartesianTrajectory *)
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_function__GenericTrajectory__cartesian_trajectory(untyped_member, index));
  const moveit_msgs__msg__CartesianTrajectory * value =
    (const moveit_msgs__msg__CartesianTrajectory *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__resize_function__GenericTrajectory__cartesian_trajectory(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__CartesianTrajectory__Sequence * member =
    (moveit_msgs__msg__CartesianTrajectory__Sequence *)(untyped_member);
  moveit_msgs__msg__CartesianTrajectory__Sequence__fini(member);
  return moveit_msgs__msg__CartesianTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__GenericTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__GenericTrajectory, joint_trajectory),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__size_function__GenericTrajectory__joint_trajectory,  // size() function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_const_function__GenericTrajectory__joint_trajectory,  // get_const(index) function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_function__GenericTrajectory__joint_trajectory,  // get(index) function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__fetch_function__GenericTrajectory__joint_trajectory,  // fetch(index, &value) function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__assign_function__GenericTrajectory__joint_trajectory,  // assign(index, value) function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__resize_function__GenericTrajectory__joint_trajectory  // resize(index) function pointer
  },
  {
    "cartesian_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__GenericTrajectory, cartesian_trajectory),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__size_function__GenericTrajectory__cartesian_trajectory,  // size() function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_const_function__GenericTrajectory__cartesian_trajectory,  // get_const(index) function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__get_function__GenericTrajectory__cartesian_trajectory,  // get(index) function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__fetch_function__GenericTrajectory__cartesian_trajectory,  // fetch(index, &value) function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__assign_function__GenericTrajectory__cartesian_trajectory,  // assign(index, value) function pointer
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__resize_function__GenericTrajectory__cartesian_trajectory  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_members = {
  "moveit_msgs__msg",  // message namespace
  "GenericTrajectory",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__msg__GenericTrajectory),
  moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_member_array,  // message members
  moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_type_support_handle = {
  0,
  &moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, GenericTrajectory)() {
  moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CartesianTrajectory)();
  if (!moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__GenericTrajectory__rosidl_typesupport_introspection_c__GenericTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
