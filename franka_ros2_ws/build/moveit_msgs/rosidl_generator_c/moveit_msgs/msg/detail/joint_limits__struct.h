// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointLimits in the package moveit_msgs.
/**
  * This message contains information about limits of a particular joint (or control dimension)
 */
typedef struct moveit_msgs__msg__JointLimits
{
  rosidl_runtime_c__String joint_name;
  /// true if the joint has position limits
  bool has_position_limits;
  /// min and max position limits
  double min_position;
  double max_position;
  /// true if joint has velocity limits
  bool has_velocity_limits;
  /// max velocity limit
  double max_velocity;
  /// min_velocity is assumed to be -max_velocity
  /// true if joint has acceleration limits
  bool has_acceleration_limits;
  /// max acceleration limit
  double max_acceleration;
  /// min_acceleration is assumed to be -max_acceleration
  /// true if joint has jerk limits
  bool has_jerk_limits;
  /// max jerk limit
  double max_jerk;
} moveit_msgs__msg__JointLimits;

// Struct for a sequence of moveit_msgs__msg__JointLimits.
typedef struct moveit_msgs__msg__JointLimits__Sequence
{
  moveit_msgs__msg__JointLimits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__JointLimits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_H_
