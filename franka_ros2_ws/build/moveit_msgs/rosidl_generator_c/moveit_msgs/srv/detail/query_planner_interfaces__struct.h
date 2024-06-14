// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/QueryPlannerInterfaces.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/QueryPlannerInterfaces in the package moveit_msgs.
typedef struct moveit_msgs__srv__QueryPlannerInterfaces_Request
{
  uint8_t structure_needs_at_least_one_member;
} moveit_msgs__srv__QueryPlannerInterfaces_Request;

// Struct for a sequence of moveit_msgs__srv__QueryPlannerInterfaces_Request.
typedef struct moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence
{
  moveit_msgs__srv__QueryPlannerInterfaces_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'planner_interfaces'
#include "moveit_msgs/msg/detail/planner_interface_description__struct.h"

/// Struct defined in srv/QueryPlannerInterfaces in the package moveit_msgs.
typedef struct moveit_msgs__srv__QueryPlannerInterfaces_Response
{
  /// The planning instances that could be used in the benchmark
  moveit_msgs__msg__PlannerInterfaceDescription__Sequence planner_interfaces;
} moveit_msgs__srv__QueryPlannerInterfaces_Response;

// Struct for a sequence of moveit_msgs__srv__QueryPlannerInterfaces_Response.
typedef struct moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence
{
  moveit_msgs__srv__QueryPlannerInterfaces_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__STRUCT_H_
