// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ELBOW__STRUCT_H_
#define FRANKA_MSGS__MSG__DETAIL__ELBOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Elbow in the package franka_msgs.
/**
  * The state of the elbow
 */
typedef struct franka_msgs__msg__Elbow
{
  double position[2];
  double desired_position[2];
  double commanded_position[2];
  double commanded_velocity[2];
  double commanded_acceleration[2];
} franka_msgs__msg__Elbow;

// Struct for a sequence of franka_msgs__msg__Elbow.
typedef struct franka_msgs__msg__Elbow__Sequence
{
  franka_msgs__msg__Elbow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__msg__Elbow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__ELBOW__STRUCT_H_
