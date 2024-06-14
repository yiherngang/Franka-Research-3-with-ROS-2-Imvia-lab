// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'keys'
// Member 'values'
// Member 'descriptions'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PlannerParams in the package moveit_msgs.
/**
  * parameter names (same size as values)
 */
typedef struct moveit_msgs__msg__PlannerParams
{
  rosidl_runtime_c__String__Sequence keys;
  /// parameter values (same size as keys)
  rosidl_runtime_c__String__Sequence values;
  /// parameter description (can be empty)
  rosidl_runtime_c__String__Sequence descriptions;
} moveit_msgs__msg__PlannerParams;

// Struct for a sequence of moveit_msgs__msg__PlannerParams.
typedef struct moveit_msgs__msg__PlannerParams__Sequence
{
  moveit_msgs__msg__PlannerParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlannerParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNER_PARAMS__STRUCT_H_
