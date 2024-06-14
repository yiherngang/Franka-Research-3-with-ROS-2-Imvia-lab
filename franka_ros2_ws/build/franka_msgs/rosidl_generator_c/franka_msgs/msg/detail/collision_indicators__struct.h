// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__STRUCT_H_
#define FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'is_cartesian_linear_collision'
// Member 'is_cartesian_angular_collision'
// Member 'is_cartesian_linear_contact'
// Member 'is_cartesian_angular_contact'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/CollisionIndicators in the package franka_msgs.
/**
  * Indicates which dimensions have an active contact/collision flag raised
 */
typedef struct franka_msgs__msg__CollisionIndicators
{
  geometry_msgs__msg__Vector3 is_cartesian_linear_collision;
  geometry_msgs__msg__Vector3 is_cartesian_angular_collision;
  geometry_msgs__msg__Vector3 is_cartesian_linear_contact;
  geometry_msgs__msg__Vector3 is_cartesian_angular_contact;
  double is_joint_collision[7];
  double is_joint_contact[7];
} franka_msgs__msg__CollisionIndicators;

// Struct for a sequence of franka_msgs__msg__CollisionIndicators.
typedef struct franka_msgs__msg__CollisionIndicators__Sequence
{
  franka_msgs__msg__CollisionIndicators * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__msg__CollisionIndicators__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__STRUCT_H_
