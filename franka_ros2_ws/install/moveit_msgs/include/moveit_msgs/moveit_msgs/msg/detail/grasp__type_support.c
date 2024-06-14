// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/grasp__functions.h"
#include "moveit_msgs/msg/detail/grasp__struct.h"


// Include directives for member types
// Member `id`
// Member `allowed_touch_objects`
#include "rosidl_runtime_c/string_functions.h"
// Member `pre_grasp_posture`
// Member `grasp_posture`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `pre_grasp_posture`
// Member `grasp_posture`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `grasp_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `grasp_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `pre_grasp_approach`
// Member `post_grasp_retreat`
// Member `post_place_retreat`
#include "moveit_msgs/msg/gripper_translation.h"
// Member `pre_grasp_approach`
// Member `post_grasp_retreat`
// Member `post_place_retreat`
#include "moveit_msgs/msg/detail/gripper_translation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__Grasp__init(message_memory);
}

void moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_fini_function(void * message_memory)
{
  moveit_msgs__msg__Grasp__fini(message_memory);
}

size_t moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__size_function__Grasp__allowed_touch_objects(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__get_const_function__Grasp__allowed_touch_objects(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__get_function__Grasp__allowed_touch_objects(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__fetch_function__Grasp__allowed_touch_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__get_const_function__Grasp__allowed_touch_objects(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__assign_function__Grasp__allowed_touch_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__get_function__Grasp__allowed_touch_objects(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__resize_function__Grasp__allowed_touch_objects(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_member_array[10] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pre_grasp_posture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, pre_grasp_posture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_posture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, grasp_posture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, grasp_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, grasp_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pre_grasp_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, pre_grasp_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "post_grasp_retreat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, post_grasp_retreat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "post_place_retreat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, post_place_retreat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_contact_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, max_contact_force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allowed_touch_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__Grasp, allowed_touch_objects),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__size_function__Grasp__allowed_touch_objects,  // size() function pointer
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__get_const_function__Grasp__allowed_touch_objects,  // get_const(index) function pointer
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__get_function__Grasp__allowed_touch_objects,  // get(index) function pointer
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__fetch_function__Grasp__allowed_touch_objects,  // fetch(index, &value) function pointer
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__assign_function__Grasp__allowed_touch_objects,  // assign(index, value) function pointer
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__resize_function__Grasp__allowed_touch_objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_members = {
  "moveit_msgs__msg",  // message namespace
  "Grasp",  // message name
  10,  // number of fields
  sizeof(moveit_msgs__msg__Grasp),
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_member_array,  // message members
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_type_support_handle = {
  0,
  &moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)() {
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, GripperTranslation)();
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, GripperTranslation)();
  moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, GripperTranslation)();
  if (!moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__Grasp__rosidl_typesupport_introspection_c__Grasp_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
