// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'enabled'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AllowedCollisionEntry in the package moveit_msgs.
/**
  * whether or not collision checking is enabled
 */
typedef struct moveit_msgs__msg__AllowedCollisionEntry
{
  rosidl_runtime_c__boolean__Sequence enabled;
} moveit_msgs__msg__AllowedCollisionEntry;

// Struct for a sequence of moveit_msgs__msg__AllowedCollisionEntry.
typedef struct moveit_msgs__msg__AllowedCollisionEntry__Sequence
{
  moveit_msgs__msg__AllowedCollisionEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__AllowedCollisionEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_H_
