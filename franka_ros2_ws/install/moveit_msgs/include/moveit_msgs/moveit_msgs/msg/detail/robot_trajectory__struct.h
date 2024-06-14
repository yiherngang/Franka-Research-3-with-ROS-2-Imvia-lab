// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'multi_dof_joint_trajectory'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__struct.h"

/// Struct defined in msg/RobotTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__msg__RobotTrajectory
{
  trajectory_msgs__msg__JointTrajectory joint_trajectory;
  trajectory_msgs__msg__MultiDOFJointTrajectory multi_dof_joint_trajectory;
} moveit_msgs__msg__RobotTrajectory;

// Struct for a sequence of moveit_msgs__msg__RobotTrajectory.
typedef struct moveit_msgs__msg__RobotTrajectory__Sequence
{
  moveit_msgs__msg__RobotTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__RobotTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__STRUCT_H_
