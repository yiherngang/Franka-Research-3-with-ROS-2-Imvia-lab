// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GetMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motion_plan_request'
#include "moveit_msgs/msg/detail/motion_plan_request__struct.h"

/// Struct defined in srv/GetMotionPlan in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetMotionPlan_Request
{
  moveit_msgs__msg__MotionPlanRequest motion_plan_request;
} moveit_msgs__srv__GetMotionPlan_Request;

// Struct for a sequence of moveit_msgs__srv__GetMotionPlan_Request.
typedef struct moveit_msgs__srv__GetMotionPlan_Request__Sequence
{
  moveit_msgs__srv__GetMotionPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetMotionPlan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'motion_plan_response'
#include "moveit_msgs/msg/detail/motion_plan_response__struct.h"

/// Struct defined in srv/GetMotionPlan in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetMotionPlan_Response
{
  moveit_msgs__msg__MotionPlanResponse motion_plan_response;
} moveit_msgs__srv__GetMotionPlan_Response;

// Struct for a sequence of moveit_msgs__srv__GetMotionPlan_Response.
typedef struct moveit_msgs__srv__GetMotionPlan_Response__Sequence
{
  moveit_msgs__srv__GetMotionPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetMotionPlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_PLAN__STRUCT_H_
