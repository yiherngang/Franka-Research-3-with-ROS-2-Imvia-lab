// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_H_

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
// Member 'pre_grasp_posture'
// Member 'grasp_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'grasp_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'pre_grasp_approach'
// Member 'post_grasp_retreat'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/detail/gripper_translation__struct.h"

/// Struct defined in msg/Grasp in the package moveit_msgs.
/**
  * This message contains a description of a grasp that would be used
  * with a particular end-effector to grasp an object, including how to
  * approach it, grip it, etc.  This message does not contain any
  * information about a "grasp point" (a position ON the object).
  * Whatever generates this message should have already combined
  * information about grasp points with information about the geometry
  * of the end-effector to compute the grasp_pose in this message.
 */
typedef struct moveit_msgs__msg__Grasp
{
  /// A name for this grasp
  rosidl_runtime_c__String id;
  /// The internal posture of the hand for the pre-grasp
  /// only positions are used
  trajectory_msgs__msg__JointTrajectory pre_grasp_posture;
  /// The internal posture of the hand for the grasp
  /// positions and efforts are used
  trajectory_msgs__msg__JointTrajectory grasp_posture;
  /// The position of the end-effector for the grasp.  This is the pose of
  /// the "parent_link" of the end-effector, not actually the pose of any
  /// link *in* the end-effector.  Typically this would be the pose of the
  /// most distal wrist link before the hand (end-effector) links began.
  geometry_msgs__msg__PoseStamped grasp_pose;
  /// The estimated probability of success for this grasp, or some other
  /// measure of how "good" it is.
  double grasp_quality;
  /// The approach direction to take before picking an object
  moveit_msgs__msg__GripperTranslation pre_grasp_approach;
  /// The retreat direction to take after a grasp has been completed (object is attached)
  moveit_msgs__msg__GripperTranslation post_grasp_retreat;
  /// The retreat motion to perform when releasing the object; this information
  /// is not necessary for the grasp itself, but when releasing the object,
  /// the information will be necessary. The grasp used to perform a pickup
  /// is returned as part of the result, so this information is available for
  /// later use.
  moveit_msgs__msg__GripperTranslation post_place_retreat;
  /// the maximum contact force to use while grasping (<=0 to disable)
  float max_contact_force;
  /// an optional list of obstacles that we have semantic information about
  /// and that can be touched/pushed/moved in the course of grasping
  rosidl_runtime_c__String__Sequence allowed_touch_objects;
} moveit_msgs__msg__Grasp;

// Struct for a sequence of moveit_msgs__msg__Grasp.
typedef struct moveit_msgs__msg__Grasp__Sequence
{
  moveit_msgs__msg__Grasp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__Grasp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_H_
