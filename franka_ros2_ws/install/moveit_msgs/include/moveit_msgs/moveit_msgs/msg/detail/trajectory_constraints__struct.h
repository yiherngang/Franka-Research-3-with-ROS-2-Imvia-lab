// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/TrajectoryConstraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"

/// Struct defined in msg/TrajectoryConstraints in the package moveit_msgs.
/**
  * The array of constraints to consider along the trajectory
 */
typedef struct moveit_msgs__msg__TrajectoryConstraints
{
  moveit_msgs__msg__Constraints__Sequence constraints;
} moveit_msgs__msg__TrajectoryConstraints;

// Struct for a sequence of moveit_msgs__msg__TrajectoryConstraints.
typedef struct moveit_msgs__msg__TrajectoryConstraints__Sequence
{
  moveit_msgs__msg__TrajectoryConstraints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__TrajectoryConstraints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__STRUCT_H_
