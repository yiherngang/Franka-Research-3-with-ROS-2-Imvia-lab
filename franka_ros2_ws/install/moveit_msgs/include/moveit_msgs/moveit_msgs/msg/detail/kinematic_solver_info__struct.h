// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/KinematicSolverInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
// Member 'link_names'
#include "rosidl_runtime_c/string.h"
// Member 'limits'
#include "moveit_msgs/msg/detail/joint_limits__struct.h"

/// Struct defined in msg/KinematicSolverInfo in the package moveit_msgs.
/**
  * A list of joints in the kinematic tree
 */
typedef struct moveit_msgs__msg__KinematicSolverInfo
{
  rosidl_runtime_c__String__Sequence joint_names;
  /// A list of joint limits corresponding to the joint names
  moveit_msgs__msg__JointLimits__Sequence limits;
  /// A list of links that the kinematics node provides solutions for
  rosidl_runtime_c__String__Sequence link_names;
} moveit_msgs__msg__KinematicSolverInfo;

// Struct for a sequence of moveit_msgs__msg__KinematicSolverInfo.
typedef struct moveit_msgs__msg__KinematicSolverInfo__Sequence
{
  moveit_msgs__msg__KinematicSolverInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__KinematicSolverInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__KINEMATIC_SOLVER_INFO__STRUCT_H_
