// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/bounding_volume__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__functions.h"
// Member `primitive_poses`
// Member `mesh_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__functions.h"

bool
moveit_msgs__msg__BoundingVolume__init(moveit_msgs__msg__BoundingVolume * msg)
{
  if (!msg) {
    return false;
  }
  // primitives
  if (!shape_msgs__msg__SolidPrimitive__Sequence__init(&msg->primitives, 0)) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
    return false;
  }
  // primitive_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->primitive_poses, 0)) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
    return false;
  }
  // meshes
  if (!shape_msgs__msg__Mesh__Sequence__init(&msg->meshes, 0)) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
    return false;
  }
  // mesh_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->mesh_poses, 0)) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__BoundingVolume__fini(moveit_msgs__msg__BoundingVolume * msg)
{
  if (!msg) {
    return;
  }
  // primitives
  shape_msgs__msg__SolidPrimitive__Sequence__fini(&msg->primitives);
  // primitive_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->primitive_poses);
  // meshes
  shape_msgs__msg__Mesh__Sequence__fini(&msg->meshes);
  // mesh_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->mesh_poses);
}

bool
moveit_msgs__msg__BoundingVolume__are_equal(const moveit_msgs__msg__BoundingVolume * lhs, const moveit_msgs__msg__BoundingVolume * rhs)
{
  if (!lhs || !rhs) {
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
  return true;
}

bool
moveit_msgs__msg__BoundingVolume__copy(
  const moveit_msgs__msg__BoundingVolume * input,
  moveit_msgs__msg__BoundingVolume * output)
{
  if (!input || !output) {
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
  return true;
}

moveit_msgs__msg__BoundingVolume *
moveit_msgs__msg__BoundingVolume__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__BoundingVolume * msg = (moveit_msgs__msg__BoundingVolume *)allocator.allocate(sizeof(moveit_msgs__msg__BoundingVolume), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__BoundingVolume));
  bool success = moveit_msgs__msg__BoundingVolume__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__BoundingVolume__destroy(moveit_msgs__msg__BoundingVolume * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__BoundingVolume__Sequence__init(moveit_msgs__msg__BoundingVolume__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__BoundingVolume * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__BoundingVolume *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__BoundingVolume), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__BoundingVolume__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__BoundingVolume__fini(&data[i - 1]);
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
moveit_msgs__msg__BoundingVolume__Sequence__fini(moveit_msgs__msg__BoundingVolume__Sequence * array)
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
      moveit_msgs__msg__BoundingVolume__fini(&array->data[i]);
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

moveit_msgs__msg__BoundingVolume__Sequence *
moveit_msgs__msg__BoundingVolume__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__BoundingVolume__Sequence * array = (moveit_msgs__msg__BoundingVolume__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__BoundingVolume__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__BoundingVolume__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__BoundingVolume__Sequence__destroy(moveit_msgs__msg__BoundingVolume__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__BoundingVolume__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__BoundingVolume__Sequence__are_equal(const moveit_msgs__msg__BoundingVolume__Sequence * lhs, const moveit_msgs__msg__BoundingVolume__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__BoundingVolume__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__BoundingVolume__Sequence__copy(
  const moveit_msgs__msg__BoundingVolume__Sequence * input,
  moveit_msgs__msg__BoundingVolume__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__BoundingVolume);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__BoundingVolume * data =
      (moveit_msgs__msg__BoundingVolume *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__BoundingVolume__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__BoundingVolume__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__BoundingVolume__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
