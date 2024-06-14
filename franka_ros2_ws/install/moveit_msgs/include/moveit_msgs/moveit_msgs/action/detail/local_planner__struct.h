// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:action/LocalPlanner.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__STRUCT_H_
#define MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'local_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"

/// Struct defined in action/LocalPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__LocalPlanner_Goal
{
  moveit_msgs__msg__Constraints__Sequence local_constraints;
} moveit_msgs__action__LocalPlanner_Goal;

// Struct for a sequence of moveit_msgs__action__LocalPlanner_Goal.
typedef struct moveit_msgs__action__LocalPlanner_Goal__Sequence
{
  moveit_msgs__action__LocalPlanner_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__LocalPlanner_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/LocalPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__LocalPlanner_Result
{
  moveit_msgs__msg__MoveItErrorCodes error_code;
  /// Error message with more detailed information about the local planning result
  rosidl_runtime_c__String error_message;
} moveit_msgs__action__LocalPlanner_Result;

// Struct for a sequence of moveit_msgs__action__LocalPlanner_Result.
typedef struct moveit_msgs__action__LocalPlanner_Result__Sequence
{
  moveit_msgs__action__LocalPlanner_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__LocalPlanner_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/LocalPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__LocalPlanner_Feedback
{
  rosidl_runtime_c__String feedback;
} moveit_msgs__action__LocalPlanner_Feedback;

// Struct for a sequence of moveit_msgs__action__LocalPlanner_Feedback.
typedef struct moveit_msgs__action__LocalPlanner_Feedback__Sequence
{
  moveit_msgs__action__LocalPlanner_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__LocalPlanner_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_msgs/action/detail/local_planner__struct.h"

/// Struct defined in action/LocalPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__LocalPlanner_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__LocalPlanner_Goal goal;
} moveit_msgs__action__LocalPlanner_SendGoal_Request;

// Struct for a sequence of moveit_msgs__action__LocalPlanner_SendGoal_Request.
typedef struct moveit_msgs__action__LocalPlanner_SendGoal_Request__Sequence
{
  moveit_msgs__action__LocalPlanner_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__LocalPlanner_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LocalPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__LocalPlanner_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_msgs__action__LocalPlanner_SendGoal_Response;

// Struct for a sequence of moveit_msgs__action__LocalPlanner_SendGoal_Response.
typedef struct moveit_msgs__action__LocalPlanner_SendGoal_Response__Sequence
{
  moveit_msgs__action__LocalPlanner_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__LocalPlanner_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LocalPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__LocalPlanner_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_msgs__action__LocalPlanner_GetResult_Request;

// Struct for a sequence of moveit_msgs__action__LocalPlanner_GetResult_Request.
typedef struct moveit_msgs__action__LocalPlanner_GetResult_Request__Sequence
{
  moveit_msgs__action__LocalPlanner_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__LocalPlanner_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"

/// Struct defined in action/LocalPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__LocalPlanner_GetResult_Response
{
  int8_t status;
  moveit_msgs__action__LocalPlanner_Result result;
} moveit_msgs__action__LocalPlanner_GetResult_Response;

// Struct for a sequence of moveit_msgs__action__LocalPlanner_GetResult_Response.
typedef struct moveit_msgs__action__LocalPlanner_GetResult_Response__Sequence
{
  moveit_msgs__action__LocalPlanner_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__LocalPlanner_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"

/// Struct defined in action/LocalPlanner in the package moveit_msgs.
typedef struct moveit_msgs__action__LocalPlanner_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__LocalPlanner_Feedback feedback;
} moveit_msgs__action__LocalPlanner_FeedbackMessage;

// Struct for a sequence of moveit_msgs__action__LocalPlanner_FeedbackMessage.
typedef struct moveit_msgs__action__LocalPlanner_FeedbackMessage__Sequence
{
  moveit_msgs__action__LocalPlanner_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__LocalPlanner_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__STRUCT_H_
