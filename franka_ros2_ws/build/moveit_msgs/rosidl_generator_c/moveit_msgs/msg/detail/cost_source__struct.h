// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/CostSource.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'aabb_min'
// Member 'aabb_max'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/CostSource in the package moveit_msgs.
/**
  * The density of the cost source
 */
typedef struct moveit_msgs__msg__CostSource
{
  double cost_density;
  /// The volume of the cost source is represented as an
  /// axis-aligned bounding box (AABB)
  /// The AABB is specified by two of its opposite corners
  geometry_msgs__msg__Vector3 aabb_min;
  geometry_msgs__msg__Vector3 aabb_max;
} moveit_msgs__msg__CostSource;

// Struct for a sequence of moveit_msgs__msg__CostSource.
typedef struct moveit_msgs__msg__CostSource__Sequence
{
  moveit_msgs__msg__CostSource * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__CostSource__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__STRUCT_H_
