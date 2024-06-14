// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/GripperTranslation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3_stamped__struct.h"

/// Struct defined in msg/GripperTranslation in the package moveit_msgs.
/**
  * defines a translation for the gripper, used in pickup or place tasks
  * for example for lifting an object off a table or approaching the table for placing
 */
typedef struct moveit_msgs__msg__GripperTranslation
{
  /// the direction of the translation
  geometry_msgs__msg__Vector3Stamped direction;
  /// the desired translation distance
  float desired_distance;
  /// the min distance that must be considered feasible before the
  /// grasp is even attempted
  float min_distance;
} moveit_msgs__msg__GripperTranslation;

// Struct for a sequence of moveit_msgs__msg__GripperTranslation.
typedef struct moveit_msgs__msg__GripperTranslation__Sequence
{
  moveit_msgs__msg__GripperTranslation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__GripperTranslation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__STRUCT_H_
