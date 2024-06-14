// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'collision_objects'
#include "moveit_msgs/msg/detail/collision_object__struct.h"
// Member 'octomap'
#include "octomap_msgs/msg/detail/octomap_with_pose__struct.h"

/// Struct defined in msg/PlanningSceneWorld in the package moveit_msgs.
/**
  * collision objects
 */
typedef struct moveit_msgs__msg__PlanningSceneWorld
{
  moveit_msgs__msg__CollisionObject__Sequence collision_objects;
  /// The octomap that represents additional collision data
  octomap_msgs__msg__OctomapWithPose octomap;
} moveit_msgs__msg__PlanningSceneWorld;

// Struct for a sequence of moveit_msgs__msg__PlanningSceneWorld.
typedef struct moveit_msgs__msg__PlanningSceneWorld__Sequence
{
  moveit_msgs__msg__PlanningSceneWorld * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlanningSceneWorld__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_WORLD__STRUCT_H_
