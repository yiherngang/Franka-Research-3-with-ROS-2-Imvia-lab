// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/visibility_constraint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_pose`
// Member `sensor_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
moveit_msgs__msg__VisibilityConstraint__init(moveit_msgs__msg__VisibilityConstraint * msg)
{
  if (!msg) {
    return false;
  }
  // target_radius
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    moveit_msgs__msg__VisibilityConstraint__fini(msg);
    return false;
  }
  // cone_sides
  // sensor_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->sensor_pose)) {
    moveit_msgs__msg__VisibilityConstraint__fini(msg);
    return false;
  }
  // max_view_angle
  // max_range_angle
  // sensor_view_direction
  // weight
  return true;
}

void
moveit_msgs__msg__VisibilityConstraint__fini(moveit_msgs__msg__VisibilityConstraint * msg)
{
  if (!msg) {
    return;
  }
  // target_radius
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
  // cone_sides
  // sensor_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->sensor_pose);
  // max_view_angle
  // max_range_angle
  // sensor_view_direction
  // weight
}

bool
moveit_msgs__msg__VisibilityConstraint__are_equal(const moveit_msgs__msg__VisibilityConstraint * lhs, const moveit_msgs__msg__VisibilityConstraint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_radius
  if (lhs->target_radius != rhs->target_radius) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  // cone_sides
  if (lhs->cone_sides != rhs->cone_sides) {
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->sensor_pose), &(rhs->sensor_pose)))
  {
    return false;
  }
  // max_view_angle
  if (lhs->max_view_angle != rhs->max_view_angle) {
    return false;
  }
  // max_range_angle
  if (lhs->max_range_angle != rhs->max_range_angle) {
    return false;
  }
  // sensor_view_direction
  if (lhs->sensor_view_direction != rhs->sensor_view_direction) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__VisibilityConstraint__copy(
  const moveit_msgs__msg__VisibilityConstraint * input,
  moveit_msgs__msg__VisibilityConstraint * output)
{
  if (!input || !output) {
    return false;
  }
  // target_radius
  output->target_radius = input->target_radius;
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  // cone_sides
  output->cone_sides = input->cone_sides;
  // sensor_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->sensor_pose), &(output->sensor_pose)))
  {
    return false;
  }
  // max_view_angle
  output->max_view_angle = input->max_view_angle;
  // max_range_angle
  output->max_range_angle = input->max_range_angle;
  // sensor_view_direction
  output->sensor_view_direction = input->sensor_view_direction;
  // weight
  output->weight = input->weight;
  return true;
}

moveit_msgs__msg__VisibilityConstraint *
moveit_msgs__msg__VisibilityConstraint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__VisibilityConstraint * msg = (moveit_msgs__msg__VisibilityConstraint *)allocator.allocate(sizeof(moveit_msgs__msg__VisibilityConstraint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__VisibilityConstraint));
  bool success = moveit_msgs__msg__VisibilityConstraint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__VisibilityConstraint__destroy(moveit_msgs__msg__VisibilityConstraint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__VisibilityConstraint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__VisibilityConstraint__Sequence__init(moveit_msgs__msg__VisibilityConstraint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__VisibilityConstraint * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__VisibilityConstraint *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__VisibilityConstraint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__VisibilityConstraint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__VisibilityConstraint__fini(&data[i - 1]);
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
moveit_msgs__msg__VisibilityConstraint__Sequence__fini(moveit_msgs__msg__VisibilityConstraint__Sequence * array)
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
      moveit_msgs__msg__VisibilityConstraint__fini(&array->data[i]);
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

moveit_msgs__msg__VisibilityConstraint__Sequence *
moveit_msgs__msg__VisibilityConstraint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__VisibilityConstraint__Sequence * array = (moveit_msgs__msg__VisibilityConstraint__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__VisibilityConstraint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__VisibilityConstraint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__VisibilityConstraint__Sequence__destroy(moveit_msgs__msg__VisibilityConstraint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__VisibilityConstraint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__VisibilityConstraint__Sequence__are_equal(const moveit_msgs__msg__VisibilityConstraint__Sequence * lhs, const moveit_msgs__msg__VisibilityConstraint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__VisibilityConstraint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__VisibilityConstraint__Sequence__copy(
  const moveit_msgs__msg__VisibilityConstraint__Sequence * input,
  moveit_msgs__msg__VisibilityConstraint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__VisibilityConstraint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__VisibilityConstraint * data =
      (moveit_msgs__msg__VisibilityConstraint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__VisibilityConstraint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__VisibilityConstraint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__VisibilityConstraint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
