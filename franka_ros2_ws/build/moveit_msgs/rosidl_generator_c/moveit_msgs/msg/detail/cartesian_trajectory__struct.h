// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'tracked_frame'
#include "rosidl_runtime_c/string.h"
// Member 'points'
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__struct.h"

/// Struct defined in msg/CartesianTrajectory in the package moveit_msgs.
/**
  * This message describes the trajectory of a tracked frame in task-space
 */
typedef struct moveit_msgs__msg__CartesianTrajectory
{
  std_msgs__msg__Header header;
  /// The name of the Cartesian frame being tracked with respect to the base frame provided in header.frame_id
  rosidl_runtime_c__String tracked_frame;
  moveit_msgs__msg__CartesianTrajectoryPoint__Sequence points;
} moveit_msgs__msg__CartesianTrajectory;

// Struct for a sequence of moveit_msgs__msg__CartesianTrajectory.
typedef struct moveit_msgs__msg__CartesianTrajectory__Sequence
{
  moveit_msgs__msg__CartesianTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__CartesianTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_
