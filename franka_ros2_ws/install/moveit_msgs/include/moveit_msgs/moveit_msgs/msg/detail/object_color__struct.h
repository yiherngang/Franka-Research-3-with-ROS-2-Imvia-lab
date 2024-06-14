// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/ObjectColor in the package moveit_msgs.
/**
  * The object id for which we specify color
 */
typedef struct moveit_msgs__msg__ObjectColor
{
  rosidl_runtime_c__String id;
  /// The value of the color
  std_msgs__msg__ColorRGBA color;
} moveit_msgs__msg__ObjectColor;

// Struct for a sequence of moveit_msgs__msg__ObjectColor.
typedef struct moveit_msgs__msg__ObjectColor__Sequence
{
  moveit_msgs__msg__ObjectColor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__ObjectColor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__OBJECT_COLOR__STRUCT_H_
