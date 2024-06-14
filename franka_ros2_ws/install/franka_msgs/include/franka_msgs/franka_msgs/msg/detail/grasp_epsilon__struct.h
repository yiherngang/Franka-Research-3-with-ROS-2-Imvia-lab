// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:msg/GraspEpsilon.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__STRUCT_H_
#define FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GraspEpsilon in the package franka_msgs.
/**
  * Maximum tolerated deviation when the actual grasped width
  * is smaller than the commanded grasp width. Unit:
 */
typedef struct franka_msgs__msg__GraspEpsilon
{
  double inner;
  /// Maximum tolerated deviation when the actual grasped width
  /// is larger than the commanded grasp width. Unit:
  double outer;
} franka_msgs__msg__GraspEpsilon;

// Struct for a sequence of franka_msgs__msg__GraspEpsilon.
typedef struct franka_msgs__msg__GraspEpsilon__Sequence
{
  franka_msgs__msg__GraspEpsilon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__msg__GraspEpsilon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__STRUCT_H_
