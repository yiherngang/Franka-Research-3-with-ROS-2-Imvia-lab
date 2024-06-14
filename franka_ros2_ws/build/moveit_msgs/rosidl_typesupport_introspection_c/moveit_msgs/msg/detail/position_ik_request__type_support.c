// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/position_ik_request__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/position_ik_request__functions.h"
#include "moveit_msgs/msg/detail/position_ik_request__struct.h"


// Include directives for member types
// Member `group_name`
// Member `ik_link_name`
// Member `ik_link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `robot_state`
#include "moveit_msgs/msg/robot_state.h"
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `constraints`
#include "moveit_msgs/msg/constraints.h"
// Member `constraints`
#include "moveit_msgs/msg/detail/constraints__rosidl_typesupport_introspection_c.h"
// Member `pose_stamped`
// Member `pose_stamped_vector`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pose_stamped`
// Member `pose_stamped_vector`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `timeout`
#include "builtin_interfaces/msg/duration.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__PositionIKRequest__init(message_memory);
}

void moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_fini_function(void * message_memory)
{
  moveit_msgs__msg__PositionIKRequest__fini(message_memory);
}

size_t moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__size_function__PositionIKRequest__ik_link_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_const_function__PositionIKRequest__ik_link_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_function__PositionIKRequest__ik_link_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__fetch_function__PositionIKRequest__ik_link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_const_function__PositionIKRequest__ik_link_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__assign_function__PositionIKRequest__ik_link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_function__PositionIKRequest__ik_link_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__resize_function__PositionIKRequest__ik_link_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__size_function__PositionIKRequest__pose_stamped_vector(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_const_function__PositionIKRequest__pose_stamped_vector(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_function__PositionIKRequest__pose_stamped_vector(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__fetch_function__PositionIKRequest__pose_stamped_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_const_function__PositionIKRequest__pose_stamped_vector(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__assign_function__PositionIKRequest__pose_stamped_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_function__PositionIKRequest__pose_stamped_vector(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__resize_function__PositionIKRequest__pose_stamped_vector(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_member_array[9] = {
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, robot_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avoid_collisions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, avoid_collisions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ik_link_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, ik_link_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_stamped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, pose_stamped),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ik_link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, ik_link_names),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__size_function__PositionIKRequest__ik_link_names,  // size() function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_const_function__PositionIKRequest__ik_link_names,  // get_const(index) function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_function__PositionIKRequest__ik_link_names,  // get(index) function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__fetch_function__PositionIKRequest__ik_link_names,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__assign_function__PositionIKRequest__ik_link_names,  // assign(index, value) function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__resize_function__PositionIKRequest__ik_link_names  // resize(index) function pointer
  },
  {
    "pose_stamped_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, pose_stamped_vector),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__size_function__PositionIKRequest__pose_stamped_vector,  // size() function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_const_function__PositionIKRequest__pose_stamped_vector,  // get_const(index) function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__get_function__PositionIKRequest__pose_stamped_vector,  // get(index) function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__fetch_function__PositionIKRequest__pose_stamped_vector,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__assign_function__PositionIKRequest__pose_stamped_vector,  // assign(index, value) function pointer
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__resize_function__PositionIKRequest__pose_stamped_vector  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PositionIKRequest, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_members = {
  "moveit_msgs__msg",  // message namespace
  "PositionIKRequest",  // message name
  9,  // number of fields
  sizeof(moveit_msgs__msg__PositionIKRequest),
  moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_member_array,  // message members
  moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_type_support_handle = {
  0,
  &moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PositionIKRequest)() {
  moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Constraints)();
  moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__PositionIKRequest__rosidl_typesupport_introspection_c__PositionIKRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
