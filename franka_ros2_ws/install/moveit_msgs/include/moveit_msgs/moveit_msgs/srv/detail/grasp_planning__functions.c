// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/grasp_planning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `group_name`
// Member `support_surfaces`
#include "rosidl_runtime_c/string_functions.h"
// Member `target`
// Member `movable_obstacles`
#include "moveit_msgs/msg/detail/collision_object__functions.h"
// Member `candidate_grasps`
#include "moveit_msgs/msg/detail/grasp__functions.h"

bool
moveit_msgs__srv__GraspPlanning_Request__init(moveit_msgs__srv__GraspPlanning_Request * msg)
{
  if (!msg) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  // target
  if (!moveit_msgs__msg__CollisionObject__init(&msg->target)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  // support_surfaces
  if (!rosidl_runtime_c__String__Sequence__init(&msg->support_surfaces, 0)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  // candidate_grasps
  if (!moveit_msgs__msg__Grasp__Sequence__init(&msg->candidate_grasps, 0)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  // movable_obstacles
  if (!moveit_msgs__msg__CollisionObject__Sequence__init(&msg->movable_obstacles, 0)) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GraspPlanning_Request__fini(moveit_msgs__srv__GraspPlanning_Request * msg)
{
  if (!msg) {
    return;
  }
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // target
  moveit_msgs__msg__CollisionObject__fini(&msg->target);
  // support_surfaces
  rosidl_runtime_c__String__Sequence__fini(&msg->support_surfaces);
  // candidate_grasps
  moveit_msgs__msg__Grasp__Sequence__fini(&msg->candidate_grasps);
  // movable_obstacles
  moveit_msgs__msg__CollisionObject__Sequence__fini(&msg->movable_obstacles);
}

bool
moveit_msgs__srv__GraspPlanning_Request__are_equal(const moveit_msgs__srv__GraspPlanning_Request * lhs, const moveit_msgs__srv__GraspPlanning_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
    return false;
  }
  // target
  if (!moveit_msgs__msg__CollisionObject__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // support_surfaces
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->support_surfaces), &(rhs->support_surfaces)))
  {
    return false;
  }
  // candidate_grasps
  if (!moveit_msgs__msg__Grasp__Sequence__are_equal(
      &(lhs->candidate_grasps), &(rhs->candidate_grasps)))
  {
    return false;
  }
  // movable_obstacles
  if (!moveit_msgs__msg__CollisionObject__Sequence__are_equal(
      &(lhs->movable_obstacles), &(rhs->movable_obstacles)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GraspPlanning_Request__copy(
  const moveit_msgs__srv__GraspPlanning_Request * input,
  moveit_msgs__srv__GraspPlanning_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
    return false;
  }
  // target
  if (!moveit_msgs__msg__CollisionObject__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // support_surfaces
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->support_surfaces), &(output->support_surfaces)))
  {
    return false;
  }
  // candidate_grasps
  if (!moveit_msgs__msg__Grasp__Sequence__copy(
      &(input->candidate_grasps), &(output->candidate_grasps)))
  {
    return false;
  }
  // movable_obstacles
  if (!moveit_msgs__msg__CollisionObject__Sequence__copy(
      &(input->movable_obstacles), &(output->movable_obstacles)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GraspPlanning_Request *
moveit_msgs__srv__GraspPlanning_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GraspPlanning_Request * msg = (moveit_msgs__srv__GraspPlanning_Request *)allocator.allocate(sizeof(moveit_msgs__srv__GraspPlanning_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GraspPlanning_Request));
  bool success = moveit_msgs__srv__GraspPlanning_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GraspPlanning_Request__destroy(moveit_msgs__srv__GraspPlanning_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__GraspPlanning_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__GraspPlanning_Request__Sequence__init(moveit_msgs__srv__GraspPlanning_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GraspPlanning_Request * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__GraspPlanning_Request *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__GraspPlanning_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GraspPlanning_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GraspPlanning_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GraspPlanning_Request__Sequence__fini(moveit_msgs__srv__GraspPlanning_Request__Sequence * array)
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
      moveit_msgs__srv__GraspPlanning_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GraspPlanning_Request__Sequence *
moveit_msgs__srv__GraspPlanning_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GraspPlanning_Request__Sequence * array = (moveit_msgs__srv__GraspPlanning_Request__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__GraspPlanning_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GraspPlanning_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GraspPlanning_Request__Sequence__destroy(moveit_msgs__srv__GraspPlanning_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__GraspPlanning_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__GraspPlanning_Request__Sequence__are_equal(const moveit_msgs__srv__GraspPlanning_Request__Sequence * lhs, const moveit_msgs__srv__GraspPlanning_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GraspPlanning_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GraspPlanning_Request__Sequence__copy(
  const moveit_msgs__srv__GraspPlanning_Request__Sequence * input,
  moveit_msgs__srv__GraspPlanning_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GraspPlanning_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__GraspPlanning_Request * data =
      (moveit_msgs__srv__GraspPlanning_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GraspPlanning_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GraspPlanning_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__GraspPlanning_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `grasps`
// already included above
// #include "moveit_msgs/msg/detail/grasp__functions.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__srv__GraspPlanning_Response__init(moveit_msgs__srv__GraspPlanning_Response * msg)
{
  if (!msg) {
    return false;
  }
  // grasps
  if (!moveit_msgs__msg__Grasp__Sequence__init(&msg->grasps, 0)) {
    moveit_msgs__srv__GraspPlanning_Response__fini(msg);
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__srv__GraspPlanning_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GraspPlanning_Response__fini(moveit_msgs__srv__GraspPlanning_Response * msg)
{
  if (!msg) {
    return;
  }
  // grasps
  moveit_msgs__msg__Grasp__Sequence__fini(&msg->grasps);
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

bool
moveit_msgs__srv__GraspPlanning_Response__are_equal(const moveit_msgs__srv__GraspPlanning_Response * lhs, const moveit_msgs__srv__GraspPlanning_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // grasps
  if (!moveit_msgs__msg__Grasp__Sequence__are_equal(
      &(lhs->grasps), &(rhs->grasps)))
  {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GraspPlanning_Response__copy(
  const moveit_msgs__srv__GraspPlanning_Response * input,
  moveit_msgs__srv__GraspPlanning_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // grasps
  if (!moveit_msgs__msg__Grasp__Sequence__copy(
      &(input->grasps), &(output->grasps)))
  {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GraspPlanning_Response *
moveit_msgs__srv__GraspPlanning_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GraspPlanning_Response * msg = (moveit_msgs__srv__GraspPlanning_Response *)allocator.allocate(sizeof(moveit_msgs__srv__GraspPlanning_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GraspPlanning_Response));
  bool success = moveit_msgs__srv__GraspPlanning_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GraspPlanning_Response__destroy(moveit_msgs__srv__GraspPlanning_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__GraspPlanning_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__GraspPlanning_Response__Sequence__init(moveit_msgs__srv__GraspPlanning_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GraspPlanning_Response * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__GraspPlanning_Response *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__GraspPlanning_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GraspPlanning_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GraspPlanning_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GraspPlanning_Response__Sequence__fini(moveit_msgs__srv__GraspPlanning_Response__Sequence * array)
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
      moveit_msgs__srv__GraspPlanning_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GraspPlanning_Response__Sequence *
moveit_msgs__srv__GraspPlanning_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GraspPlanning_Response__Sequence * array = (moveit_msgs__srv__GraspPlanning_Response__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__GraspPlanning_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GraspPlanning_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GraspPlanning_Response__Sequence__destroy(moveit_msgs__srv__GraspPlanning_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__GraspPlanning_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__GraspPlanning_Response__Sequence__are_equal(const moveit_msgs__srv__GraspPlanning_Response__Sequence * lhs, const moveit_msgs__srv__GraspPlanning_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GraspPlanning_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GraspPlanning_Response__Sequence__copy(
  const moveit_msgs__srv__GraspPlanning_Response__Sequence * input,
  moveit_msgs__srv__GraspPlanning_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GraspPlanning_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__GraspPlanning_Response * data =
      (moveit_msgs__srv__GraspPlanning_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GraspPlanning_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GraspPlanning_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__GraspPlanning_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
