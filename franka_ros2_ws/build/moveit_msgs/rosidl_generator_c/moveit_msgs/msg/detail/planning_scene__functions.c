// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_scene__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `robot_model_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `fixed_frame_transforms`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `allowed_collision_matrix`
#include "moveit_msgs/msg/detail/allowed_collision_matrix__functions.h"
// Member `link_padding`
#include "moveit_msgs/msg/detail/link_padding__functions.h"
// Member `link_scale`
#include "moveit_msgs/msg/detail/link_scale__functions.h"
// Member `object_colors`
#include "moveit_msgs/msg/detail/object_color__functions.h"
// Member `world`
#include "moveit_msgs/msg/detail/planning_scene_world__functions.h"

bool
moveit_msgs__msg__PlanningScene__init(moveit_msgs__msg__PlanningScene * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__init(&msg->robot_state)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // robot_model_name
  if (!rosidl_runtime_c__String__init(&msg->robot_model_name)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // fixed_frame_transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__init(&msg->fixed_frame_transforms, 0)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // allowed_collision_matrix
  if (!moveit_msgs__msg__AllowedCollisionMatrix__init(&msg->allowed_collision_matrix)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // link_padding
  if (!moveit_msgs__msg__LinkPadding__Sequence__init(&msg->link_padding, 0)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // link_scale
  if (!moveit_msgs__msg__LinkScale__Sequence__init(&msg->link_scale, 0)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // object_colors
  if (!moveit_msgs__msg__ObjectColor__Sequence__init(&msg->object_colors, 0)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // world
  if (!moveit_msgs__msg__PlanningSceneWorld__init(&msg->world)) {
    moveit_msgs__msg__PlanningScene__fini(msg);
    return false;
  }
  // is_diff
  return true;
}

void
moveit_msgs__msg__PlanningScene__fini(moveit_msgs__msg__PlanningScene * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // robot_state
  moveit_msgs__msg__RobotState__fini(&msg->robot_state);
  // robot_model_name
  rosidl_runtime_c__String__fini(&msg->robot_model_name);
  // fixed_frame_transforms
  geometry_msgs__msg__TransformStamped__Sequence__fini(&msg->fixed_frame_transforms);
  // allowed_collision_matrix
  moveit_msgs__msg__AllowedCollisionMatrix__fini(&msg->allowed_collision_matrix);
  // link_padding
  moveit_msgs__msg__LinkPadding__Sequence__fini(&msg->link_padding);
  // link_scale
  moveit_msgs__msg__LinkScale__Sequence__fini(&msg->link_scale);
  // object_colors
  moveit_msgs__msg__ObjectColor__Sequence__fini(&msg->object_colors);
  // world
  moveit_msgs__msg__PlanningSceneWorld__fini(&msg->world);
  // is_diff
}

bool
moveit_msgs__msg__PlanningScene__are_equal(const moveit_msgs__msg__PlanningScene * lhs, const moveit_msgs__msg__PlanningScene * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->robot_state), &(rhs->robot_state)))
  {
    return false;
  }
  // robot_model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_model_name), &(rhs->robot_model_name)))
  {
    return false;
  }
  // fixed_frame_transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__are_equal(
      &(lhs->fixed_frame_transforms), &(rhs->fixed_frame_transforms)))
  {
    return false;
  }
  // allowed_collision_matrix
  if (!moveit_msgs__msg__AllowedCollisionMatrix__are_equal(
      &(lhs->allowed_collision_matrix), &(rhs->allowed_collision_matrix)))
  {
    return false;
  }
  // link_padding
  if (!moveit_msgs__msg__LinkPadding__Sequence__are_equal(
      &(lhs->link_padding), &(rhs->link_padding)))
  {
    return false;
  }
  // link_scale
  if (!moveit_msgs__msg__LinkScale__Sequence__are_equal(
      &(lhs->link_scale), &(rhs->link_scale)))
  {
    return false;
  }
  // object_colors
  if (!moveit_msgs__msg__ObjectColor__Sequence__are_equal(
      &(lhs->object_colors), &(rhs->object_colors)))
  {
    return false;
  }
  // world
  if (!moveit_msgs__msg__PlanningSceneWorld__are_equal(
      &(lhs->world), &(rhs->world)))
  {
    return false;
  }
  // is_diff
  if (lhs->is_diff != rhs->is_diff) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__PlanningScene__copy(
  const moveit_msgs__msg__PlanningScene * input,
  moveit_msgs__msg__PlanningScene * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->robot_state), &(output->robot_state)))
  {
    return false;
  }
  // robot_model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_model_name), &(output->robot_model_name)))
  {
    return false;
  }
  // fixed_frame_transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__copy(
      &(input->fixed_frame_transforms), &(output->fixed_frame_transforms)))
  {
    return false;
  }
  // allowed_collision_matrix
  if (!moveit_msgs__msg__AllowedCollisionMatrix__copy(
      &(input->allowed_collision_matrix), &(output->allowed_collision_matrix)))
  {
    return false;
  }
  // link_padding
  if (!moveit_msgs__msg__LinkPadding__Sequence__copy(
      &(input->link_padding), &(output->link_padding)))
  {
    return false;
  }
  // link_scale
  if (!moveit_msgs__msg__LinkScale__Sequence__copy(
      &(input->link_scale), &(output->link_scale)))
  {
    return false;
  }
  // object_colors
  if (!moveit_msgs__msg__ObjectColor__Sequence__copy(
      &(input->object_colors), &(output->object_colors)))
  {
    return false;
  }
  // world
  if (!moveit_msgs__msg__PlanningSceneWorld__copy(
      &(input->world), &(output->world)))
  {
    return false;
  }
  // is_diff
  output->is_diff = input->is_diff;
  return true;
}

moveit_msgs__msg__PlanningScene *
moveit_msgs__msg__PlanningScene__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningScene * msg = (moveit_msgs__msg__PlanningScene *)allocator.allocate(sizeof(moveit_msgs__msg__PlanningScene), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlanningScene));
  bool success = moveit_msgs__msg__PlanningScene__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlanningScene__destroy(moveit_msgs__msg__PlanningScene * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__PlanningScene__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__PlanningScene__Sequence__init(moveit_msgs__msg__PlanningScene__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningScene * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__PlanningScene *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__PlanningScene), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlanningScene__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlanningScene__fini(&data[i - 1]);
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
moveit_msgs__msg__PlanningScene__Sequence__fini(moveit_msgs__msg__PlanningScene__Sequence * array)
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
      moveit_msgs__msg__PlanningScene__fini(&array->data[i]);
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

moveit_msgs__msg__PlanningScene__Sequence *
moveit_msgs__msg__PlanningScene__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningScene__Sequence * array = (moveit_msgs__msg__PlanningScene__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__PlanningScene__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlanningScene__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlanningScene__Sequence__destroy(moveit_msgs__msg__PlanningScene__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__PlanningScene__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__PlanningScene__Sequence__are_equal(const moveit_msgs__msg__PlanningScene__Sequence * lhs, const moveit_msgs__msg__PlanningScene__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__PlanningScene__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__PlanningScene__Sequence__copy(
  const moveit_msgs__msg__PlanningScene__Sequence * input,
  moveit_msgs__msg__PlanningScene__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__PlanningScene);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__PlanningScene * data =
      (moveit_msgs__msg__PlanningScene *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__PlanningScene__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__PlanningScene__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__PlanningScene__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
