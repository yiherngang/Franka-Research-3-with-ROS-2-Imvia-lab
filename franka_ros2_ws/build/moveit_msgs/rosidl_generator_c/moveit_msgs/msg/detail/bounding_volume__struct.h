// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__struct.h"
// Member 'primitive_poses'
// Member 'mesh_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__struct.h"

/// Struct defined in msg/BoundingVolume in the package moveit_msgs.
/**
  * Define a volume in 3D
 */
typedef struct moveit_msgs__msg__BoundingVolume
{
  /// A set of solid geometric primitives that make up the volume to define (as a union)
  shape_msgs__msg__SolidPrimitive__Sequence primitives;
  /// The poses at which the primitives are located
  geometry_msgs__msg__Pose__Sequence primitive_poses;
  /// In addition to primitives, meshes can be specified to add to the bounding volume (again, as union)
  shape_msgs__msg__Mesh__Sequence meshes;
  /// The poses at which the meshes are located
  geometry_msgs__msg__Pose__Sequence mesh_poses;
} moveit_msgs__msg__BoundingVolume;

// Struct for a sequence of moveit_msgs__msg__BoundingVolume.
typedef struct moveit_msgs__msg__BoundingVolume__Sequence
{
  moveit_msgs__msg__BoundingVolume * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__BoundingVolume__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__BOUNDING_VOLUME__STRUCT_H_
