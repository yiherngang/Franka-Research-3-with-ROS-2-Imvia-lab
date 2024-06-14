// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/ApplyPlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'scene'
#include "moveit_msgs/msg/detail/planning_scene__struct.h"

/// Struct defined in srv/ApplyPlanningScene in the package moveit_msgs.
typedef struct moveit_msgs__srv__ApplyPlanningScene_Request
{
  moveit_msgs__msg__PlanningScene scene;
} moveit_msgs__srv__ApplyPlanningScene_Request;

// Struct for a sequence of moveit_msgs__srv__ApplyPlanningScene_Request.
typedef struct moveit_msgs__srv__ApplyPlanningScene_Request__Sequence
{
  moveit_msgs__srv__ApplyPlanningScene_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__ApplyPlanningScene_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ApplyPlanningScene in the package moveit_msgs.
typedef struct moveit_msgs__srv__ApplyPlanningScene_Response
{
  bool success;
} moveit_msgs__srv__ApplyPlanningScene_Response;

// Struct for a sequence of moveit_msgs__srv__ApplyPlanningScene_Response.
typedef struct moveit_msgs__srv__ApplyPlanningScene_Response__Sequence
{
  moveit_msgs__srv__ApplyPlanningScene_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__ApplyPlanningScene_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__APPLY_PLANNING_SCENE__STRUCT_H_
