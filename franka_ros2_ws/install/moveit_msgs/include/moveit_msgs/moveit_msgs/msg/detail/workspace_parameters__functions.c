// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/WorkspaceParameters.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/workspace_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `min_corner`
// Member `max_corner`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
moveit_msgs__msg__WorkspaceParameters__init(moveit_msgs__msg__WorkspaceParameters * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__WorkspaceParameters__fini(msg);
    return false;
  }
  // min_corner
  if (!geometry_msgs__msg__Vector3__init(&msg->min_corner)) {
    moveit_msgs__msg__WorkspaceParameters__fini(msg);
    return false;
  }
  // max_corner
  if (!geometry_msgs__msg__Vector3__init(&msg->max_corner)) {
    moveit_msgs__msg__WorkspaceParameters__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__WorkspaceParameters__fini(moveit_msgs__msg__WorkspaceParameters * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // min_corner
  geometry_msgs__msg__Vector3__fini(&msg->min_corner);
  // max_corner
  geometry_msgs__msg__Vector3__fini(&msg->max_corner);
}

bool
moveit_msgs__msg__WorkspaceParameters__are_equal(const moveit_msgs__msg__WorkspaceParameters * lhs, const moveit_msgs__msg__WorkspaceParameters * rhs)
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
  // min_corner
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->min_corner), &(rhs->min_corner)))
  {
    return false;
  }
  // max_corner
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->max_corner), &(rhs->max_corner)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__WorkspaceParameters__copy(
  const moveit_msgs__msg__WorkspaceParameters * input,
  moveit_msgs__msg__WorkspaceParameters * output)
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
  // min_corner
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->min_corner), &(output->min_corner)))
  {
    return false;
  }
  // max_corner
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->max_corner), &(output->max_corner)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__WorkspaceParameters *
moveit_msgs__msg__WorkspaceParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__WorkspaceParameters * msg = (moveit_msgs__msg__WorkspaceParameters *)allocator.allocate(sizeof(moveit_msgs__msg__WorkspaceParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__WorkspaceParameters));
  bool success = moveit_msgs__msg__WorkspaceParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__WorkspaceParameters__destroy(moveit_msgs__msg__WorkspaceParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__WorkspaceParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__WorkspaceParameters__Sequence__init(moveit_msgs__msg__WorkspaceParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__WorkspaceParameters * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__WorkspaceParameters *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__WorkspaceParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__WorkspaceParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__WorkspaceParameters__fini(&data[i - 1]);
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
moveit_msgs__msg__WorkspaceParameters__Sequence__fini(moveit_msgs__msg__WorkspaceParameters__Sequence * array)
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
      moveit_msgs__msg__WorkspaceParameters__fini(&array->data[i]);
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

moveit_msgs__msg__WorkspaceParameters__Sequence *
moveit_msgs__msg__WorkspaceParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__WorkspaceParameters__Sequence * array = (moveit_msgs__msg__WorkspaceParameters__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__WorkspaceParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__WorkspaceParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__WorkspaceParameters__Sequence__destroy(moveit_msgs__msg__WorkspaceParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__WorkspaceParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__WorkspaceParameters__Sequence__are_equal(const moveit_msgs__msg__WorkspaceParameters__Sequence * lhs, const moveit_msgs__msg__WorkspaceParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__WorkspaceParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__WorkspaceParameters__Sequence__copy(
  const moveit_msgs__msg__WorkspaceParameters__Sequence * input,
  moveit_msgs__msg__WorkspaceParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__WorkspaceParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__WorkspaceParameters * data =
      (moveit_msgs__msg__WorkspaceParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__WorkspaceParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__WorkspaceParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__WorkspaceParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
