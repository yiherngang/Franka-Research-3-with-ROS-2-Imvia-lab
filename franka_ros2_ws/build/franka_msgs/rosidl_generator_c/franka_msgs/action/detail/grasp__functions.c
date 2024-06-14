// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:action/Grasp.idl
// generated code does not contain a copyright notice
#include "franka_msgs/action/detail/grasp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `epsilon`
#include "franka_msgs/msg/detail/grasp_epsilon__functions.h"

bool
franka_msgs__action__Grasp_Goal__init(franka_msgs__action__Grasp_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // width
  // epsilon
  if (!franka_msgs__msg__GraspEpsilon__init(&msg->epsilon)) {
    franka_msgs__action__Grasp_Goal__fini(msg);
    return false;
  }
  // speed
  // force
  return true;
}

void
franka_msgs__action__Grasp_Goal__fini(franka_msgs__action__Grasp_Goal * msg)
{
  if (!msg) {
    return;
  }
  // width
  // epsilon
  franka_msgs__msg__GraspEpsilon__fini(&msg->epsilon);
  // speed
  // force
}

bool
franka_msgs__action__Grasp_Goal__are_equal(const franka_msgs__action__Grasp_Goal * lhs, const franka_msgs__action__Grasp_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // epsilon
  if (!franka_msgs__msg__GraspEpsilon__are_equal(
      &(lhs->epsilon), &(rhs->epsilon)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  return true;
}

bool
franka_msgs__action__Grasp_Goal__copy(
  const franka_msgs__action__Grasp_Goal * input,
  franka_msgs__action__Grasp_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // epsilon
  if (!franka_msgs__msg__GraspEpsilon__copy(
      &(input->epsilon), &(output->epsilon)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // force
  output->force = input->force;
  return true;
}

franka_msgs__action__Grasp_Goal *
franka_msgs__action__Grasp_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Goal * msg = (franka_msgs__action__Grasp_Goal *)allocator.allocate(sizeof(franka_msgs__action__Grasp_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__action__Grasp_Goal));
  bool success = franka_msgs__action__Grasp_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__action__Grasp_Goal__destroy(franka_msgs__action__Grasp_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__action__Grasp_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__action__Grasp_Goal__Sequence__init(franka_msgs__action__Grasp_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Goal * data = NULL;

  if (size) {
    data = (franka_msgs__action__Grasp_Goal *)allocator.zero_allocate(size, sizeof(franka_msgs__action__Grasp_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__action__Grasp_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__action__Grasp_Goal__fini(&data[i - 1]);
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
franka_msgs__action__Grasp_Goal__Sequence__fini(franka_msgs__action__Grasp_Goal__Sequence * array)
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
      franka_msgs__action__Grasp_Goal__fini(&array->data[i]);
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

franka_msgs__action__Grasp_Goal__Sequence *
franka_msgs__action__Grasp_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Goal__Sequence * array = (franka_msgs__action__Grasp_Goal__Sequence *)allocator.allocate(sizeof(franka_msgs__action__Grasp_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__action__Grasp_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__action__Grasp_Goal__Sequence__destroy(franka_msgs__action__Grasp_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__action__Grasp_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__action__Grasp_Goal__Sequence__are_equal(const franka_msgs__action__Grasp_Goal__Sequence * lhs, const franka_msgs__action__Grasp_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__action__Grasp_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__action__Grasp_Goal__Sequence__copy(
  const franka_msgs__action__Grasp_Goal__Sequence * input,
  franka_msgs__action__Grasp_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__action__Grasp_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__action__Grasp_Goal * data =
      (franka_msgs__action__Grasp_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__action__Grasp_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__action__Grasp_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__action__Grasp_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

bool
franka_msgs__action__Grasp_Result__init(franka_msgs__action__Grasp_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    franka_msgs__action__Grasp_Result__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__action__Grasp_Result__fini(franka_msgs__action__Grasp_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
franka_msgs__action__Grasp_Result__are_equal(const franka_msgs__action__Grasp_Result * lhs, const franka_msgs__action__Grasp_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__action__Grasp_Result__copy(
  const franka_msgs__action__Grasp_Result * input,
  franka_msgs__action__Grasp_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

franka_msgs__action__Grasp_Result *
franka_msgs__action__Grasp_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Result * msg = (franka_msgs__action__Grasp_Result *)allocator.allocate(sizeof(franka_msgs__action__Grasp_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__action__Grasp_Result));
  bool success = franka_msgs__action__Grasp_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__action__Grasp_Result__destroy(franka_msgs__action__Grasp_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__action__Grasp_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__action__Grasp_Result__Sequence__init(franka_msgs__action__Grasp_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Result * data = NULL;

  if (size) {
    data = (franka_msgs__action__Grasp_Result *)allocator.zero_allocate(size, sizeof(franka_msgs__action__Grasp_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__action__Grasp_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__action__Grasp_Result__fini(&data[i - 1]);
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
franka_msgs__action__Grasp_Result__Sequence__fini(franka_msgs__action__Grasp_Result__Sequence * array)
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
      franka_msgs__action__Grasp_Result__fini(&array->data[i]);
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

franka_msgs__action__Grasp_Result__Sequence *
franka_msgs__action__Grasp_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Result__Sequence * array = (franka_msgs__action__Grasp_Result__Sequence *)allocator.allocate(sizeof(franka_msgs__action__Grasp_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__action__Grasp_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__action__Grasp_Result__Sequence__destroy(franka_msgs__action__Grasp_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__action__Grasp_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__action__Grasp_Result__Sequence__are_equal(const franka_msgs__action__Grasp_Result__Sequence * lhs, const franka_msgs__action__Grasp_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__action__Grasp_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__action__Grasp_Result__Sequence__copy(
  const franka_msgs__action__Grasp_Result__Sequence * input,
  franka_msgs__action__Grasp_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__action__Grasp_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__action__Grasp_Result * data =
      (franka_msgs__action__Grasp_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__action__Grasp_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__action__Grasp_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__action__Grasp_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
franka_msgs__action__Grasp_Feedback__init(franka_msgs__action__Grasp_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_width
  return true;
}

void
franka_msgs__action__Grasp_Feedback__fini(franka_msgs__action__Grasp_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_width
}

bool
franka_msgs__action__Grasp_Feedback__are_equal(const franka_msgs__action__Grasp_Feedback * lhs, const franka_msgs__action__Grasp_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_width
  if (lhs->current_width != rhs->current_width) {
    return false;
  }
  return true;
}

bool
franka_msgs__action__Grasp_Feedback__copy(
  const franka_msgs__action__Grasp_Feedback * input,
  franka_msgs__action__Grasp_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_width
  output->current_width = input->current_width;
  return true;
}

franka_msgs__action__Grasp_Feedback *
franka_msgs__action__Grasp_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Feedback * msg = (franka_msgs__action__Grasp_Feedback *)allocator.allocate(sizeof(franka_msgs__action__Grasp_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__action__Grasp_Feedback));
  bool success = franka_msgs__action__Grasp_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__action__Grasp_Feedback__destroy(franka_msgs__action__Grasp_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__action__Grasp_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__action__Grasp_Feedback__Sequence__init(franka_msgs__action__Grasp_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Feedback * data = NULL;

  if (size) {
    data = (franka_msgs__action__Grasp_Feedback *)allocator.zero_allocate(size, sizeof(franka_msgs__action__Grasp_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__action__Grasp_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__action__Grasp_Feedback__fini(&data[i - 1]);
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
franka_msgs__action__Grasp_Feedback__Sequence__fini(franka_msgs__action__Grasp_Feedback__Sequence * array)
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
      franka_msgs__action__Grasp_Feedback__fini(&array->data[i]);
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

franka_msgs__action__Grasp_Feedback__Sequence *
franka_msgs__action__Grasp_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_Feedback__Sequence * array = (franka_msgs__action__Grasp_Feedback__Sequence *)allocator.allocate(sizeof(franka_msgs__action__Grasp_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__action__Grasp_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__action__Grasp_Feedback__Sequence__destroy(franka_msgs__action__Grasp_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__action__Grasp_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__action__Grasp_Feedback__Sequence__are_equal(const franka_msgs__action__Grasp_Feedback__Sequence * lhs, const franka_msgs__action__Grasp_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__action__Grasp_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__action__Grasp_Feedback__Sequence__copy(
  const franka_msgs__action__Grasp_Feedback__Sequence * input,
  franka_msgs__action__Grasp_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__action__Grasp_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__action__Grasp_Feedback * data =
      (franka_msgs__action__Grasp_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__action__Grasp_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__action__Grasp_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__action__Grasp_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "franka_msgs/action/detail/grasp__functions.h"

bool
franka_msgs__action__Grasp_SendGoal_Request__init(franka_msgs__action__Grasp_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    franka_msgs__action__Grasp_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!franka_msgs__action__Grasp_Goal__init(&msg->goal)) {
    franka_msgs__action__Grasp_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__action__Grasp_SendGoal_Request__fini(franka_msgs__action__Grasp_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  franka_msgs__action__Grasp_Goal__fini(&msg->goal);
}

bool
franka_msgs__action__Grasp_SendGoal_Request__are_equal(const franka_msgs__action__Grasp_SendGoal_Request * lhs, const franka_msgs__action__Grasp_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!franka_msgs__action__Grasp_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__action__Grasp_SendGoal_Request__copy(
  const franka_msgs__action__Grasp_SendGoal_Request * input,
  franka_msgs__action__Grasp_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!franka_msgs__action__Grasp_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

franka_msgs__action__Grasp_SendGoal_Request *
franka_msgs__action__Grasp_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_SendGoal_Request * msg = (franka_msgs__action__Grasp_SendGoal_Request *)allocator.allocate(sizeof(franka_msgs__action__Grasp_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__action__Grasp_SendGoal_Request));
  bool success = franka_msgs__action__Grasp_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__action__Grasp_SendGoal_Request__destroy(franka_msgs__action__Grasp_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__action__Grasp_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__action__Grasp_SendGoal_Request__Sequence__init(franka_msgs__action__Grasp_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_SendGoal_Request * data = NULL;

  if (size) {
    data = (franka_msgs__action__Grasp_SendGoal_Request *)allocator.zero_allocate(size, sizeof(franka_msgs__action__Grasp_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__action__Grasp_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__action__Grasp_SendGoal_Request__fini(&data[i - 1]);
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
franka_msgs__action__Grasp_SendGoal_Request__Sequence__fini(franka_msgs__action__Grasp_SendGoal_Request__Sequence * array)
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
      franka_msgs__action__Grasp_SendGoal_Request__fini(&array->data[i]);
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

franka_msgs__action__Grasp_SendGoal_Request__Sequence *
franka_msgs__action__Grasp_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_SendGoal_Request__Sequence * array = (franka_msgs__action__Grasp_SendGoal_Request__Sequence *)allocator.allocate(sizeof(franka_msgs__action__Grasp_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__action__Grasp_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__action__Grasp_SendGoal_Request__Sequence__destroy(franka_msgs__action__Grasp_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__action__Grasp_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__action__Grasp_SendGoal_Request__Sequence__are_equal(const franka_msgs__action__Grasp_SendGoal_Request__Sequence * lhs, const franka_msgs__action__Grasp_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__action__Grasp_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__action__Grasp_SendGoal_Request__Sequence__copy(
  const franka_msgs__action__Grasp_SendGoal_Request__Sequence * input,
  franka_msgs__action__Grasp_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__action__Grasp_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__action__Grasp_SendGoal_Request * data =
      (franka_msgs__action__Grasp_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__action__Grasp_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__action__Grasp_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__action__Grasp_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
franka_msgs__action__Grasp_SendGoal_Response__init(franka_msgs__action__Grasp_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    franka_msgs__action__Grasp_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__action__Grasp_SendGoal_Response__fini(franka_msgs__action__Grasp_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
franka_msgs__action__Grasp_SendGoal_Response__are_equal(const franka_msgs__action__Grasp_SendGoal_Response * lhs, const franka_msgs__action__Grasp_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__action__Grasp_SendGoal_Response__copy(
  const franka_msgs__action__Grasp_SendGoal_Response * input,
  franka_msgs__action__Grasp_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

franka_msgs__action__Grasp_SendGoal_Response *
franka_msgs__action__Grasp_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_SendGoal_Response * msg = (franka_msgs__action__Grasp_SendGoal_Response *)allocator.allocate(sizeof(franka_msgs__action__Grasp_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__action__Grasp_SendGoal_Response));
  bool success = franka_msgs__action__Grasp_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__action__Grasp_SendGoal_Response__destroy(franka_msgs__action__Grasp_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__action__Grasp_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__action__Grasp_SendGoal_Response__Sequence__init(franka_msgs__action__Grasp_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_SendGoal_Response * data = NULL;

  if (size) {
    data = (franka_msgs__action__Grasp_SendGoal_Response *)allocator.zero_allocate(size, sizeof(franka_msgs__action__Grasp_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__action__Grasp_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__action__Grasp_SendGoal_Response__fini(&data[i - 1]);
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
franka_msgs__action__Grasp_SendGoal_Response__Sequence__fini(franka_msgs__action__Grasp_SendGoal_Response__Sequence * array)
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
      franka_msgs__action__Grasp_SendGoal_Response__fini(&array->data[i]);
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

franka_msgs__action__Grasp_SendGoal_Response__Sequence *
franka_msgs__action__Grasp_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_SendGoal_Response__Sequence * array = (franka_msgs__action__Grasp_SendGoal_Response__Sequence *)allocator.allocate(sizeof(franka_msgs__action__Grasp_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__action__Grasp_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__action__Grasp_SendGoal_Response__Sequence__destroy(franka_msgs__action__Grasp_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__action__Grasp_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__action__Grasp_SendGoal_Response__Sequence__are_equal(const franka_msgs__action__Grasp_SendGoal_Response__Sequence * lhs, const franka_msgs__action__Grasp_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__action__Grasp_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__action__Grasp_SendGoal_Response__Sequence__copy(
  const franka_msgs__action__Grasp_SendGoal_Response__Sequence * input,
  franka_msgs__action__Grasp_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__action__Grasp_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__action__Grasp_SendGoal_Response * data =
      (franka_msgs__action__Grasp_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__action__Grasp_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__action__Grasp_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__action__Grasp_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
franka_msgs__action__Grasp_GetResult_Request__init(franka_msgs__action__Grasp_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    franka_msgs__action__Grasp_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__action__Grasp_GetResult_Request__fini(franka_msgs__action__Grasp_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
franka_msgs__action__Grasp_GetResult_Request__are_equal(const franka_msgs__action__Grasp_GetResult_Request * lhs, const franka_msgs__action__Grasp_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__action__Grasp_GetResult_Request__copy(
  const franka_msgs__action__Grasp_GetResult_Request * input,
  franka_msgs__action__Grasp_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

franka_msgs__action__Grasp_GetResult_Request *
franka_msgs__action__Grasp_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_GetResult_Request * msg = (franka_msgs__action__Grasp_GetResult_Request *)allocator.allocate(sizeof(franka_msgs__action__Grasp_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__action__Grasp_GetResult_Request));
  bool success = franka_msgs__action__Grasp_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__action__Grasp_GetResult_Request__destroy(franka_msgs__action__Grasp_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__action__Grasp_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__action__Grasp_GetResult_Request__Sequence__init(franka_msgs__action__Grasp_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_GetResult_Request * data = NULL;

  if (size) {
    data = (franka_msgs__action__Grasp_GetResult_Request *)allocator.zero_allocate(size, sizeof(franka_msgs__action__Grasp_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__action__Grasp_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__action__Grasp_GetResult_Request__fini(&data[i - 1]);
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
franka_msgs__action__Grasp_GetResult_Request__Sequence__fini(franka_msgs__action__Grasp_GetResult_Request__Sequence * array)
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
      franka_msgs__action__Grasp_GetResult_Request__fini(&array->data[i]);
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

franka_msgs__action__Grasp_GetResult_Request__Sequence *
franka_msgs__action__Grasp_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_GetResult_Request__Sequence * array = (franka_msgs__action__Grasp_GetResult_Request__Sequence *)allocator.allocate(sizeof(franka_msgs__action__Grasp_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__action__Grasp_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__action__Grasp_GetResult_Request__Sequence__destroy(franka_msgs__action__Grasp_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__action__Grasp_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__action__Grasp_GetResult_Request__Sequence__are_equal(const franka_msgs__action__Grasp_GetResult_Request__Sequence * lhs, const franka_msgs__action__Grasp_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__action__Grasp_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__action__Grasp_GetResult_Request__Sequence__copy(
  const franka_msgs__action__Grasp_GetResult_Request__Sequence * input,
  franka_msgs__action__Grasp_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__action__Grasp_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__action__Grasp_GetResult_Request * data =
      (franka_msgs__action__Grasp_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__action__Grasp_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__action__Grasp_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__action__Grasp_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "franka_msgs/action/detail/grasp__functions.h"

bool
franka_msgs__action__Grasp_GetResult_Response__init(franka_msgs__action__Grasp_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!franka_msgs__action__Grasp_Result__init(&msg->result)) {
    franka_msgs__action__Grasp_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__action__Grasp_GetResult_Response__fini(franka_msgs__action__Grasp_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  franka_msgs__action__Grasp_Result__fini(&msg->result);
}

bool
franka_msgs__action__Grasp_GetResult_Response__are_equal(const franka_msgs__action__Grasp_GetResult_Response * lhs, const franka_msgs__action__Grasp_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!franka_msgs__action__Grasp_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__action__Grasp_GetResult_Response__copy(
  const franka_msgs__action__Grasp_GetResult_Response * input,
  franka_msgs__action__Grasp_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!franka_msgs__action__Grasp_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

franka_msgs__action__Grasp_GetResult_Response *
franka_msgs__action__Grasp_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_GetResult_Response * msg = (franka_msgs__action__Grasp_GetResult_Response *)allocator.allocate(sizeof(franka_msgs__action__Grasp_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__action__Grasp_GetResult_Response));
  bool success = franka_msgs__action__Grasp_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__action__Grasp_GetResult_Response__destroy(franka_msgs__action__Grasp_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__action__Grasp_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__action__Grasp_GetResult_Response__Sequence__init(franka_msgs__action__Grasp_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_GetResult_Response * data = NULL;

  if (size) {
    data = (franka_msgs__action__Grasp_GetResult_Response *)allocator.zero_allocate(size, sizeof(franka_msgs__action__Grasp_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__action__Grasp_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__action__Grasp_GetResult_Response__fini(&data[i - 1]);
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
franka_msgs__action__Grasp_GetResult_Response__Sequence__fini(franka_msgs__action__Grasp_GetResult_Response__Sequence * array)
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
      franka_msgs__action__Grasp_GetResult_Response__fini(&array->data[i]);
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

franka_msgs__action__Grasp_GetResult_Response__Sequence *
franka_msgs__action__Grasp_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_GetResult_Response__Sequence * array = (franka_msgs__action__Grasp_GetResult_Response__Sequence *)allocator.allocate(sizeof(franka_msgs__action__Grasp_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__action__Grasp_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__action__Grasp_GetResult_Response__Sequence__destroy(franka_msgs__action__Grasp_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__action__Grasp_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__action__Grasp_GetResult_Response__Sequence__are_equal(const franka_msgs__action__Grasp_GetResult_Response__Sequence * lhs, const franka_msgs__action__Grasp_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__action__Grasp_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__action__Grasp_GetResult_Response__Sequence__copy(
  const franka_msgs__action__Grasp_GetResult_Response__Sequence * input,
  franka_msgs__action__Grasp_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__action__Grasp_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__action__Grasp_GetResult_Response * data =
      (franka_msgs__action__Grasp_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__action__Grasp_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__action__Grasp_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__action__Grasp_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "franka_msgs/action/detail/grasp__functions.h"

bool
franka_msgs__action__Grasp_FeedbackMessage__init(franka_msgs__action__Grasp_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    franka_msgs__action__Grasp_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!franka_msgs__action__Grasp_Feedback__init(&msg->feedback)) {
    franka_msgs__action__Grasp_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__action__Grasp_FeedbackMessage__fini(franka_msgs__action__Grasp_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  franka_msgs__action__Grasp_Feedback__fini(&msg->feedback);
}

bool
franka_msgs__action__Grasp_FeedbackMessage__are_equal(const franka_msgs__action__Grasp_FeedbackMessage * lhs, const franka_msgs__action__Grasp_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!franka_msgs__action__Grasp_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__action__Grasp_FeedbackMessage__copy(
  const franka_msgs__action__Grasp_FeedbackMessage * input,
  franka_msgs__action__Grasp_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!franka_msgs__action__Grasp_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

franka_msgs__action__Grasp_FeedbackMessage *
franka_msgs__action__Grasp_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_FeedbackMessage * msg = (franka_msgs__action__Grasp_FeedbackMessage *)allocator.allocate(sizeof(franka_msgs__action__Grasp_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__action__Grasp_FeedbackMessage));
  bool success = franka_msgs__action__Grasp_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__action__Grasp_FeedbackMessage__destroy(franka_msgs__action__Grasp_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__action__Grasp_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__action__Grasp_FeedbackMessage__Sequence__init(franka_msgs__action__Grasp_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_FeedbackMessage * data = NULL;

  if (size) {
    data = (franka_msgs__action__Grasp_FeedbackMessage *)allocator.zero_allocate(size, sizeof(franka_msgs__action__Grasp_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__action__Grasp_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__action__Grasp_FeedbackMessage__fini(&data[i - 1]);
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
franka_msgs__action__Grasp_FeedbackMessage__Sequence__fini(franka_msgs__action__Grasp_FeedbackMessage__Sequence * array)
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
      franka_msgs__action__Grasp_FeedbackMessage__fini(&array->data[i]);
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

franka_msgs__action__Grasp_FeedbackMessage__Sequence *
franka_msgs__action__Grasp_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__action__Grasp_FeedbackMessage__Sequence * array = (franka_msgs__action__Grasp_FeedbackMessage__Sequence *)allocator.allocate(sizeof(franka_msgs__action__Grasp_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__action__Grasp_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__action__Grasp_FeedbackMessage__Sequence__destroy(franka_msgs__action__Grasp_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__action__Grasp_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__action__Grasp_FeedbackMessage__Sequence__are_equal(const franka_msgs__action__Grasp_FeedbackMessage__Sequence * lhs, const franka_msgs__action__Grasp_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__action__Grasp_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__action__Grasp_FeedbackMessage__Sequence__copy(
  const franka_msgs__action__Grasp_FeedbackMessage__Sequence * input,
  franka_msgs__action__Grasp_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__action__Grasp_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__action__Grasp_FeedbackMessage * data =
      (franka_msgs__action__Grasp_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__action__Grasp_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__action__Grasp_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__action__Grasp_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
