// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/allowed_collision_matrix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `entry_names`
// Member `default_entry_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `entry_values`
#include "moveit_msgs/msg/detail/allowed_collision_entry__functions.h"
// Member `default_entry_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
moveit_msgs__msg__AllowedCollisionMatrix__init(moveit_msgs__msg__AllowedCollisionMatrix * msg)
{
  if (!msg) {
    return false;
  }
  // entry_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->entry_names, 0)) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
    return false;
  }
  // entry_values
  if (!moveit_msgs__msg__AllowedCollisionEntry__Sequence__init(&msg->entry_values, 0)) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
    return false;
  }
  // default_entry_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->default_entry_names, 0)) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
    return false;
  }
  // default_entry_values
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->default_entry_values, 0)) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__AllowedCollisionMatrix__fini(moveit_msgs__msg__AllowedCollisionMatrix * msg)
{
  if (!msg) {
    return;
  }
  // entry_names
  rosidl_runtime_c__String__Sequence__fini(&msg->entry_names);
  // entry_values
  moveit_msgs__msg__AllowedCollisionEntry__Sequence__fini(&msg->entry_values);
  // default_entry_names
  rosidl_runtime_c__String__Sequence__fini(&msg->default_entry_names);
  // default_entry_values
  rosidl_runtime_c__boolean__Sequence__fini(&msg->default_entry_values);
}

bool
moveit_msgs__msg__AllowedCollisionMatrix__are_equal(const moveit_msgs__msg__AllowedCollisionMatrix * lhs, const moveit_msgs__msg__AllowedCollisionMatrix * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // entry_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->entry_names), &(rhs->entry_names)))
  {
    return false;
  }
  // entry_values
  if (!moveit_msgs__msg__AllowedCollisionEntry__Sequence__are_equal(
      &(lhs->entry_values), &(rhs->entry_values)))
  {
    return false;
  }
  // default_entry_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->default_entry_names), &(rhs->default_entry_names)))
  {
    return false;
  }
  // default_entry_values
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->default_entry_values), &(rhs->default_entry_values)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__AllowedCollisionMatrix__copy(
  const moveit_msgs__msg__AllowedCollisionMatrix * input,
  moveit_msgs__msg__AllowedCollisionMatrix * output)
{
  if (!input || !output) {
    return false;
  }
  // entry_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->entry_names), &(output->entry_names)))
  {
    return false;
  }
  // entry_values
  if (!moveit_msgs__msg__AllowedCollisionEntry__Sequence__copy(
      &(input->entry_values), &(output->entry_values)))
  {
    return false;
  }
  // default_entry_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->default_entry_names), &(output->default_entry_names)))
  {
    return false;
  }
  // default_entry_values
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->default_entry_values), &(output->default_entry_values)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__AllowedCollisionMatrix *
moveit_msgs__msg__AllowedCollisionMatrix__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__AllowedCollisionMatrix * msg = (moveit_msgs__msg__AllowedCollisionMatrix *)allocator.allocate(sizeof(moveit_msgs__msg__AllowedCollisionMatrix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__AllowedCollisionMatrix));
  bool success = moveit_msgs__msg__AllowedCollisionMatrix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__AllowedCollisionMatrix__destroy(moveit_msgs__msg__AllowedCollisionMatrix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__init(moveit_msgs__msg__AllowedCollisionMatrix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__AllowedCollisionMatrix * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__AllowedCollisionMatrix *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__AllowedCollisionMatrix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__AllowedCollisionMatrix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__AllowedCollisionMatrix__fini(&data[i - 1]);
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
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__fini(moveit_msgs__msg__AllowedCollisionMatrix__Sequence * array)
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
      moveit_msgs__msg__AllowedCollisionMatrix__fini(&array->data[i]);
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

moveit_msgs__msg__AllowedCollisionMatrix__Sequence *
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__AllowedCollisionMatrix__Sequence * array = (moveit_msgs__msg__AllowedCollisionMatrix__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__AllowedCollisionMatrix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__AllowedCollisionMatrix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__destroy(moveit_msgs__msg__AllowedCollisionMatrix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__AllowedCollisionMatrix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__are_equal(const moveit_msgs__msg__AllowedCollisionMatrix__Sequence * lhs, const moveit_msgs__msg__AllowedCollisionMatrix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__AllowedCollisionMatrix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__copy(
  const moveit_msgs__msg__AllowedCollisionMatrix__Sequence * input,
  moveit_msgs__msg__AllowedCollisionMatrix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__AllowedCollisionMatrix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__AllowedCollisionMatrix * data =
      (moveit_msgs__msg__AllowedCollisionMatrix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__AllowedCollisionMatrix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__AllowedCollisionMatrix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__AllowedCollisionMatrix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
