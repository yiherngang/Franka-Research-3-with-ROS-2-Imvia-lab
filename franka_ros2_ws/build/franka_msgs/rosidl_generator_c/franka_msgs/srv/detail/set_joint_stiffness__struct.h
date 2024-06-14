// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:srv/SetJointStiffness.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_JOINT_STIFFNESS__STRUCT_H_
#define FRANKA_MSGS__SRV__DETAIL__SET_JOINT_STIFFNESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetJointStiffness in the package franka_msgs.
typedef struct franka_msgs__srv__SetJointStiffness_Request
{
  double joint_stiffness[7];
} franka_msgs__srv__SetJointStiffness_Request;

// Struct for a sequence of franka_msgs__srv__SetJointStiffness_Request.
typedef struct franka_msgs__srv__SetJointStiffness_Request__Sequence
{
  franka_msgs__srv__SetJointStiffness_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__srv__SetJointStiffness_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetJointStiffness in the package franka_msgs.
typedef struct franka_msgs__srv__SetJointStiffness_Response
{
  bool success;
  rosidl_runtime_c__String error;
} franka_msgs__srv__SetJointStiffness_Response;

// Struct for a sequence of franka_msgs__srv__SetJointStiffness_Response.
typedef struct franka_msgs__srv__SetJointStiffness_Response__Sequence
{
  franka_msgs__srv__SetJointStiffness_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__srv__SetJointStiffness_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_JOINT_STIFFNESS__STRUCT_H_
