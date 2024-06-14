// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlannerInterfaceDescription.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'pipeline_id'
// Member 'planner_ids'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PlannerInterfaceDescription in the package moveit_msgs.
/**
  * The name of the planner interface
 */
typedef struct moveit_msgs__msg__PlannerInterfaceDescription
{
  rosidl_runtime_c__String name;
  /// The name of the planning pipeline
  rosidl_runtime_c__String pipeline_id;
  /// The names of the planner ids within the interface
  rosidl_runtime_c__String__Sequence planner_ids;
} moveit_msgs__msg__PlannerInterfaceDescription;

// Struct for a sequence of moveit_msgs__msg__PlannerInterfaceDescription.
typedef struct moveit_msgs__msg__PlannerInterfaceDescription__Sequence
{
  moveit_msgs__msg__PlannerInterfaceDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlannerInterfaceDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNER_INTERFACE_DESCRIPTION__STRUCT_H_
