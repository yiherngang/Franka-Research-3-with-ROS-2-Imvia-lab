// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:msg/GraspEpsilon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/msg/detail/grasp_epsilon__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/msg/detail/grasp_epsilon__functions.h"
#include "franka_msgs/msg/detail/grasp_epsilon__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__msg__GraspEpsilon__init(message_memory);
}

void franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_fini_function(void * message_memory)
{
  franka_msgs__msg__GraspEpsilon__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_message_member_array[2] = {
  {
    "inner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__GraspEpsilon, inner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "outer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__GraspEpsilon, outer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_message_members = {
  "franka_msgs__msg",  // message namespace
  "GraspEpsilon",  // message name
  2,  // number of fields
  sizeof(franka_msgs__msg__GraspEpsilon),
  franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_message_member_array,  // message members
  franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_message_type_support_handle = {
  0,
  &franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, GraspEpsilon)() {
  if (!franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_message_type_support_handle.typesupport_identifier) {
    franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_msgs__msg__GraspEpsilon__rosidl_typesupport_introspection_c__GraspEpsilon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
