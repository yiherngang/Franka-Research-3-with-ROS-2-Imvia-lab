// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/GenericTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__STRUCT_H_

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
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'cartesian_trajectory'
#include "moveit_msgs/msg/detail/cartesian_trajectory__struct.h"

/// Struct defined in msg/GenericTrajectory in the package moveit_msgs.
/**
  * A generic trajectory message that may either encode a joint- or cartesian-space trajectory, or both
  * Trajectories encoded in this message are considered semantically equivalent
 */
typedef struct moveit_msgs__msg__GenericTrajectory
{
  std_msgs__msg__Header header;
  trajectory_msgs__msg__JointTrajectory__Sequence joint_trajectory;
  moveit_msgs__msg__CartesianTrajectory__Sequence cartesian_trajectory;
} moveit_msgs__msg__GenericTrajectory;

// Struct for a sequence of moveit_msgs__msg__GenericTrajectory.
typedef struct moveit_msgs__msg__GenericTrajectory__Sequence
{
  moveit_msgs__msg__GenericTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__GenericTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__STRUCT_H_
