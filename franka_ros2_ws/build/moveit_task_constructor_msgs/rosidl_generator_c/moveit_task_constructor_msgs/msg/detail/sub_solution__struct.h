// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_task_constructor_msgs:msg/SubSolution.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_TASK_CONSTRUCTOR_MSGS__MSG__DETAIL__SUB_SOLUTION__STRUCT_H_
#define MOVEIT_TASK_CONSTRUCTOR_MSGS__MSG__DETAIL__SUB_SOLUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "moveit_task_constructor_msgs/msg/detail/solution_info__struct.h"
// Member 'sub_solution_id'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SubSolution in the package moveit_task_constructor_msgs.
/**
  * generic solution information
 */
typedef struct moveit_task_constructor_msgs__msg__SubSolution
{
  moveit_task_constructor_msgs__msg__SolutionInfo info;
  /// IDs of subsolutions
  rosidl_runtime_c__uint32__Sequence sub_solution_id;
} moveit_task_constructor_msgs__msg__SubSolution;

// Struct for a sequence of moveit_task_constructor_msgs__msg__SubSolution.
typedef struct moveit_task_constructor_msgs__msg__SubSolution__Sequence
{
  moveit_task_constructor_msgs__msg__SubSolution * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_task_constructor_msgs__msg__SubSolution__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_TASK_CONSTRUCTOR_MSGS__MSG__DETAIL__SUB_SOLUTION__STRUCT_H_
