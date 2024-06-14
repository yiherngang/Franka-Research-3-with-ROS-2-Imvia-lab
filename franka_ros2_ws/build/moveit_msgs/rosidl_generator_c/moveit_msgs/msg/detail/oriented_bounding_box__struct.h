// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/OrientedBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__STRUCT_H_

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
// Member 'extents'
#include "geometry_msgs/msg/detail/point32__struct.h"

/// Struct defined in msg/OrientedBoundingBox in the package moveit_msgs.
/**
  * the pose of the box
 */
typedef struct moveit_msgs__msg__OrientedBoundingBox
{
  geometry_msgs__msg__Pose pose;
  /// the extents of the box, assuming the center is at the origin
  geometry_msgs__msg__Point32 extents;
} moveit_msgs__msg__OrientedBoundingBox;

// Struct for a sequence of moveit_msgs__msg__OrientedBoundingBox.
typedef struct moveit_msgs__msg__OrientedBoundingBox__Sequence
{
  moveit_msgs__msg__OrientedBoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__OrientedBoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__STRUCT_H_
