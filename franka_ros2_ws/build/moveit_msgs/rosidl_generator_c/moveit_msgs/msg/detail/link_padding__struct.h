// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/LinkPadding.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__STRUCT_H_

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

/// Struct defined in msg/LinkPadding in the package moveit_msgs.
/**
  * name for the link
 */
typedef struct moveit_msgs__msg__LinkPadding
{
  rosidl_runtime_c__String link_name;
  /// padding to apply to the link
  double padding;
} moveit_msgs__msg__LinkPadding;

// Struct for a sequence of moveit_msgs__msg__LinkPadding.
typedef struct moveit_msgs__msg__LinkPadding__Sequence
{
  moveit_msgs__msg__LinkPadding * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__LinkPadding__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__STRUCT_H_
