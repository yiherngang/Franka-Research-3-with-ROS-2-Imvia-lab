// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/GripperTranslation.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/gripper_translation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `direction`
#include "geometry_msgs/msg/detail/vector3_stamped__functions.h"

bool
moveit_msgs__msg__GripperTranslation__init(moveit_msgs__msg__GripperTranslation * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3Stamped__init(&msg->direction)) {
    moveit_msgs__msg__GripperTranslation__fini(msg);
    return false;
  }
  // desired_distance
  // min_distance
  return true;
}

void
moveit_msgs__msg__GripperTranslation__fini(moveit_msgs__msg__GripperTranslation * msg)
{
  if (!msg) {
    return;
  }
  // direction
  geometry_msgs__msg__Vector3Stamped__fini(&msg->direction);
  // desired_distance
  // min_distance
}

bool
moveit_msgs__msg__GripperTranslation__are_equal(const moveit_msgs__msg__GripperTranslation * lhs, const moveit_msgs__msg__GripperTranslation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3Stamped__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // desired_distance
  if (lhs->desired_distance != rhs->desired_distance) {
    return false;
  }
  // min_distance
  if (lhs->min_distance != rhs->min_distance) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__GripperTranslation__copy(
  const moveit_msgs__msg__GripperTranslation * input,
  moveit_msgs__msg__GripperTranslation * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3Stamped__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // desired_distance
  output->desired_distance = input->desired_distance;
  // min_distance
  output->min_distance = input->min_distance;
  return true;
}

moveit_msgs__msg__GripperTranslation *
moveit_msgs__msg__GripperTranslation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__GripperTranslation * msg = (moveit_msgs__msg__GripperTranslation *)allocator.allocate(sizeof(moveit_msgs__msg__GripperTranslation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__GripperTranslation));
  bool success = moveit_msgs__msg__GripperTranslation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__GripperTranslation__destroy(moveit_msgs__msg__GripperTranslation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__GripperTranslation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__GripperTranslation__Sequence__init(moveit_msgs__msg__GripperTranslation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__GripperTranslation * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__GripperTranslation *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__GripperTranslation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__GripperTranslation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__GripperTranslation__fini(&data[i - 1]);
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
moveit_msgs__msg__GripperTranslation__Sequence__fini(moveit_msgs__msg__GripperTranslation__Sequence * array)
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
      moveit_msgs__msg__GripperTranslation__fini(&array->data[i]);
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

moveit_msgs__msg__GripperTranslation__Sequence *
moveit_msgs__msg__GripperTranslation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__GripperTranslation__Sequence * array = (moveit_msgs__msg__GripperTranslation__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__GripperTranslation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__GripperTranslation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__GripperTranslation__Sequence__destroy(moveit_msgs__msg__GripperTranslation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__GripperTranslation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__GripperTranslation__Sequence__are_equal(const moveit_msgs__msg__GripperTranslation__Sequence * lhs, const moveit_msgs__msg__GripperTranslation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__GripperTranslation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__GripperTranslation__Sequence__copy(
  const moveit_msgs__msg__GripperTranslation__Sequence * input,
  moveit_msgs__msg__GripperTranslation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__GripperTranslation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__GripperTranslation * data =
      (moveit_msgs__msg__GripperTranslation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__GripperTranslation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__GripperTranslation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__GripperTranslation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
