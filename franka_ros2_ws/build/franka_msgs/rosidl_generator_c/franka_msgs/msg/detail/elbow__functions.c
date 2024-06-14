// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/elbow__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
franka_msgs__msg__Elbow__init(franka_msgs__msg__Elbow * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // desired_position
  // commanded_position
  // commanded_velocity
  // commanded_acceleration
  return true;
}

void
franka_msgs__msg__Elbow__fini(franka_msgs__msg__Elbow * msg)
{
  if (!msg) {
    return;
  }
  // position
  // desired_position
  // commanded_position
  // commanded_velocity
  // commanded_acceleration
}

bool
franka_msgs__msg__Elbow__are_equal(const franka_msgs__msg__Elbow * lhs, const franka_msgs__msg__Elbow * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // desired_position
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->desired_position[i] != rhs->desired_position[i]) {
      return false;
    }
  }
  // commanded_position
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->commanded_position[i] != rhs->commanded_position[i]) {
      return false;
    }
  }
  // commanded_velocity
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->commanded_velocity[i] != rhs->commanded_velocity[i]) {
      return false;
    }
  }
  // commanded_acceleration
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->commanded_acceleration[i] != rhs->commanded_acceleration[i]) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__Elbow__copy(
  const franka_msgs__msg__Elbow * input,
  franka_msgs__msg__Elbow * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  for (size_t i = 0; i < 2; ++i) {
    output->position[i] = input->position[i];
  }
  // desired_position
  for (size_t i = 0; i < 2; ++i) {
    output->desired_position[i] = input->desired_position[i];
  }
  // commanded_position
  for (size_t i = 0; i < 2; ++i) {
    output->commanded_position[i] = input->commanded_position[i];
  }
  // commanded_velocity
  for (size_t i = 0; i < 2; ++i) {
    output->commanded_velocity[i] = input->commanded_velocity[i];
  }
  // commanded_acceleration
  for (size_t i = 0; i < 2; ++i) {
    output->commanded_acceleration[i] = input->commanded_acceleration[i];
  }
  return true;
}

franka_msgs__msg__Elbow *
franka_msgs__msg__Elbow__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__Elbow * msg = (franka_msgs__msg__Elbow *)allocator.allocate(sizeof(franka_msgs__msg__Elbow), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__msg__Elbow));
  bool success = franka_msgs__msg__Elbow__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__msg__Elbow__destroy(franka_msgs__msg__Elbow * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__msg__Elbow__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__msg__Elbow__Sequence__init(franka_msgs__msg__Elbow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__Elbow * data = NULL;

  if (size) {
    data = (franka_msgs__msg__Elbow *)allocator.zero_allocate(size, sizeof(franka_msgs__msg__Elbow), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__msg__Elbow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__msg__Elbow__fini(&data[i - 1]);
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
franka_msgs__msg__Elbow__Sequence__fini(franka_msgs__msg__Elbow__Sequence * array)
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
      franka_msgs__msg__Elbow__fini(&array->data[i]);
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

franka_msgs__msg__Elbow__Sequence *
franka_msgs__msg__Elbow__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__Elbow__Sequence * array = (franka_msgs__msg__Elbow__Sequence *)allocator.allocate(sizeof(franka_msgs__msg__Elbow__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__msg__Elbow__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__msg__Elbow__Sequence__destroy(franka_msgs__msg__Elbow__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__msg__Elbow__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__msg__Elbow__Sequence__are_equal(const franka_msgs__msg__Elbow__Sequence * lhs, const franka_msgs__msg__Elbow__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__msg__Elbow__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__Elbow__Sequence__copy(
  const franka_msgs__msg__Elbow__Sequence * input,
  franka_msgs__msg__Elbow__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__msg__Elbow);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__msg__Elbow * data =
      (franka_msgs__msg__Elbow *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__msg__Elbow__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__msg__Elbow__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__msg__Elbow__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
