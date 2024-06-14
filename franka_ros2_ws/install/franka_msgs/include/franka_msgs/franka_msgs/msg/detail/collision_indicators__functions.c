// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/collision_indicators__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `is_cartesian_linear_collision`
// Member `is_cartesian_angular_collision`
// Member `is_cartesian_linear_contact`
// Member `is_cartesian_angular_contact`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
franka_msgs__msg__CollisionIndicators__init(franka_msgs__msg__CollisionIndicators * msg)
{
  if (!msg) {
    return false;
  }
  // is_cartesian_linear_collision
  if (!geometry_msgs__msg__Vector3__init(&msg->is_cartesian_linear_collision)) {
    franka_msgs__msg__CollisionIndicators__fini(msg);
    return false;
  }
  // is_cartesian_angular_collision
  if (!geometry_msgs__msg__Vector3__init(&msg->is_cartesian_angular_collision)) {
    franka_msgs__msg__CollisionIndicators__fini(msg);
    return false;
  }
  // is_cartesian_linear_contact
  if (!geometry_msgs__msg__Vector3__init(&msg->is_cartesian_linear_contact)) {
    franka_msgs__msg__CollisionIndicators__fini(msg);
    return false;
  }
  // is_cartesian_angular_contact
  if (!geometry_msgs__msg__Vector3__init(&msg->is_cartesian_angular_contact)) {
    franka_msgs__msg__CollisionIndicators__fini(msg);
    return false;
  }
  // is_joint_collision
  // is_joint_contact
  return true;
}

void
franka_msgs__msg__CollisionIndicators__fini(franka_msgs__msg__CollisionIndicators * msg)
{
  if (!msg) {
    return;
  }
  // is_cartesian_linear_collision
  geometry_msgs__msg__Vector3__fini(&msg->is_cartesian_linear_collision);
  // is_cartesian_angular_collision
  geometry_msgs__msg__Vector3__fini(&msg->is_cartesian_angular_collision);
  // is_cartesian_linear_contact
  geometry_msgs__msg__Vector3__fini(&msg->is_cartesian_linear_contact);
  // is_cartesian_angular_contact
  geometry_msgs__msg__Vector3__fini(&msg->is_cartesian_angular_contact);
  // is_joint_collision
  // is_joint_contact
}

bool
franka_msgs__msg__CollisionIndicators__are_equal(const franka_msgs__msg__CollisionIndicators * lhs, const franka_msgs__msg__CollisionIndicators * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_cartesian_linear_collision
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->is_cartesian_linear_collision), &(rhs->is_cartesian_linear_collision)))
  {
    return false;
  }
  // is_cartesian_angular_collision
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->is_cartesian_angular_collision), &(rhs->is_cartesian_angular_collision)))
  {
    return false;
  }
  // is_cartesian_linear_contact
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->is_cartesian_linear_contact), &(rhs->is_cartesian_linear_contact)))
  {
    return false;
  }
  // is_cartesian_angular_contact
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->is_cartesian_angular_contact), &(rhs->is_cartesian_angular_contact)))
  {
    return false;
  }
  // is_joint_collision
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->is_joint_collision[i] != rhs->is_joint_collision[i]) {
      return false;
    }
  }
  // is_joint_contact
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->is_joint_contact[i] != rhs->is_joint_contact[i]) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__CollisionIndicators__copy(
  const franka_msgs__msg__CollisionIndicators * input,
  franka_msgs__msg__CollisionIndicators * output)
{
  if (!input || !output) {
    return false;
  }
  // is_cartesian_linear_collision
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->is_cartesian_linear_collision), &(output->is_cartesian_linear_collision)))
  {
    return false;
  }
  // is_cartesian_angular_collision
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->is_cartesian_angular_collision), &(output->is_cartesian_angular_collision)))
  {
    return false;
  }
  // is_cartesian_linear_contact
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->is_cartesian_linear_contact), &(output->is_cartesian_linear_contact)))
  {
    return false;
  }
  // is_cartesian_angular_contact
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->is_cartesian_angular_contact), &(output->is_cartesian_angular_contact)))
  {
    return false;
  }
  // is_joint_collision
  for (size_t i = 0; i < 7; ++i) {
    output->is_joint_collision[i] = input->is_joint_collision[i];
  }
  // is_joint_contact
  for (size_t i = 0; i < 7; ++i) {
    output->is_joint_contact[i] = input->is_joint_contact[i];
  }
  return true;
}

franka_msgs__msg__CollisionIndicators *
franka_msgs__msg__CollisionIndicators__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__CollisionIndicators * msg = (franka_msgs__msg__CollisionIndicators *)allocator.allocate(sizeof(franka_msgs__msg__CollisionIndicators), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__msg__CollisionIndicators));
  bool success = franka_msgs__msg__CollisionIndicators__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__msg__CollisionIndicators__destroy(franka_msgs__msg__CollisionIndicators * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__msg__CollisionIndicators__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__msg__CollisionIndicators__Sequence__init(franka_msgs__msg__CollisionIndicators__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__CollisionIndicators * data = NULL;

  if (size) {
    data = (franka_msgs__msg__CollisionIndicators *)allocator.zero_allocate(size, sizeof(franka_msgs__msg__CollisionIndicators), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__msg__CollisionIndicators__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__msg__CollisionIndicators__fini(&data[i - 1]);
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
franka_msgs__msg__CollisionIndicators__Sequence__fini(franka_msgs__msg__CollisionIndicators__Sequence * array)
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
      franka_msgs__msg__CollisionIndicators__fini(&array->data[i]);
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

franka_msgs__msg__CollisionIndicators__Sequence *
franka_msgs__msg__CollisionIndicators__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__CollisionIndicators__Sequence * array = (franka_msgs__msg__CollisionIndicators__Sequence *)allocator.allocate(sizeof(franka_msgs__msg__CollisionIndicators__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__msg__CollisionIndicators__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__msg__CollisionIndicators__Sequence__destroy(franka_msgs__msg__CollisionIndicators__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__msg__CollisionIndicators__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__msg__CollisionIndicators__Sequence__are_equal(const franka_msgs__msg__CollisionIndicators__Sequence * lhs, const franka_msgs__msg__CollisionIndicators__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__msg__CollisionIndicators__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__CollisionIndicators__Sequence__copy(
  const franka_msgs__msg__CollisionIndicators__Sequence * input,
  franka_msgs__msg__CollisionIndicators__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__msg__CollisionIndicators);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__msg__CollisionIndicators * data =
      (franka_msgs__msg__CollisionIndicators *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__msg__CollisionIndicators__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__msg__CollisionIndicators__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__msg__CollisionIndicators__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
