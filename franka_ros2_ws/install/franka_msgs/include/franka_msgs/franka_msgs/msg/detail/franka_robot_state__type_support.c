// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/msg/detail/franka_robot_state__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/msg/detail/franka_robot_state__functions.h"
#include "franka_msgs/msg/detail/franka_robot_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `collision_indicators`
#include "franka_msgs/msg/collision_indicators.h"
// Member `collision_indicators`
#include "franka_msgs/msg/detail/collision_indicators__rosidl_typesupport_introspection_c.h"
// Member `measured_joint_state`
// Member `desired_joint_state`
// Member `measured_joint_motor_state`
// Member `tau_ext_hat_filtered`
#include "sensor_msgs/msg/joint_state.h"
// Member `measured_joint_state`
// Member `desired_joint_state`
// Member `measured_joint_motor_state`
// Member `tau_ext_hat_filtered`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
// Member `elbow`
#include "franka_msgs/msg/elbow.h"
// Member `elbow`
#include "franka_msgs/msg/detail/elbow__rosidl_typesupport_introspection_c.h"
// Member `k_f_ext_hat_k`
// Member `o_f_ext_hat_k`
#include "geometry_msgs/msg/wrench_stamped.h"
// Member `k_f_ext_hat_k`
// Member `o_f_ext_hat_k`
#include "geometry_msgs/msg/detail/wrench_stamped__rosidl_typesupport_introspection_c.h"
// Member `inertia_ee`
// Member `inertia_load`
// Member `inertia_total`
#include "geometry_msgs/msg/inertia_stamped.h"
// Member `inertia_ee`
// Member `inertia_load`
// Member `inertia_total`
#include "geometry_msgs/msg/detail/inertia_stamped__rosidl_typesupport_introspection_c.h"
// Member `o_t_ee`
// Member `o_t_ee_d`
// Member `o_t_ee_c`
// Member `f_t_ee`
// Member `ee_t_k`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `o_t_ee`
// Member `o_t_ee_d`
// Member `o_t_ee_c`
// Member `f_t_ee`
// Member `ee_t_k`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `o_dp_ee_d`
// Member `o_dp_ee_c`
#include "geometry_msgs/msg/twist_stamped.h"
// Member `o_dp_ee_d`
// Member `o_dp_ee_c`
#include "geometry_msgs/msg/detail/twist_stamped__rosidl_typesupport_introspection_c.h"
// Member `o_ddp_ee_c`
#include "geometry_msgs/msg/accel_stamped.h"
// Member `o_ddp_ee_c`
#include "geometry_msgs/msg/detail/accel_stamped__rosidl_typesupport_introspection_c.h"
// Member `current_errors`
// Member `last_motion_errors`
#include "franka_msgs/msg/errors.h"
// Member `current_errors`
// Member `last_motion_errors`
#include "franka_msgs/msg/detail/errors__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__msg__FrankaRobotState__init(message_memory);
}

void franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_fini_function(void * message_memory)
{
  franka_msgs__msg__FrankaRobotState__fini(message_memory);
}

size_t franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__size_function__FrankaRobotState__ddq_d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_const_function__FrankaRobotState__ddq_d(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_function__FrankaRobotState__ddq_d(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__fetch_function__FrankaRobotState__ddq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_const_function__FrankaRobotState__ddq_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__assign_function__FrankaRobotState__ddq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_function__FrankaRobotState__ddq_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__size_function__FrankaRobotState__dtau_j(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_const_function__FrankaRobotState__dtau_j(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_function__FrankaRobotState__dtau_j(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__fetch_function__FrankaRobotState__dtau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_const_function__FrankaRobotState__dtau_j(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__assign_function__FrankaRobotState__dtau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_function__FrankaRobotState__dtau_j(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[27] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_indicators",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, collision_indicators),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measured_joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, measured_joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, desired_joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measured_joint_motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, measured_joint_motor_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ddq_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, ddq_d),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__size_function__FrankaRobotState__ddq_d,  // size() function pointer
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_const_function__FrankaRobotState__ddq_d,  // get_const(index) function pointer
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_function__FrankaRobotState__ddq_d,  // get(index) function pointer
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__fetch_function__FrankaRobotState__ddq_d,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__assign_function__FrankaRobotState__ddq_d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dtau_j",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, dtau_j),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__size_function__FrankaRobotState__dtau_j,  // size() function pointer
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_const_function__FrankaRobotState__dtau_j,  // get_const(index) function pointer
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__get_function__FrankaRobotState__dtau_j,  // get(index) function pointer
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__fetch_function__FrankaRobotState__dtau_j,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__assign_function__FrankaRobotState__dtau_j,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tau_ext_hat_filtered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, tau_ext_hat_filtered),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, elbow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k_f_ext_hat_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, k_f_ext_hat_k),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_f_ext_hat_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, o_f_ext_hat_k),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inertia_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, inertia_ee),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inertia_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, inertia_load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inertia_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, inertia_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_t_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, o_t_ee),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_t_ee_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, o_t_ee_d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_t_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, o_t_ee_c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_t_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, f_t_ee),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ee_t_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, ee_t_k),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_dp_ee_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, o_dp_ee_d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_dp_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, o_dp_ee_c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_ddp_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, o_ddp_ee_c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_command_success_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, control_command_success_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, robot_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, current_errors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_motion_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaRobotState, last_motion_errors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_members = {
  "franka_msgs__msg",  // message namespace
  "FrankaRobotState",  // message name
  27,  // number of fields
  sizeof(franka_msgs__msg__FrankaRobotState),
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array,  // message members
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_type_support_handle = {
  0,
  &franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, FrankaRobotState)() {
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, CollisionIndicators)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, Elbow)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, WrenchStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, WrenchStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, InertiaStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, InertiaStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, InertiaStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, AccelStamped)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[25].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, Errors)();
  franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_member_array[26].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, Errors)();
  if (!franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_type_support_handle.typesupport_identifier) {
    franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_msgs__msg__FrankaRobotState__rosidl_typesupport_introspection_c__FrankaRobotState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
