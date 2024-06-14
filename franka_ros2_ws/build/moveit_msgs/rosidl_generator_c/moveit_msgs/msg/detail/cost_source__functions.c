// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CostSource.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/cost_source__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `aabb_min`
// Member `aabb_max`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
moveit_msgs__msg__CostSource__init(moveit_msgs__msg__CostSource * msg)
{
  if (!msg) {
    return false;
  }
  // cost_density
  // aabb_min
  if (!geometry_msgs__msg__Vector3__init(&msg->aabb_min)) {
    moveit_msgs__msg__CostSource__fini(msg);
    return false;
  }
  // aabb_max
  if (!geometry_msgs__msg__Vector3__init(&msg->aabb_max)) {
    moveit_msgs__msg__CostSource__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__CostSource__fini(moveit_msgs__msg__CostSource * msg)
{
  if (!msg) {
    return;
  }
  // cost_density
  // aabb_min
  geometry_msgs__msg__Vector3__fini(&msg->aabb_min);
  // aabb_max
  geometry_msgs__msg__Vector3__fini(&msg->aabb_max);
}

bool
moveit_msgs__msg__CostSource__are_equal(const moveit_msgs__msg__CostSource * lhs, const moveit_msgs__msg__CostSource * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cost_density
  if (lhs->cost_density != rhs->cost_density) {
    return false;
  }
  // aabb_min
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->aabb_min), &(rhs->aabb_min)))
  {
    return false;
  }
  // aabb_max
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->aabb_max), &(rhs->aabb_max)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__CostSource__copy(
  const moveit_msgs__msg__CostSource * input,
  moveit_msgs__msg__CostSource * output)
{
  if (!input || !output) {
    return false;
  }
  // cost_density
  output->cost_density = input->cost_density;
  // aabb_min
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->aabb_min), &(output->aabb_min)))
  {
    return false;
  }
  // aabb_max
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->aabb_max), &(output->aabb_max)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__CostSource *
moveit_msgs__msg__CostSource__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CostSource * msg = (moveit_msgs__msg__CostSource *)allocator.allocate(sizeof(moveit_msgs__msg__CostSource), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CostSource));
  bool success = moveit_msgs__msg__CostSource__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CostSource__destroy(moveit_msgs__msg__CostSource * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__CostSource__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__CostSource__Sequence__init(moveit_msgs__msg__CostSource__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CostSource * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__CostSource *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__CostSource), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CostSource__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CostSource__fini(&data[i - 1]);
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
moveit_msgs__msg__CostSource__Sequence__fini(moveit_msgs__msg__CostSource__Sequence * array)
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
      moveit_msgs__msg__CostSource__fini(&array->data[i]);
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

moveit_msgs__msg__CostSource__Sequence *
moveit_msgs__msg__CostSource__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CostSource__Sequence * array = (moveit_msgs__msg__CostSource__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__CostSource__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CostSource__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CostSource__Sequence__destroy(moveit_msgs__msg__CostSource__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__CostSource__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__CostSource__Sequence__are_equal(const moveit_msgs__msg__CostSource__Sequence * lhs, const moveit_msgs__msg__CostSource__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__CostSource__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__CostSource__Sequence__copy(
  const moveit_msgs__msg__CostSource__Sequence * input,
  moveit_msgs__msg__CostSource__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__CostSource);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__CostSource * data =
      (moveit_msgs__msg__CostSource *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__CostSource__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__CostSource__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__CostSource__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
