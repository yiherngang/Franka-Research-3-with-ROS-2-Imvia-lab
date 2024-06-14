// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/robot_state__functions.h"
#include "moveit_msgs/msg/detail/robot_state__struct.h"


// Include directives for member types
// Member `joint_state`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
// Member `multi_dof_joint_state`
#include "sensor_msgs/msg/multi_dof_joint_state.h"
// Member `multi_dof_joint_state`
#include "sensor_msgs/msg/detail/multi_dof_joint_state__rosidl_typesupport_introspection_c.h"
// Member `attached_collision_objects`
#include "moveit_msgs/msg/attached_collision_object.h"
// Member `attached_collision_objects`
#include "moveit_msgs/msg/detail/attached_collision_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__RobotState__init(message_memory);
}

void moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function(void * message_memory)
{
  moveit_msgs__msg__RobotState__fini(message_memory);
}

size_t moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__attached_collision_objects(
  const void * untyped_member)
{
  const moveit_msgs__msg__AttachedCollisionObject__Sequence * member =
    (const moveit_msgs__msg__AttachedCollisionObject__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__attached_collision_objects(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__AttachedCollisionObject__Sequence * member =
    (const moveit_msgs__msg__AttachedCollisionObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__attached_collision_objects(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__AttachedCollisionObject__Sequence * member =
    (moveit_msgs__msg__AttachedCollisionObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__attached_collision_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__AttachedCollisionObject * item =
    ((const moveit_msgs__msg__AttachedCollisionObject *)
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__attached_collision_objects(untyped_member, index));
  moveit_msgs__msg__AttachedCollisionObject * value =
    (moveit_msgs__msg__AttachedCollisionObject *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__attached_collision_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__AttachedCollisionObject * item =
    ((moveit_msgs__msg__AttachedCollisionObject *)
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__attached_collision_objects(untyped_member, index));
  const moveit_msgs__msg__AttachedCollisionObject * value =
    (const moveit_msgs__msg__AttachedCollisionObject *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__attached_collision_objects(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__AttachedCollisionObject__Sequence * member =
    (moveit_msgs__msg__AttachedCollisionObject__Sequence *)(untyped_member);
  moveit_msgs__msg__AttachedCollisionObject__Sequence__fini(member);
  return moveit_msgs__msg__AttachedCollisionObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[4] = {
  {
    "joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__RobotState, joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__RobotState, multi_dof_joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attached_collision_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__RobotState, attached_collision_objects),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__attached_collision_objects,  // size() function pointer
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__attached_collision_objects,  // get_const(index) function pointer
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__attached_collision_objects,  // get(index) function pointer
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__attached_collision_objects,  // fetch(index, &value) function pointer
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__attached_collision_objects,  // assign(index, value) function pointer
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__attached_collision_objects  // resize(index) function pointer
  },
  {
    "is_diff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__RobotState, is_diff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members = {
  "moveit_msgs__msg",  // message namespace
  "RobotState",  // message name
  4,  // number of fields
  sizeof(moveit_msgs__msg__RobotState),
  moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array,  // message members
  moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle = {
  0,
  &moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)() {
  moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, MultiDOFJointState)();
  moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AttachedCollisionObject)();
  if (!moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
