// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/MotionSequenceResponse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'sequence_start'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'planned_trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

/// Struct defined in msg/MotionSequenceResponse in the package moveit_msgs.
/**
  * An error code reflecting what went wrong
 */
typedef struct moveit_msgs__msg__MotionSequenceResponse
{
  moveit_msgs__msg__MoveItErrorCodes error_code;
  /// The full starting state of the robot at the start of the sequence
  moveit_msgs__msg__RobotState sequence_start;
  /// The trajectories that the planner produced for execution
  moveit_msgs__msg__RobotTrajectory__Sequence planned_trajectories;
  /// The amount of time it took to complete the motion plan
  double planning_time;
} moveit_msgs__msg__MotionSequenceResponse;

// Struct for a sequence of moveit_msgs__msg__MotionSequenceResponse.
typedef struct moveit_msgs__msg__MotionSequenceResponse__Sequence
{
  moveit_msgs__msg__MotionSequenceResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__MotionSequenceResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_RESPONSE__STRUCT_H_
