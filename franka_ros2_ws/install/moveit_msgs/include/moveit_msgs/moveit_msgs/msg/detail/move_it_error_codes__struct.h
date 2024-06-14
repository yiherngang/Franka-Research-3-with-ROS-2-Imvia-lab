// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/MoveItErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUCCESS'.
/**
  * overall behavior
 */
enum
{
  moveit_msgs__msg__MoveItErrorCodes__SUCCESS = 1l
};

/// Constant 'FAILURE'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__FAILURE = 99999l
};

/// Constant 'PLANNING_FAILED'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__PLANNING_FAILED = -1l
};

/// Constant 'INVALID_MOTION_PLAN'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__INVALID_MOTION_PLAN = -2l
};

/// Constant 'MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE = -3l
};

/// Constant 'CONTROL_FAILED'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__CONTROL_FAILED = -4l
};

/// Constant 'UNABLE_TO_AQUIRE_SENSOR_DATA'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__UNABLE_TO_AQUIRE_SENSOR_DATA = -5l
};

/// Constant 'TIMED_OUT'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__TIMED_OUT = -6l
};

/// Constant 'PREEMPTED'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__PREEMPTED = -7l
};

/// Constant 'START_STATE_IN_COLLISION'.
/**
  * planning & kinematics request errors
 */
enum
{
  moveit_msgs__msg__MoveItErrorCodes__START_STATE_IN_COLLISION = -10l
};

/// Constant 'START_STATE_VIOLATES_PATH_CONSTRAINTS'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__START_STATE_VIOLATES_PATH_CONSTRAINTS = -11l
};

/// Constant 'START_STATE_INVALID'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__START_STATE_INVALID = -26l
};

/// Constant 'GOAL_IN_COLLISION'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__GOAL_IN_COLLISION = -12l
};

/// Constant 'GOAL_VIOLATES_PATH_CONSTRAINTS'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__GOAL_VIOLATES_PATH_CONSTRAINTS = -13l
};

/// Constant 'GOAL_CONSTRAINTS_VIOLATED'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__GOAL_CONSTRAINTS_VIOLATED = -14l
};

/// Constant 'GOAL_STATE_INVALID'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__GOAL_STATE_INVALID = -27l
};

/// Constant 'UNRECOGNIZED_GOAL_TYPE'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__UNRECOGNIZED_GOAL_TYPE = -28l
};

/// Constant 'INVALID_GROUP_NAME'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__INVALID_GROUP_NAME = -15l
};

/// Constant 'INVALID_GOAL_CONSTRAINTS'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__INVALID_GOAL_CONSTRAINTS = -16l
};

/// Constant 'INVALID_ROBOT_STATE'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__INVALID_ROBOT_STATE = -17l
};

/// Constant 'INVALID_LINK_NAME'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__INVALID_LINK_NAME = -18l
};

/// Constant 'INVALID_OBJECT_NAME'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__INVALID_OBJECT_NAME = -19l
};

/// Constant 'FRAME_TRANSFORM_FAILURE'.
/**
  * system errors
 */
enum
{
  moveit_msgs__msg__MoveItErrorCodes__FRAME_TRANSFORM_FAILURE = -21l
};

/// Constant 'COLLISION_CHECKING_UNAVAILABLE'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__COLLISION_CHECKING_UNAVAILABLE = -22l
};

/// Constant 'ROBOT_STATE_STALE'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__ROBOT_STATE_STALE = -23l
};

/// Constant 'SENSOR_INFO_STALE'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__SENSOR_INFO_STALE = -24l
};

/// Constant 'COMMUNICATION_FAILURE'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__COMMUNICATION_FAILURE = -25l
};

/// Constant 'CRASH'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__CRASH = -29l
};

/// Constant 'ABORT'.
enum
{
  moveit_msgs__msg__MoveItErrorCodes__ABORT = -30l
};

/// Constant 'NO_IK_SOLUTION'.
/**
  * kinematics errors
 */
enum
{
  moveit_msgs__msg__MoveItErrorCodes__NO_IK_SOLUTION = -31l
};

/// Struct defined in msg/MoveItErrorCodes in the package moveit_msgs.
typedef struct moveit_msgs__msg__MoveItErrorCodes
{
  int32_t val;
} moveit_msgs__msg__MoveItErrorCodes;

// Struct for a sequence of moveit_msgs__msg__MoveItErrorCodes.
typedef struct moveit_msgs__msg__MoveItErrorCodes__Sequence
{
  moveit_msgs__msg__MoveItErrorCodes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__MoveItErrorCodes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOVE_IT_ERROR_CODES__STRUCT_H_
