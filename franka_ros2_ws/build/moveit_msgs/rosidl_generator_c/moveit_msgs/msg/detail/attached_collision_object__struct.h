// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
// Member 'touch_links'
#include "rosidl_runtime_c/string.h"
// Member 'object'
#include "moveit_msgs/msg/detail/collision_object__struct.h"
// Member 'detach_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

/// Struct defined in msg/AttachedCollisionObject in the package moveit_msgs.
/**
  * The CollisionObject will be attached with a fixed joint to this link
 */
typedef struct moveit_msgs__msg__AttachedCollisionObject
{
  rosidl_runtime_c__String link_name;
  /// This contains the actual shapes and poses for the CollisionObject
  /// to be attached to the link
  /// If action is remove and no object.id is set, all objects
  /// attached to the link indicated by link_name will be removed
  moveit_msgs__msg__CollisionObject object;
  /// The set of links that the attached objects are allowed to touch
  /// by default - the link_name is already considered by default
  rosidl_runtime_c__String__Sequence touch_links;
  /// If certain links were placed in a particular posture for this object to remain attached
  /// (e.g., an end effector closing around an object), the posture necessary for releasing
  /// the object is stored here
  trajectory_msgs__msg__JointTrajectory detach_posture;
  /// The weight of the attached object, if known
  double weight;
} moveit_msgs__msg__AttachedCollisionObject;

// Struct for a sequence of moveit_msgs__msg__AttachedCollisionObject.
typedef struct moveit_msgs__msg__AttachedCollisionObject__Sequence
{
  moveit_msgs__msg__AttachedCollisionObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__AttachedCollisionObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_H_
