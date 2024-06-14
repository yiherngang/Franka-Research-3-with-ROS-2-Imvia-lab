// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/MotionPlanResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'group_name'
#include "rosidl_runtime_c/string.h"
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

/// Struct defined in msg/MotionPlanResponse in the package moveit_msgs.
/**
  * The representation of a solution to a planning problem
 */
typedef struct moveit_msgs__msg__MotionPlanResponse
{
  /// The corresponding robot state
  moveit_msgs__msg__RobotState trajectory_start;
  /// The group used for planning (usually the same as in the request)
  rosidl_runtime_c__String group_name;
  /// A solution trajectory, if found
  moveit_msgs__msg__RobotTrajectory trajectory;
  /// Planning time (seconds)
  double planning_time;
  /// Error code - encodes the overall reason for failure
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__msg__MotionPlanResponse;

// Struct for a sequence of moveit_msgs__msg__MotionPlanResponse.
typedef struct moveit_msgs__msg__MotionPlanResponse__Sequence
{
  moveit_msgs__msg__MotionPlanResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__MotionPlanResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_RESPONSE__STRUCT_H_
