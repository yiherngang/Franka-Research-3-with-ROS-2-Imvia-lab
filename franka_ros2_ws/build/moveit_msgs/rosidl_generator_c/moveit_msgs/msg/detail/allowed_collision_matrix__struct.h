// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entry_names'
// Member 'default_entry_names'
#include "rosidl_runtime_c/string.h"
// Member 'entry_values'
#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.h"
// Member 'default_entry_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AllowedCollisionMatrix in the package moveit_msgs.
/**
  * The list of entry names in the matrix
 */
typedef struct moveit_msgs__msg__AllowedCollisionMatrix
{
  rosidl_runtime_c__String__Sequence entry_names;
  /// The individual entries in the allowed collision matrix
  /// square, symmetric, with same order as entry_names
  moveit_msgs__msg__AllowedCollisionEntry__Sequence entry_values;
  /// In addition to the collision matrix itself, we also have
  /// the default entry value for each entry name.
  /// If the allowed collision flag is queried for a pair of names (n1, n2)
  /// that is not found in the collision matrix itself, the value of
  /// the collision flag is considered to be that of the entry (n1 or n2)
  /// specified in the list below. If both n1 and n2 are found in the list
  /// of defaults, the result is computed with an AND operation
  rosidl_runtime_c__String__Sequence default_entry_names;
  rosidl_runtime_c__boolean__Sequence default_entry_values;
} moveit_msgs__msg__AllowedCollisionMatrix;

// Struct for a sequence of moveit_msgs__msg__AllowedCollisionMatrix.
typedef struct moveit_msgs__msg__AllowedCollisionMatrix__Sequence
{
  moveit_msgs__msg__AllowedCollisionMatrix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__AllowedCollisionMatrix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_H_
