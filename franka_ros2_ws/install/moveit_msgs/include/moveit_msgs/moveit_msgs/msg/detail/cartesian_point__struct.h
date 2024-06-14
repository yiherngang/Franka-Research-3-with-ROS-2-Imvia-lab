// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__struct.h"

/// Struct defined in msg/CartesianPoint in the package moveit_msgs.
/**
  * This message defines a point in a cartesian trajectory
 */
typedef struct moveit_msgs__msg__CartesianPoint
{
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist velocity;
  geometry_msgs__msg__Accel acceleration;
} moveit_msgs__msg__CartesianPoint;

// Struct for a sequence of moveit_msgs__msg__CartesianPoint.
typedef struct moveit_msgs__msg__CartesianPoint__Sequence
{
  moveit_msgs__msg__CartesianPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__CartesianPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_H_
