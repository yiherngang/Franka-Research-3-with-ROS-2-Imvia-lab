// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/MotionSequenceRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'items'
#include "moveit_msgs/msg/detail/motion_sequence_item__struct.h"

/// Struct defined in msg/MotionSequenceRequest in the package moveit_msgs.
/**
  * List of motion planning request with a blend_radius for each.
  * In the response of the planner all of these will be executable as one sequence.
 */
typedef struct moveit_msgs__msg__MotionSequenceRequest
{
  moveit_msgs__msg__MotionSequenceItem__Sequence items;
} moveit_msgs__msg__MotionSequenceRequest;

// Struct for a sequence of moveit_msgs__msg__MotionSequenceRequest.
typedef struct moveit_msgs__msg__MotionSequenceRequest__Sequence
{
  moveit_msgs__msg__MotionSequenceRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__MotionSequenceRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__STRUCT_H_
