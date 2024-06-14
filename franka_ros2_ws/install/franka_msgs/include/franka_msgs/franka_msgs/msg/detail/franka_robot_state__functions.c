// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/franka_robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `collision_indicators`
#include "franka_msgs/msg/detail/collision_indicators__functions.h"
// Member `measured_joint_state`
// Member `desired_joint_state`
// Member `measured_joint_motor_state`
// Member `tau_ext_hat_filtered`
#include "sensor_msgs/msg/detail/joint_state__functions.h"
// Member `elbow`
#include "franka_msgs/msg/detail/elbow__functions.h"
// Member `k_f_ext_hat_k`
// Member `o_f_ext_hat_k`
#include "geometry_msgs/msg/detail/wrench_stamped__functions.h"
// Member `inertia_ee`
// Member `inertia_load`
// Member `inertia_total`
#include "geometry_msgs/msg/detail/inertia_stamped__functions.h"
// Member `o_t_ee`
// Member `o_t_ee_d`
// Member `o_t_ee_c`
// Member `f_t_ee`
// Member `ee_t_k`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `o_dp_ee_d`
// Member `o_dp_ee_c`
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"
// Member `o_ddp_ee_c`
#include "geometry_msgs/msg/detail/accel_stamped__functions.h"
// Member `current_errors`
// Member `last_motion_errors`
#include "franka_msgs/msg/detail/errors__functions.h"

