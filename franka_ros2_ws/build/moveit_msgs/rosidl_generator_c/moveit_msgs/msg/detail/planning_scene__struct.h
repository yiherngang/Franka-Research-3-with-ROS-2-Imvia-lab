// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__STRUCT_H_

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
// Member 'robot_model_name'
#include "rosidl_runtime_c/string.h"
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'fixed_frame_transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"
// Member 'allowed_collision_matrix'
#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.h"
// Member 'link_padding'
#include "moveit_msgs/msg/detail/link_padding__struct.h"
// Member 'link_scale'
#include "moveit_msgs/msg/detail/link_scale__struct.h"
// Member 'object_colors'
#include "moveit_msgs/msg/detail/object_color__struct.h"
// Member 'world'
#include "moveit_msgs/msg/detail/planning_scene_world__struct.h"

/// Struct defined in msg/PlanningScene in the package moveit_msgs.
/**
  * name of planning scene
 */
typedef struct moveit_msgs__msg__PlanningScene
{
  rosidl_runtime_c__String name;
  /// full robot state
  moveit_msgs__msg__RobotState robot_state;
  /// The name of the robot model this scene is for
  rosidl_runtime_c__String robot_model_name;
  /// additional frames for duplicating tf (with respect to the planning frame)
  geometry_msgs__msg__TransformStamped__Sequence fixed_frame_transforms;
  /// full allowed collision matrix
  moveit_msgs__msg__AllowedCollisionMatrix allowed_collision_matrix;
  /// all link paddings
  moveit_msgs__msg__LinkPadding__Sequence link_padding;
  /// all link scales
  moveit_msgs__msg__LinkScale__Sequence link_scale;
  /// Attached objects, collision objects, even the octomap or collision map can have
  /// colors associated to them. This array specifies them.
  moveit_msgs__msg__ObjectColor__Sequence object_colors;
  /// the collision map
  moveit_msgs__msg__PlanningSceneWorld world;
  /// Flag indicating whether this scene is to be interpreted as a diff with respect to some other scene
  bool is_diff;
} moveit_msgs__msg__PlanningScene;

// Struct for a sequence of moveit_msgs__msg__PlanningScene.
typedef struct moveit_msgs__msg__PlanningScene__Sequence
{
  moveit_msgs__msg__PlanningScene * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlanningScene__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE__STRUCT_H_
