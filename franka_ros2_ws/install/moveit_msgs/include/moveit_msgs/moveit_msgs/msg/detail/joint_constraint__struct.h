// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/JointConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__STRUCT_H_

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

/// Struct defined in msg/JointConstraint in the package moveit_msgs.
/**
  * Constrain the position of a joint to be within a certain bound
 */
typedef struct moveit_msgs__msg__JointConstraint
{
  rosidl_runtime_c__String joint_name;
  /// the bound to be achieved is [position - tolerance_below, position + tolerance_above]
  double position;
  double tolerance_above;
  double tolerance_below;
  /// A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)
  double weight;
} moveit_msgs__msg__JointConstraint;

// Struct for a sequence of moveit_msgs__msg__JointConstraint.
typedef struct moveit_msgs__msg__JointConstraint__Sequence
{
  moveit_msgs__msg__JointConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__JointConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__STRUCT_H_
