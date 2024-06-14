// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:action/MoveGroup.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__STRUCT_H_
#define MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_plan_request__struct.h"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__struct.h"

/// Struct defined in action/MoveGroup in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroup_Goal
{
  moveit_msgs__msg__MotionPlanRequest request;
  /// Planning options
  moveit_msgs__msg__PlanningOptions planning_options;
} moveit_msgs__action__MoveGroup_Goal;

// Struct for a sequence of moveit_msgs__action__MoveGroup_Goal.
typedef struct moveit_msgs__action__MoveGroup_Goal__Sequence
{
  moveit_msgs__action__MoveGroup_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroup_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'planned_trajectory'
// Member 'executed_trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

/// Struct defined in action/MoveGroup in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroup_Result
{
  /// An error code reflecting what went wrong
  moveit_msgs__msg__MoveItErrorCodes error_code;
  /// The full starting state of the robot at the start of the trajectory
  moveit_msgs__msg__RobotState trajectory_start;
  /// The trajectory that moved group produced for execution
  moveit_msgs__msg__RobotTrajectory planned_trajectory;
  /// The trace of the trajectory recorded during execution
  moveit_msgs__msg__RobotTrajectory executed_trajectory;
  /// The amount of time it took to complete the motion plan
  double planning_time;
} moveit_msgs__action__MoveGroup_Result;

// Struct for a sequence of moveit_msgs__action__MoveGroup_Result.
typedef struct moveit_msgs__action__MoveGroup_Result__Sequence
{
  moveit_msgs__action__MoveGroup_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroup_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveGroup in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroup_Feedback
{
  /// The internal state that the move group action currently is in
  rosidl_runtime_c__String state;
} moveit_msgs__action__MoveGroup_Feedback;

// Struct for a sequence of moveit_msgs__action__MoveGroup_Feedback.
typedef struct moveit_msgs__action__MoveGroup_Feedback__Sequence
{
  moveit_msgs__action__MoveGroup_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroup_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_msgs/action/detail/move_group__struct.h"

/// Struct defined in action/MoveGroup in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroup_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__MoveGroup_Goal goal;
} moveit_msgs__action__MoveGroup_SendGoal_Request;

// Struct for a sequence of moveit_msgs__action__MoveGroup_SendGoal_Request.
typedef struct moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence
{
  moveit_msgs__action__MoveGroup_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroup_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveGroup in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroup_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_msgs__action__MoveGroup_SendGoal_Response;

// Struct for a sequence of moveit_msgs__action__MoveGroup_SendGoal_Response.
typedef struct moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence
{
  moveit_msgs__action__MoveGroup_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroup_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveGroup in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroup_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_msgs__action__MoveGroup_GetResult_Request;

// Struct for a sequence of moveit_msgs__action__MoveGroup_GetResult_Request.
typedef struct moveit_msgs__action__MoveGroup_GetResult_Request__Sequence
{
  moveit_msgs__action__MoveGroup_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroup_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/move_group__struct.h"

/// Struct defined in action/MoveGroup in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroup_GetResult_Response
{
  int8_t status;
  moveit_msgs__action__MoveGroup_Result result;
} moveit_msgs__action__MoveGroup_GetResult_Response;

// Struct for a sequence of moveit_msgs__action__MoveGroup_GetResult_Response.
typedef struct moveit_msgs__action__MoveGroup_GetResult_Response__Sequence
{
  moveit_msgs__action__MoveGroup_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroup_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/move_group__struct.h"

/// Struct defined in action/MoveGroup in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroup_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__MoveGroup_Feedback feedback;
} moveit_msgs__action__MoveGroup_FeedbackMessage;

// Struct for a sequence of moveit_msgs__action__MoveGroup_FeedbackMessage.
typedef struct moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence
{
  moveit_msgs__action__MoveGroup_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroup_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__STRUCT_H_
