// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlaceLocation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'allowed_touch_objects'
#include "rosidl_runtime_c/string.h"
// Member 'post_place_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'place_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'pre_place_approach'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/detail/gripper_translation__struct.h"

/// Struct defined in msg/PlaceLocation in the package moveit_msgs.
/**
  * A name for this grasp
 */
typedef struct moveit_msgs__msg__PlaceLocation
{
  rosidl_runtime_c__String id;
  /// The internal posture of the hand for the grasp
  /// positions and efforts are used
  trajectory_msgs__msg__JointTrajectory post_place_posture;
  /// The position of the end-effector for the grasp relative to a reference frame
  /// (that is always specified elsewhere, not in this message)
  geometry_msgs__msg__PoseStamped place_pose;
  /// The estimated probability of success for this place, or some other
  /// measure of how "good" it is.
  double quality;
  /// The approach motion
  moveit_msgs__msg__GripperTranslation pre_place_approach;
  /// The retreat motion
  moveit_msgs__msg__GripperTranslation post_place_retreat;
  /// an optional list of obstacles that we have semantic information about
  /// and that can be touched/pushed/moved in the course of grasping
  rosidl_runtime_c__String__Sequence allowed_touch_objects;
} moveit_msgs__msg__PlaceLocation;

// Struct for a sequence of moveit_msgs__msg__PlaceLocation.
typedef struct moveit_msgs__msg__PlaceLocation__Sequence
{
  moveit_msgs__msg__PlaceLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlaceLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__STRUCT_H_
