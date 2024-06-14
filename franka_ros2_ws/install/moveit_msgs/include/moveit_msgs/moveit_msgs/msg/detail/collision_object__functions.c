// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/collision_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
// Member `primitive_poses`
// Member `mesh_poses`
// Member `plane_poses`
// Member `subframe_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `id`
// Member `subframe_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "object_recognition_msgs/msg/detail/object_type__functions.h"
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__functions.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__functions.h"
// Member `planes`
#include "shape_msgs/msg/detail/plane__functions.h"

bool
moveit_msgs__msg__CollisionObject__init(moveit_msgs__msg__CollisionObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // type
  if (!object_recognition_msgs__msg__ObjectType__init(&msg->type)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // primitives
  if (!shape_msgs__msg__SolidPrimitive__Sequence__init(&msg->primitives, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // primitive_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->primitive_poses, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // meshes
  if (!shape_msgs__msg__Mesh__Sequence__init(&msg->meshes, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // mesh_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->mesh_poses, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // planes
  if (!shape_msgs__msg__Plane__Sequence__init(&msg->planes, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // plane_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->plane_poses, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // subframe_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->subframe_names, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // subframe_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->subframe_poses, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // operation
  return true;
}

void
moveit_msgs__msg__CollisionObject__fini(moveit_msgs__msg__CollisionObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // type
  object_recognition_msgs__msg__ObjectType__fini(&msg->type);
  // primitives
  shape_msgs__msg__SolidPrimitive__Sequence__fini(&msg->primitives);
  // primitive_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->primitive_poses);
  // meshes
  shape_msgs__msg__Mesh__Sequence__fini(&msg->meshes);
  // mesh_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->mesh_poses);
  // planes
  shape_msgs__msg__Plane__Sequence__fini(&msg->planes);
  // plane_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->plane_poses);
  // subframe_names
  rosidl_runtime_c__String__Sequence__fini(&msg->subframe_names);
  // subframe_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->subframe_poses);
  // operation
}

bool
moveit_msgs__msg__CollisionObject__are_equal(const moveit_msgs__msg__CollisionObject * lhs, const moveit_msgs__msg__CollisionObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // type
  if (!object_recognition_msgs__msg__ObjectType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // primitives
  if (!shape_msgs__msg__SolidPrimitive__Sequence__are_equal(
      &(lhs->primitives), &(rhs->primitives)))
  {
    return false;
  }
  // primitive_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->primitive_poses), &(rhs->primitive_poses)))
  {
    return false;
  }
  // meshes
  if (!shape_msgs__msg__Mesh__Sequence__are_equal(
      &(lhs->meshes), &(rhs->meshes)))
  {
    return false;
  }
  // mesh_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->mesh_poses), &(rhs->mesh_poses)))
  {
    return false;
  }
  // planes
  if (!shape_msgs__msg__Plane__Sequence__are_equal(
      &(lhs->planes), &(rhs->planes)))
  {
    return false;
  }
  // plane_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->plane_poses), &(rhs->plane_poses)))
  {
    return false;
  }
  // subframe_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->subframe_names), &(rhs->subframe_names)))
  {
    return false;
  }
  // subframe_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->subframe_poses), &(rhs->subframe_poses)))
  {
    return false;
  }
  // operation
  if (lhs->operation != rhs->operation) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__CollisionObject__copy(
  const moveit_msgs__msg__CollisionObject * input,
  moveit_msgs__msg__CollisionObject * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // type
  if (!object_recognition_msgs__msg__ObjectType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // primitives
  if (!shape_msgs__msg__SolidPrimitive__Sequence__copy(
      &(input->primitives), &(output->primitives)))
  {
    return false;
  }
  // primitive_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->primitive_poses), &(output->primitive_poses)))
  {
    return false;
  }
  // meshes
  if (!shape_msgs__msg__Mesh__Sequence__copy(
      &(input->meshes), &(output->meshes)))
  {
    return false;
  }
  // mesh_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->mesh_poses), &(output->mesh_poses)))
  {
    return false;
  }
  // planes
  if (!shape_msgs__msg__Plane__Sequence__copy(
      &(input->planes), &(output->planes)))
  {
    return false;
  }
  // plane_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->plane_poses), &(output->plane_poses)))
  {
    return false;
  }
  // subframe_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->subframe_names), &(output->subframe_names)))
  {
    return false;
  }
  // subframe_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->subframe_poses), &(output->subframe_poses)))
  {
    return false;
  }
  // operation
  output->operation = input->operation;
  return true;
}

moveit_msgs__msg__CollisionObject *
moveit_msgs__msg__CollisionObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CollisionObject * msg = (moveit_msgs__msg__CollisionObject *)allocator.allocate(sizeof(moveit_msgs__msg__CollisionObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CollisionObject));
  bool success = moveit_msgs__msg__CollisionObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CollisionObject__destroy(moveit_msgs__msg__CollisionObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__CollisionObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__CollisionObject__Sequence__init(moveit_msgs__msg__CollisionObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CollisionObject * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__CollisionObject *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__CollisionObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CollisionObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CollisionObject__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__msg__CollisionObject__Sequence__fini(moveit_msgs__msg__CollisionObject__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__CollisionObject__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__msg__CollisionObject__Sequence *
moveit_msgs__msg__CollisionObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CollisionObject__Sequence * array = (moveit_msgs__msg__CollisionObject__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__CollisionObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CollisionObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CollisionObject__Sequence__destroy(moveit_msgs__msg__CollisionObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__CollisionObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__CollisionObject__Sequence__are_equal(const moveit_msgs__msg__CollisionObject__Sequence * lhs, const moveit_msgs__msg__CollisionObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__CollisionObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__CollisionObject__Sequence__copy(
  const moveit_msgs__msg__CollisionObject__Sequence * input,
  moveit_msgs__msg__CollisionObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__CollisionObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__CollisionObject * data =
      (moveit_msgs__msg__CollisionObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__CollisionObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__CollisionObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__CollisionObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
