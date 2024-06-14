// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:action/HybridPlanner.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__HYBRID_PLANNER__STRUCT_H_
#define MOVEIT_MSGS__ACTION__DETAIL__HYBRID_PLANNER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'planning_group'
#include "rosidl_runtime_c/string.h"
// Member 'motion_sequence'
#include "moveit_msgs/msg/detail/motion_sequence_request__struct.h"

/// Struct defined in action/HybridPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__HybridPlanner_Goal
{
  rosidl_runtime_c__String planning_group;
  moveit_msgs__msg__MotionSequenceRequest motion_sequence;
} moveit_msgs__action__HybridPlanner_Goal;

// Struct for a sequence of moveit_msgs__action__HybridPlanner_Goal.
typedef struct moveit_msgs__action__HybridPlanner_Goal__Sequence
{
  moveit_msgs__action__HybridPlanner_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__HybridPlanner_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/HybridPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__HybridPlanner_Result
{
  moveit_msgs__msg__MoveItErrorCodes error_code;
  /// Error message with more detailed information about the hybrid planning result
  rosidl_runtime_c__String error_message;
} moveit_msgs__action__HybridPlanner_Result;

// Struct for a sequence of moveit_msgs__action__HybridPlanner_Result.
typedef struct moveit_msgs__action__HybridPlanner_Result__Sequence
{
  moveit_msgs__action__HybridPlanner_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__HybridPlanner_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/HybridPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__HybridPlanner_Feedback
{
  rosidl_runtime_c__String feedback;
} moveit_msgs__action__HybridPlanner_Feedback;

// Struct for a sequence of moveit_msgs__action__HybridPlanner_Feedback.
typedef struct moveit_msgs__action__HybridPlanner_Feedback__Sequence
{
  moveit_msgs__action__HybridPlanner_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__HybridPlanner_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_msgs/action/detail/hybrid_planner__struct.h"

/// Struct defined in action/HybridPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__HybridPlanner_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__HybridPlanner_Goal goal;
} moveit_msgs__action__HybridPlanner_SendGoal_Request;

// Struct for a sequence of moveit_msgs__action__HybridPlanner_SendGoal_Request.
typedef struct moveit_msgs__action__HybridPlanner_SendGoal_Request__Sequence
{
  moveit_msgs__action__HybridPlanner_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__HybridPlanner_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/HybridPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__HybridPlanner_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_msgs__action__HybridPlanner_SendGoal_Response;

// Struct for a sequence of moveit_msgs__action__HybridPlanner_SendGoal_Response.
typedef struct moveit_msgs__action__HybridPlanner_SendGoal_Response__Sequence
{
  moveit_msgs__action__HybridPlanner_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__HybridPlanner_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/HybridPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__HybridPlanner_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_msgs__action__HybridPlanner_GetResult_Request;

// Struct for a sequence of moveit_msgs__action__HybridPlanner_GetResult_Request.
typedef struct moveit_msgs__action__HybridPlanner_GetResult_Request__Sequence
{
  moveit_msgs__action__HybridPlanner_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__HybridPlanner_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"

/// Struct defined in action/HybridPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__HybridPlanner_GetResult_Response
{
  int8_t status;
  moveit_msgs__action__HybridPlanner_Result result;
} moveit_msgs__action__HybridPlanner_GetResult_Response;

// Struct for a sequence of moveit_msgs__action__HybridPlanner_GetResult_Response.
typedef struct moveit_msgs__action__HybridPlanner_GetResult_Response__Sequence
{
  moveit_msgs__action__HybridPlanner_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__HybridPlanner_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.h"

/// Struct defined in action/HybridPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__HybridPlanner_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__HybridPlanner_Feedback feedback;
} moveit_msgs__action__HybridPlanner_FeedbackMessage;

// Struct for a sequence of moveit_msgs__action__HybridPlanner_FeedbackMessage.
typedef struct moveit_msgs__action__HybridPlanner_FeedbackMessage__Sequence
{
  moveit_msgs__action__HybridPlanner_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__HybridPlanner_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__HYBRID_PLANNER__STRUCT_H_