bool
franka_msgs__msg__FrankaRobotState__init(franka_msgs__msg__FrankaRobotState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // collision_indicators
  if (!franka_msgs__msg__CollisionIndicators__init(&msg->collision_indicators)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // measured_joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->measured_joint_state)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // desired_joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->desired_joint_state)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // measured_joint_motor_state
  if (!sensor_msgs__msg__JointState__init(&msg->measured_joint_motor_state)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // ddq_d
  // dtau_j
  // tau_ext_hat_filtered
  if (!sensor_msgs__msg__JointState__init(&msg->tau_ext_hat_filtered)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // elbow
  if (!franka_msgs__msg__Elbow__init(&msg->elbow)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // k_f_ext_hat_k
  if (!geometry_msgs__msg__WrenchStamped__init(&msg->k_f_ext_hat_k)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // o_f_ext_hat_k
  if (!geometry_msgs__msg__WrenchStamped__init(&msg->o_f_ext_hat_k)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // inertia_ee
  if (!geometry_msgs__msg__InertiaStamped__init(&msg->inertia_ee)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // inertia_load
  if (!geometry_msgs__msg__InertiaStamped__init(&msg->inertia_load)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // inertia_total
  if (!geometry_msgs__msg__InertiaStamped__init(&msg->inertia_total)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // o_t_ee
  if (!geometry_msgs__msg__PoseStamped__init(&msg->o_t_ee)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // o_t_ee_d
  if (!geometry_msgs__msg__PoseStamped__init(&msg->o_t_ee_d)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // o_t_ee_c
  if (!geometry_msgs__msg__PoseStamped__init(&msg->o_t_ee_c)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // f_t_ee
  if (!geometry_msgs__msg__PoseStamped__init(&msg->f_t_ee)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // ee_t_k
  if (!geometry_msgs__msg__PoseStamped__init(&msg->ee_t_k)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // o_dp_ee_d
  if (!geometry_msgs__msg__TwistStamped__init(&msg->o_dp_ee_d)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // o_dp_ee_c
  if (!geometry_msgs__msg__TwistStamped__init(&msg->o_dp_ee_c)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // o_ddp_ee_c
  if (!geometry_msgs__msg__AccelStamped__init(&msg->o_ddp_ee_c)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // time
  // control_command_success_rate
  // robot_mode
  // current_errors
  if (!franka_msgs__msg__Errors__init(&msg->current_errors)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // last_motion_errors
  if (!franka_msgs__msg__Errors__init(&msg->last_motion_errors)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__msg__FrankaRobotState__fini(franka_msgs__msg__FrankaRobotState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // collision_indicators
  franka_msgs__msg__CollisionIndicators__fini(&msg->collision_indicators);
  // measured_joint_state
  sensor_msgs__msg__JointState__fini(&msg->measured_joint_state);
  // desired_joint_state
  sensor_msgs__msg__JointState__fini(&msg->desired_joint_state);
  // measured_joint_motor_state
  sensor_msgs__msg__JointState__fini(&msg->measured_joint_motor_state);
  // ddq_d
  // dtau_j
  // tau_ext_hat_filtered
  sensor_msgs__msg__JointState__fini(&msg->tau_ext_hat_filtered);
  // elbow
  franka_msgs__msg__Elbow__fini(&msg->elbow);
  // k_f_ext_hat_k
  geometry_msgs__msg__WrenchStamped__fini(&msg->k_f_ext_hat_k);
  // o_f_ext_hat_k
  geometry_msgs__msg__WrenchStamped__fini(&msg->o_f_ext_hat_k);
  // inertia_ee
  geometry_msgs__msg__InertiaStamped__fini(&msg->inertia_ee);
  // inertia_load
  geometry_msgs__msg__InertiaStamped__fini(&msg->inertia_load);
  // inertia_total
  geometry_msgs__msg__InertiaStamped__fini(&msg->inertia_total);
  // o_t_ee
  geometry_msgs__msg__PoseStamped__fini(&msg->o_t_ee);
  // o_t_ee_d
  geometry_msgs__msg__PoseStamped__fini(&msg->o_t_ee_d);
  // o_t_ee_c
  geometry_msgs__msg__PoseStamped__fini(&msg->o_t_ee_c);
  // f_t_ee
  geometry_msgs__msg__PoseStamped__fini(&msg->f_t_ee);
  // ee_t_k
  geometry_msgs__msg__PoseStamped__fini(&msg->ee_t_k);
  // o_dp_ee_d
  geometry_msgs__msg__TwistStamped__fini(&msg->o_dp_ee_d);
  // o_dp_ee_c
  geometry_msgs__msg__TwistStamped__fini(&msg->o_dp_ee_c);
  // o_ddp_ee_c
  geometry_msgs__msg__AccelStamped__fini(&msg->o_ddp_ee_c);
  // time
  // control_command_success_rate
  // robot_mode
  // current_errors
  franka_msgs__msg__Errors__fini(&msg->current_errors);
  // last_motion_errors
  franka_msgs__msg__Errors__fini(&msg->last_motion_errors);
}

bool
franka_msgs__msg__FrankaRobotState__are_equal(const franka_msgs__msg__FrankaRobotState * lhs, const franka_msgs__msg__FrankaRobotState * rhs)
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
  // collision_indicators
  if (!franka_msgs__msg__CollisionIndicators__are_equal(
      &(lhs->collision_indicators), &(rhs->collision_indicators)))
  {
    return false;
  }
  // measured_joint_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->measured_joint_state), &(rhs->measured_joint_state)))
  {
    return false;
  }
  // desired_joint_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->desired_joint_state), &(rhs->desired_joint_state)))
  {
    return false;
  }
  // measured_joint_motor_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->measured_joint_motor_state), &(rhs->measured_joint_motor_state)))
  {
    return false;
  }
  // ddq_d
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->ddq_d[i] != rhs->ddq_d[i]) {
      return false;
    }
  }
  // dtau_j
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->dtau_j[i] != rhs->dtau_j[i]) {
      return false;
    }
  }
  // tau_ext_hat_filtered
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->tau_ext_hat_filtered), &(rhs->tau_ext_hat_filtered)))
  {
    return false;
  }
  // elbow
  if (!franka_msgs__msg__Elbow__are_equal(
      &(lhs->elbow), &(rhs->elbow)))
  {
    return false;
  }
  // k_f_ext_hat_k
  if (!geometry_msgs__msg__WrenchStamped__are_equal(
      &(lhs->k_f_ext_hat_k), &(rhs->k_f_ext_hat_k)))
  {
    return false;
  }
  // o_f_ext_hat_k
  if (!geometry_msgs__msg__WrenchStamped__are_equal(
      &(lhs->o_f_ext_hat_k), &(rhs->o_f_ext_hat_k)))
  {
    return false;
  }
  // inertia_ee
  if (!geometry_msgs__msg__InertiaStamped__are_equal(
      &(lhs->inertia_ee), &(rhs->inertia_ee)))
  {
    return false;
  }
  // inertia_load
  if (!geometry_msgs__msg__InertiaStamped__are_equal(
      &(lhs->inertia_load), &(rhs->inertia_load)))
  {
    return false;
  }
  // inertia_total
  if (!geometry_msgs__msg__InertiaStamped__are_equal(
      &(lhs->inertia_total), &(rhs->inertia_total)))
  {
    return false;
  }
  // o_t_ee
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->o_t_ee), &(rhs->o_t_ee)))
  {
    return false;
  }
  // o_t_ee_d
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->o_t_ee_d), &(rhs->o_t_ee_d)))
  {
    return false;
  }
  // o_t_ee_c
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->o_t_ee_c), &(rhs->o_t_ee_c)))
  {
    return false;
  }
  // f_t_ee
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->f_t_ee), &(rhs->f_t_ee)))
  {
    return false;
  }
  // ee_t_k
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->ee_t_k), &(rhs->ee_t_k)))
  {
    return false;
  }
  // o_dp_ee_d
  if (!geometry_msgs__msg__TwistStamped__are_equal(
      &(lhs->o_dp_ee_d), &(rhs->o_dp_ee_d)))
  {
    return false;
  }
  // o_dp_ee_c
  if (!geometry_msgs__msg__TwistStamped__are_equal(
      &(lhs->o_dp_ee_c), &(rhs->o_dp_ee_c)))
  {
    return false;
  }
  // o_ddp_ee_c
  if (!geometry_msgs__msg__AccelStamped__are_equal(
      &(lhs->o_ddp_ee_c), &(rhs->o_ddp_ee_c)))
  {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // control_command_success_rate
  if (lhs->control_command_success_rate != rhs->control_command_success_rate) {
    return false;
  }
  // robot_mode
  if (lhs->robot_mode != rhs->robot_mode) {
    return false;
  }
  // current_errors
  if (!franka_msgs__msg__Errors__are_equal(
      &(lhs->current_errors), &(rhs->current_errors)))
  {
    return false;
  }
  // last_motion_errors
  if (!franka_msgs__msg__Errors__are_equal(
      &(lhs->last_motion_errors), &(rhs->last_motion_errors)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__msg__FrankaRobotState__copy(
  const franka_msgs__msg__FrankaRobotState * input,
  franka_msgs__msg__FrankaRobotState * output)
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
  // collision_indicators
  if (!franka_msgs__msg__CollisionIndicators__copy(
      &(input->collision_indicators), &(output->collision_indicators)))
  {
    return false;
  }
  // measured_joint_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->measured_joint_state), &(output->measured_joint_state)))
  {
    return false;
  }
  // desired_joint_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->desired_joint_state), &(output->desired_joint_state)))
  {
    return false;
  }
  // measured_joint_motor_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->measured_joint_motor_state), &(output->measured_joint_motor_state)))
  {
    return false;
  }
  // ddq_d
  for (size_t i = 0; i < 7; ++i) {
    output->ddq_d[i] = input->ddq_d[i];
  }
  // dtau_j
  for (size_t i = 0; i < 7; ++i) {
    output->dtau_j[i] = input->dtau_j[i];
  }
  // tau_ext_hat_filtered
  if (!sensor_msgs__msg__JointState__copy(
      &(input->tau_ext_hat_filtered), &(output->tau_ext_hat_filtered)))
  {
    return false;
  }
  // elbow
  if (!franka_msgs__msg__Elbow__copy(
      &(input->elbow), &(output->elbow)))
  {
    return false;
  }
  // k_f_ext_hat_k
  if (!geometry_msgs__msg__WrenchStamped__copy(
      &(input->k_f_ext_hat_k), &(output->k_f_ext_hat_k)))
  {
    return false;
  }
  // o_f_ext_hat_k
  if (!geometry_msgs__msg__WrenchStamped__copy(
      &(input->o_f_ext_hat_k), &(output->o_f_ext_hat_k)))
  {
    return false;
  }
  // inertia_ee
  if (!geometry_msgs__msg__InertiaStamped__copy(
      &(input->inertia_ee), &(output->inertia_ee)))
  {
    return false;
  }
  // inertia_load
  if (!geometry_msgs__msg__InertiaStamped__copy(
      &(input->inertia_load), &(output->inertia_load)))
  {
    return false;
  }
  // inertia_total
  if (!geometry_msgs__msg__InertiaStamped__copy(
      &(input->inertia_total), &(output->inertia_total)))
  {
    return false;
  }
  // o_t_ee
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->o_t_ee), &(output->o_t_ee)))
  {
    return false;
  }
  // o_t_ee_d
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->o_t_ee_d), &(output->o_t_ee_d)))
  {
    return false;
  }
  // o_t_ee_c
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->o_t_ee_c), &(output->o_t_ee_c)))
  {
    return false;
  }
  // f_t_ee
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->f_t_ee), &(output->f_t_ee)))
  {
    return false;
  }
  // ee_t_k
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->ee_t_k), &(output->ee_t_k)))
  {
    return false;
  }
  // o_dp_ee_d
  if (!geometry_msgs__msg__TwistStamped__copy(
      &(input->o_dp_ee_d), &(output->o_dp_ee_d)))
  {
    return false;
  }
  // o_dp_ee_c
  if (!geometry_msgs__msg__TwistStamped__copy(
      &(input->o_dp_ee_c), &(output->o_dp_ee_c)))
  {
    return false;
  }
  // o_ddp_ee_c
  if (!geometry_msgs__msg__AccelStamped__copy(
      &(input->o_ddp_ee_c), &(output->o_ddp_ee_c)))
  {
    return false;
  }
  // time
  output->time = input->time;
  // control_command_success_rate
  output->control_command_success_rate = input->control_command_success_rate;
  // robot_mode
  output->robot_mode = input->robot_mode;
  // current_errors
  if (!franka_msgs__msg__Errors__copy(
      &(input->current_errors), &(output->current_errors)))
  {
    return false;
  }
  // last_motion_errors
  if (!franka_msgs__msg__Errors__copy(
      &(input->last_motion_errors), &(output->last_motion_errors)))
  {
    return false;
  }
  return true;
}

