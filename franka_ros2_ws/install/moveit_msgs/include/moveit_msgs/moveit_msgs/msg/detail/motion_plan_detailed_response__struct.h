// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/MotionPlanDetailedResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__STRUCT_H_

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
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
// Member 'processing_time'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

/// Struct defined in msg/MotionPlanDetailedResponse in the package moveit_msgs.
/**
  * The representation of a solution to a planning problem, including intermediate data
 */
typedef struct moveit_msgs__msg__MotionPlanDetailedResponse
{
  /// The starting state considered for the robot solution path
  moveit_msgs__msg__RobotState trajectory_start;
  /// The group used for planning (usually the same as in the request)
  rosidl_runtime_c__String group_name;
  /// Multiple solution paths are reported, each reflecting intermediate steps in the trajectory processing
  /// The list of reported trajectories
  moveit_msgs__msg__RobotTrajectory__Sequence trajectory;
  /// Description of the reported trajectories (name of processing step)
  rosidl_runtime_c__String__Sequence description;
  /// The amount of time spent computing a particular step in motion plan computation
  rosidl_runtime_c__double__Sequence processing_time;
  /// Status at the end of this plan
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__msg__MotionPlanDetailedResponse;

// Struct for a sequence of moveit_msgs__msg__MotionPlanDetailedResponse.
typedef struct moveit_msgs__msg__MotionPlanDetailedResponse__Sequence
{
  moveit_msgs__msg__MotionPlanDetailedResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__MotionPlanDetailedResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_DETAILED_RESPONSE__STRUCT_H_
