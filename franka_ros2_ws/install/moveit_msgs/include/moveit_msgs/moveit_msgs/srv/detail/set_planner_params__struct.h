// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/SetPlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pipeline_id'
// Member 'planner_config'
// Member 'group'
#include "rosidl_runtime_c/string.h"
// Member 'params'
#include "moveit_msgs/msg/detail/planner_params__struct.h"

/// Struct defined in srv/SetPlannerParams in the package moveit_msgs.
typedef struct moveit_msgs__srv__SetPlannerParams_Request
{
  rosidl_runtime_c__String pipeline_id;
  /// Name of planning config
  rosidl_runtime_c__String planner_config;
  /// Optional name of planning group (set global defaults if empty)
  rosidl_runtime_c__String group;
  /// parameters as key-value pairs
  moveit_msgs__msg__PlannerParams params;
  /// replace params or augment existing ones?
  bool replace;
} moveit_msgs__srv__SetPlannerParams_Request;

// Struct for a sequence of moveit_msgs__srv__SetPlannerParams_Request.
typedef struct moveit_msgs__srv__SetPlannerParams_Request__Sequence
{
  moveit_msgs__srv__SetPlannerParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__SetPlannerParams_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetPlannerParams in the package moveit_msgs.
typedef struct moveit_msgs__srv__SetPlannerParams_Response
{
  uint8_t structure_needs_at_least_one_member;
} moveit_msgs__srv__SetPlannerParams_Response;

// Struct for a sequence of moveit_msgs__srv__SetPlannerParams_Response.
typedef struct moveit_msgs__srv__SetPlannerParams_Response__Sequence
{
  moveit_msgs__srv__SetPlannerParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__SetPlannerParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__STRUCT_H_
