// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/DisplayRobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/display_robot_state__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/display_robot_state__functions.h"
#include "moveit_msgs/msg/detail/display_robot_state__struct.h"


// Include directives for member types
// Member `state`
#include "moveit_msgs/msg/robot_state.h"
// Member `state`
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `highlight_links`
#include "moveit_msgs/msg/object_color.h"
// Member `highlight_links`
#include "moveit_msgs/msg/detail/object_color__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__DisplayRobotState__init(message_memory);
}

void moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_fini_function(void * message_memory)
{
  moveit_msgs__msg__DisplayRobotState__fini(message_memory);
}

size_t moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__size_function__DisplayRobotState__highlight_links(
  const void * untyped_member)
{
  const moveit_msgs__msg__ObjectColor__Sequence * member =
    (const moveit_msgs__msg__ObjectColor__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__get_const_function__DisplayRobotState__highlight_links(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__ObjectColor__Sequence * member =
    (const moveit_msgs__msg__ObjectColor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__get_function__DisplayRobotState__highlight_links(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__ObjectColor__Sequence * member =
    (moveit_msgs__msg__ObjectColor__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__fetch_function__DisplayRobotState__highlight_links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__ObjectColor * item =
    ((const moveit_msgs__msg__ObjectColor *)
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__get_const_function__DisplayRobotState__highlight_links(untyped_member, index));
  moveit_msgs__msg__ObjectColor * value =
    (moveit_msgs__msg__ObjectColor *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__assign_function__DisplayRobotState__highlight_links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__ObjectColor * item =
    ((moveit_msgs__msg__ObjectColor *)
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__get_function__DisplayRobotState__highlight_links(untyped_member, index));
  const moveit_msgs__msg__ObjectColor * value =
    (const moveit_msgs__msg__ObjectColor *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__resize_function__DisplayRobotState__highlight_links(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__ObjectColor__Sequence * member =
    (moveit_msgs__msg__ObjectColor__Sequence *)(untyped_member);
  moveit_msgs__msg__ObjectColor__Sequence__fini(member);
  return moveit_msgs__msg__ObjectColor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_member_array[3] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__DisplayRobotState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "highlight_links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__DisplayRobotState, highlight_links),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__size_function__DisplayRobotState__highlight_links,  // size() function pointer
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__get_const_function__DisplayRobotState__highlight_links,  // get_const(index) function pointer
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__get_function__DisplayRobotState__highlight_links,  // get(index) function pointer
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__fetch_function__DisplayRobotState__highlight_links,  // fetch(index, &value) function pointer
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__assign_function__DisplayRobotState__highlight_links,  // assign(index, value) function pointer
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__resize_function__DisplayRobotState__highlight_links  // resize(index) function pointer
  },
  {
    "hide",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__DisplayRobotState, hide),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_members = {
  "moveit_msgs__msg",  // message namespace
  "DisplayRobotState",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__msg__DisplayRobotState),
  moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_member_array,  // message members
  moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_type_support_handle = {
  0,
  &moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, DisplayRobotState)() {
  moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, ObjectColor)();
  if (!moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__DisplayRobotState__rosidl_typesupport_introspection_c__DisplayRobotState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
