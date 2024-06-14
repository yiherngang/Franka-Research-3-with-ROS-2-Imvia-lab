// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PositionConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__STRUCT_H_

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
// Member 'link_name'
#include "rosidl_runtime_c/string.h"
// Member 'target_point_offset'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'constraint_region'
#include "moveit_msgs/msg/detail/bounding_volume__struct.h"

/// Struct defined in msg/PositionConstraint in the package moveit_msgs.
/**
  * This message contains the definition of a position constraint.
 */
typedef struct moveit_msgs__msg__PositionConstraint
{
  std_msgs__msg__Header header;
  /// The robot link this constraint refers to
  rosidl_runtime_c__String link_name;
  /// The offset (in the link frame) for the target point on the link we are planning for
  geometry_msgs__msg__Vector3 target_point_offset;
  /// The volume this constraint refers to
  moveit_msgs__msg__BoundingVolume constraint_region;
  /// A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)
  double weight;
} moveit_msgs__msg__PositionConstraint;

// Struct for a sequence of moveit_msgs__msg__PositionConstraint.
typedef struct moveit_msgs__msg__PositionConstraint__Sequence
{
  moveit_msgs__msg__PositionConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PositionConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__STRUCT_H_
