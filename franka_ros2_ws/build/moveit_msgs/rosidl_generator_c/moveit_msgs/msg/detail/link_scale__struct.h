// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/LinkScale.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LinkScale in the package moveit_msgs.
/**
  * name for the link
 */
typedef struct moveit_msgs__msg__LinkScale
{
  rosidl_runtime_c__String link_name;
  /// scaling to apply to the link
  double scale;
} moveit_msgs__msg__LinkScale;

// Struct for a sequence of moveit_msgs__msg__LinkScale.
typedef struct moveit_msgs__msg__LinkScale__Sequence
{
  moveit_msgs__msg__LinkScale * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__LinkScale__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__LINK_SCALE__STRUCT_H_
