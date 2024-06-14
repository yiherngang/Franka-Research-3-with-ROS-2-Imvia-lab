// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "moveit_msgs/msg/detail/cartesian_point__struct.h"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/CartesianTrajectoryPoint in the package moveit_msgs.
/**
  * The definition of a cartesian point in a trajectory. Defines the cartesian state of the point and it's time,
  * following the pattern of the JointTrajectory message
 */
typedef struct moveit_msgs__msg__CartesianTrajectoryPoint
{
  moveit_msgs__msg__CartesianPoint point;
  builtin_interfaces__msg__Duration time_from_start;
} moveit_msgs__msg__CartesianTrajectoryPoint;

// Struct for a sequence of moveit_msgs__msg__CartesianTrajectoryPoint.
typedef struct moveit_msgs__msg__CartesianTrajectoryPoint__Sequence
{
  moveit_msgs__msg__CartesianTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__CartesianTrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_