franka_msgs__msg__FrankaRobotState *
franka_msgs__msg__FrankaRobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__FrankaRobotState * msg = (franka_msgs__msg__FrankaRobotState *)allocator.allocate(sizeof(franka_msgs__msg__FrankaRobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__msg__FrankaRobotState));
  bool success = franka_msgs__msg__FrankaRobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__msg__FrankaRobotState__destroy(franka_msgs__msg__FrankaRobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__msg__FrankaRobotState__Sequence__init(franka_msgs__msg__FrankaRobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__FrankaRobotState * data = NULL;

  if (size) {
    data = (franka_msgs__msg__FrankaRobotState *)allocator.zero_allocate(size, sizeof(franka_msgs__msg__FrankaRobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__msg__FrankaRobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__msg__FrankaRobotState__fini(&data[i - 1]);
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
franka_msgs__msg__FrankaRobotState__Sequence__fini(franka_msgs__msg__FrankaRobotState__Sequence * array)
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
      franka_msgs__msg__FrankaRobotState__fini(&array->data[i]);
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

franka_msgs__msg__FrankaRobotState__Sequence *
franka_msgs__msg__FrankaRobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__FrankaRobotState__Sequence * array = (franka_msgs__msg__FrankaRobotState__Sequence *)allocator.allocate(sizeof(franka_msgs__msg__FrankaRobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__msg__FrankaRobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__msg__FrankaRobotState__Sequence__destroy(franka_msgs__msg__FrankaRobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__msg__FrankaRobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__msg__FrankaRobotState__Sequence__are_equal(const franka_msgs__msg__FrankaRobotState__Sequence * lhs, const franka_msgs__msg__FrankaRobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__msg__FrankaRobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__FrankaRobotState__Sequence__copy(
  const franka_msgs__msg__FrankaRobotState__Sequence * input,
  franka_msgs__msg__FrankaRobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__msg__FrankaRobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__msg__FrankaRobotState * data =
      (franka_msgs__msg__FrankaRobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__msg__FrankaRobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__msg__FrankaRobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__msg__FrankaRobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
