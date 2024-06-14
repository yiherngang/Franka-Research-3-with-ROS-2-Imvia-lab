// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SCENE_SETTINGS'.
/**
  * Scene name, model name, model root
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__SCENE_SETTINGS = 1ul
};

/// Constant 'ROBOT_STATE'.
/**
  * Joint values of the robot state
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__ROBOT_STATE = 2ul
};

/// Constant 'ROBOT_STATE_ATTACHED_OBJECTS'.
/**
  * Attached objects (including geometry) for the robot state
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__ROBOT_STATE_ATTACHED_OBJECTS = 4ul
};

/// Constant 'WORLD_OBJECT_NAMES'.
/**
  * The names of the world objects
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__WORLD_OBJECT_NAMES = 8ul
};

/// Constant 'WORLD_OBJECT_GEOMETRY'.
/**
  * The geometry of the world objects
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__WORLD_OBJECT_GEOMETRY = 16ul
};

/// Constant 'OCTOMAP'.
/**
  * The maintained octomap
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__OCTOMAP = 32ul
};

/// Constant 'TRANSFORMS'.
/**
  * The maintained list of transforms
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__TRANSFORMS = 64ul
};

/// Constant 'ALLOWED_COLLISION_MATRIX'.
/**
  * The allowed collision matrix
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__ALLOWED_COLLISION_MATRIX = 128ul
};

/// Constant 'LINK_PADDING_AND_SCALING'.
/**
  * The default link padding and link scaling
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__LINK_PADDING_AND_SCALING = 256ul
};

/// Constant 'OBJECT_COLORS'.
/**
  * The stored object colors
 */
enum
{
  moveit_msgs__msg__PlanningSceneComponents__OBJECT_COLORS = 512ul
};

/// Struct defined in msg/PlanningSceneComponents in the package moveit_msgs.
/**
  * This message defines the components that make up the PlanningScene message.
  * The values can be used as a bitfield to specify which parts of the PlanningScene message
  * are of interest
 */
typedef struct moveit_msgs__msg__PlanningSceneComponents
{
  /// Bitfield combining options indicated above
  uint32_t components;
} moveit_msgs__msg__PlanningSceneComponents;

// Struct for a sequence of moveit_msgs__msg__PlanningSceneComponents.
typedef struct moveit_msgs__msg__PlanningSceneComponents__Sequence
{
  moveit_msgs__msg__PlanningSceneComponents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlanningSceneComponents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_H_
