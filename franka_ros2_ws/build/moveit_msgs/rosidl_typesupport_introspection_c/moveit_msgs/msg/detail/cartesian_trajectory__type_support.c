// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/cartesian_trajectory__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/cartesian_trajectory__functions.h"
#include "moveit_msgs/msg/detail/cartesian_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tracked_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
#include "moveit_msgs/msg/cartesian_trajectory_point.h"
// Member `points`
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__CartesianTrajectory__init(message_memory);
}

void moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_fini_function(void * message_memory)
{
  moveit_msgs__msg__CartesianTrajectory__fini(message_memory);
}

size_t moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__size_function__CartesianTrajectory__points(
  const void * untyped_member)
{
  const moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (const moveit_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (const moveit_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (moveit_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__fetch_function__CartesianTrajectory__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__CartesianTrajectoryPoint * item =
    ((const moveit_msgs__msg__CartesianTrajectoryPoint *)
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points(untyped_member, index));
  moveit_msgs__msg__CartesianTrajectoryPoint * value =
    (moveit_msgs__msg__CartesianTrajectoryPoint *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__assign_function__CartesianTrajectory__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__CartesianTrajectoryPoint * item =
    ((moveit_msgs__msg__CartesianTrajectoryPoint *)
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points(untyped_member, index));
  const moveit_msgs__msg__CartesianTrajectoryPoint * value =
    (const moveit_msgs__msg__CartesianTrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectory__points(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (moveit_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(member);
  return moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CartesianTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracked_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CartesianTrajectory, tracked_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CartesianTrajectory, points),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__size_function__CartesianTrajectory__points,  // size() function pointer
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points,  // get_const(index) function pointer
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points,  // get(index) function pointer
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__fetch_function__CartesianTrajectory__points,  // fetch(index, &value) function pointer
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__assign_function__CartesianTrajectory__points,  // assign(index, value) function pointer
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectory__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_members = {
  "moveit_msgs__msg",  // message namespace
  "CartesianTrajectory",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__msg__CartesianTrajectory),
  moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array,  // message members
  moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle = {
  0,
  &moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CartesianTrajectory)() {
  moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CartesianTrajectoryPoint)();
  if (!moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
