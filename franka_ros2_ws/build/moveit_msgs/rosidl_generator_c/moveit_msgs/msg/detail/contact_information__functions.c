// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/ContactInformation.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/contact_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `normal`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `contact_body_1`
// Member `contact_body_2`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__ContactInformation__init(moveit_msgs__msg__ContactInformation * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__init(&msg->normal)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // depth
  // contact_body_1
  if (!rosidl_runtime_c__String__init(&msg->contact_body_1)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // body_type_1
  // contact_body_2
  if (!rosidl_runtime_c__String__init(&msg->contact_body_2)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // body_type_2
  return true;
}

void
moveit_msgs__msg__ContactInformation__fini(moveit_msgs__msg__ContactInformation * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // normal
  geometry_msgs__msg__Vector3__fini(&msg->normal);
  // depth
  // contact_body_1
  rosidl_runtime_c__String__fini(&msg->contact_body_1);
  // body_type_1
  // contact_body_2
  rosidl_runtime_c__String__fini(&msg->contact_body_2);
  // body_type_2
}

bool
moveit_msgs__msg__ContactInformation__are_equal(const moveit_msgs__msg__ContactInformation * lhs, const moveit_msgs__msg__ContactInformation * rhs)
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
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->normal), &(rhs->normal)))
  {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  // contact_body_1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->contact_body_1), &(rhs->contact_body_1)))
  {
    return false;
  }
  // body_type_1
  if (lhs->body_type_1 != rhs->body_type_1) {
    return false;
  }
  // contact_body_2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->contact_body_2), &(rhs->contact_body_2)))
  {
    return false;
  }
  // body_type_2
  if (lhs->body_type_2 != rhs->body_type_2) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__ContactInformation__copy(
  const moveit_msgs__msg__ContactInformation * input,
  moveit_msgs__msg__ContactInformation * output)
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
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->normal), &(output->normal)))
  {
    return false;
  }
  // depth
  output->depth = input->depth;
  // contact_body_1
  if (!rosidl_runtime_c__String__copy(
      &(input->contact_body_1), &(output->contact_body_1)))
  {
    return false;
  }
  // body_type_1
  output->body_type_1 = input->body_type_1;
  // contact_body_2
  if (!rosidl_runtime_c__String__copy(
      &(input->contact_body_2), &(output->contact_body_2)))
  {
    return false;
  }
  // body_type_2
  output->body_type_2 = input->body_type_2;
  return true;
}

moveit_msgs__msg__ContactInformation *
moveit_msgs__msg__ContactInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__ContactInformation * msg = (moveit_msgs__msg__ContactInformation *)allocator.allocate(sizeof(moveit_msgs__msg__ContactInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__ContactInformation));
  bool success = moveit_msgs__msg__ContactInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__ContactInformation__destroy(moveit_msgs__msg__ContactInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__ContactInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__ContactInformation__Sequence__init(moveit_msgs__msg__ContactInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__ContactInformation * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__ContactInformation *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__ContactInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__ContactInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__ContactInformation__fini(&data[i - 1]);
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
moveit_msgs__msg__ContactInformation__Sequence__fini(moveit_msgs__msg__ContactInformation__Sequence * array)
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
      moveit_msgs__msg__ContactInformation__fini(&array->data[i]);
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

moveit_msgs__msg__ContactInformation__Sequence *
moveit_msgs__msg__ContactInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__ContactInformation__Sequence * array = (moveit_msgs__msg__ContactInformation__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__ContactInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__ContactInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__ContactInformation__Sequence__destroy(moveit_msgs__msg__ContactInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__ContactInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__ContactInformation__Sequence__are_equal(const moveit_msgs__msg__ContactInformation__Sequence * lhs, const moveit_msgs__msg__ContactInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__ContactInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__ContactInformation__Sequence__copy(
  const moveit_msgs__msg__ContactInformation__Sequence * input,
  moveit_msgs__msg__ContactInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__ContactInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__ContactInformation * data =
      (moveit_msgs__msg__ContactInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__ContactInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__ContactInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__ContactInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
