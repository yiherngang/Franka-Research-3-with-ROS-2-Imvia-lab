// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:msg/GraspEpsilon.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/grasp_epsilon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
franka_msgs__msg__GraspEpsilon__init(franka_msgs__msg__GraspEpsilon * msg)
{
  if (!msg) {
    return false;
  }
  // inner
  msg->inner = 0.005l;
  // outer
  msg->outer = 0.005l;
  return true;
}

void
franka_msgs__msg__GraspEpsilon__fini(franka_msgs__msg__GraspEpsilon * msg)
{
  if (!msg) {
    return;
  }
  // inner
  // outer
}

bool
franka_msgs__msg__GraspEpsilon__are_equal(const franka_msgs__msg__GraspEpsilon * lhs, const franka_msgs__msg__GraspEpsilon * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // inner
  if (lhs->inner != rhs->inner) {
    return false;
  }
  // outer
  if (lhs->outer != rhs->outer) {
    return false;
  }
  return true;
}

bool
franka_msgs__msg__GraspEpsilon__copy(
  const franka_msgs__msg__GraspEpsilon * input,
  franka_msgs__msg__GraspEpsilon * output)
{
  if (!input || !output) {
    return false;
  }
  // inner
  output->inner = input->inner;
  // outer
  output->outer = input->outer;
  return true;
}

franka_msgs__msg__GraspEpsilon *
franka_msgs__msg__GraspEpsilon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__GraspEpsilon * msg = (franka_msgs__msg__GraspEpsilon *)allocator.allocate(sizeof(franka_msgs__msg__GraspEpsilon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__msg__GraspEpsilon));
  bool success = franka_msgs__msg__GraspEpsilon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__msg__GraspEpsilon__destroy(franka_msgs__msg__GraspEpsilon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__msg__GraspEpsilon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__msg__GraspEpsilon__Sequence__init(franka_msgs__msg__GraspEpsilon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__GraspEpsilon * data = NULL;

  if (size) {
    data = (franka_msgs__msg__GraspEpsilon *)allocator.zero_allocate(size, sizeof(franka_msgs__msg__GraspEpsilon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__msg__GraspEpsilon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__msg__GraspEpsilon__fini(&data[i - 1]);
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
franka_msgs__msg__GraspEpsilon__Sequence__fini(franka_msgs__msg__GraspEpsilon__Sequence * array)
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
      franka_msgs__msg__GraspEpsilon__fini(&array->data[i]);
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

franka_msgs__msg__GraspEpsilon__Sequence *
franka_msgs__msg__GraspEpsilon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__GraspEpsilon__Sequence * array = (franka_msgs__msg__GraspEpsilon__Sequence *)allocator.allocate(sizeof(franka_msgs__msg__GraspEpsilon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__msg__GraspEpsilon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__msg__GraspEpsilon__Sequence__destroy(franka_msgs__msg__GraspEpsilon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__msg__GraspEpsilon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__msg__GraspEpsilon__Sequence__are_equal(const franka_msgs__msg__GraspEpsilon__Sequence * lhs, const franka_msgs__msg__GraspEpsilon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__msg__GraspEpsilon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__GraspEpsilon__Sequence__copy(
  const franka_msgs__msg__GraspEpsilon__Sequence * input,
  franka_msgs__msg__GraspEpsilon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__msg__GraspEpsilon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__msg__GraspEpsilon * data =
      (franka_msgs__msg__GraspEpsilon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__msg__GraspEpsilon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__msg__GraspEpsilon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__msg__GraspEpsilon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
