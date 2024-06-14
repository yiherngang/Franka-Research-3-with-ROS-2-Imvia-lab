// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
/**
  * Adds the object to the planning scene. If the object previously existed, it is replaced.
 */
enum
{
  moveit_msgs__msg__CollisionObject__ADD = 0
};

/// Constant 'REMOVE'.
/**
  * Removes the object from the environment entirely (everything that matches the specified id)
 */
enum
{
  moveit_msgs__msg__CollisionObject__REMOVE = 1
};

/// Constant 'APPEND'.
/**
  * Append to an object that already exists in the planning scene. If the object does not exist, it is added.
 */
enum
{
  moveit_msgs__msg__CollisionObject__APPEND = 2
};

/// Constant 'MOVE'.
/**
  * If an object already exists in the scene, new poses can be sent (the geometry arrays must be left empty)
  * if solely moving the object is desired
 */
enum
{
  moveit_msgs__msg__CollisionObject__MOVE = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
// Member 'primitive_poses'
// Member 'mesh_poses'
// Member 'plane_poses'
// Member 'subframe_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'id'
// Member 'subframe_names'
#include "rosidl_runtime_c/string.h"
// Member 'type'
#include "object_recognition_msgs/msg/detail/object_type__struct.h"
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__struct.h"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__struct.h"
// Member 'planes'
#include "shape_msgs/msg/detail/plane__struct.h"

/// Struct defined in msg/CollisionObject in the package moveit_msgs.
/**
  * a header, used for interpreting the poses
 */
typedef struct moveit_msgs__msg__CollisionObject
{
  std_msgs__msg__Header header;
  /// DISCLAIMER: This field is not in use yet and all other poses
  /// are still interpreted in the header frame.
  /// https://github.com/ros-planning/moveit/pull/2037
  /// implements the actual logic for this field.
  /// ---
  /// The object's pose relative to the header frame.
  /// The shapes and subframe poses are defined relative to this pose.
  geometry_msgs__msg__Pose pose;
  /// The id of the object (name used in MoveIt)
  rosidl_runtime_c__String id;
  /// The object type in a database of known objects
  object_recognition_msgs__msg__ObjectType type;
  /// The collision geometries associated with the object.
  /// Their poses are with respect to the object's pose
  /// Solid geometric primitives
  shape_msgs__msg__SolidPrimitive__Sequence primitives;
  geometry_msgs__msg__Pose__Sequence primitive_poses;
  /// Meshes
  shape_msgs__msg__Mesh__Sequence meshes;
  geometry_msgs__msg__Pose__Sequence mesh_poses;
  /// Bounding planes (equation is specified, but the plane can be oriented using an additional pose)
  shape_msgs__msg__Plane__Sequence planes;
  geometry_msgs__msg__Pose__Sequence plane_poses;
  /// Named subframes on the object. Use these to define points of interest on the object that you want
  /// to plan with (e.g. "tip", "spout", "handle"). The id of the object will be prepended to the subframe.
  /// If an object with the id "screwdriver" and a subframe "tip" is in the scene, you can use the frame
  /// "screwdriver/tip" for planning.
  /// The length of the subframe_names and subframe_poses has to be identical.
  rosidl_runtime_c__String__Sequence subframe_names;
  geometry_msgs__msg__Pose__Sequence subframe_poses;
  /// Operation to be performed
  uint8_t operation;
} moveit_msgs__msg__CollisionObject;

// Struct for a sequence of moveit_msgs__msg__CollisionObject.
typedef struct moveit_msgs__msg__CollisionObject__Sequence
{
  moveit_msgs__msg__CollisionObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__CollisionObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__COLLISION_OBJECT__STRUCT_H_
