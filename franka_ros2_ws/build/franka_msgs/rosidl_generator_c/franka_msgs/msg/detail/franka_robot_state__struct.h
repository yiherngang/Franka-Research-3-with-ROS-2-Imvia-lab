// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_MODE_OTHER'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_OTHER = 0
};

/// Constant 'ROBOT_MODE_IDLE'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_IDLE = 1
};

/// Constant 'ROBOT_MODE_MOVE'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_MOVE = 2
};

/// Constant 'ROBOT_MODE_GUIDING'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_GUIDING = 3
};

/// Constant 'ROBOT_MODE_REFLEX'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_REFLEX = 4
};

/// Constant 'ROBOT_MODE_USER_STOPPED'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_USER_STOPPED = 5
};

/// Constant 'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'collision_indicators'
#include "franka_msgs/msg/detail/collision_indicators__struct.h"
// Member 'measured_joint_state'
// Member 'desired_joint_state'
// Member 'measured_joint_motor_state'
// Member 'tau_ext_hat_filtered'
#include "sensor_msgs/msg/detail/joint_state__struct.h"
// Member 'elbow'
#include "franka_msgs/msg/detail/elbow__struct.h"
// Member 'k_f_ext_hat_k'
// Member 'o_f_ext_hat_k'
#include "geometry_msgs/msg/detail/wrench_stamped__struct.h"
// Member 'inertia_ee'
// Member 'inertia_load'
// Member 'inertia_total'
#include "geometry_msgs/msg/detail/inertia_stamped__struct.h"
// Member 'o_t_ee'
// Member 'o_t_ee_d'
// Member 'o_t_ee_c'
// Member 'f_t_ee'
// Member 'ee_t_k'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'o_dp_ee_d'
// Member 'o_dp_ee_c'
#include "geometry_msgs/msg/detail/twist_stamped__struct.h"
// Member 'o_ddp_ee_c'
#include "geometry_msgs/msg/detail/accel_stamped__struct.h"
// Member 'current_errors'
// Member 'last_motion_errors'
#include "franka_msgs/msg/detail/errors__struct.h"

/// Struct defined in msg/FrankaRobotState in the package franka_msgs.
/**
  * Default parts of the message
 */
typedef struct franka_msgs__msg__FrankaRobotState
{
  std_msgs__msg__Header header;
  /// Indicates which dimensions have an active contact/collision flag raised
  franka_msgs__msg__CollisionIndicators collision_indicators;
  /// The state of the arm in joint space
  /// The joint state consisting out of position (q), velocity (dq) and effort (tau_J)
  sensor_msgs__msg__JointState measured_joint_state;
  /// The desired joint state consisting out of position (q_d), velocity (dq_d) and effort (tau_J_d)
  sensor_msgs__msg__JointState desired_joint_state;
  /// The measured motor state of the joints consisting out of position (theta) and velocity (dtheta)
  sensor_msgs__msg__JointState measured_joint_motor_state;
  /// The desired joint acceleration
  double ddq_d[7];
  /// The derivative of the measured torque signal
  double dtau_j[7];
  /// Filtered external torque. The JointState consists out of effort (tau_ext_hat_filtered)
  sensor_msgs__msg__JointState tau_ext_hat_filtered;
  /// The state of the elbow
  franka_msgs__msg__Elbow elbow;
  /// The active wrenches acting on the stiffness frame expressed relative to
  /// stiffness frame
  geometry_msgs__msg__WrenchStamped k_f_ext_hat_k;
  /// base frame
  geometry_msgs__msg__WrenchStamped o_f_ext_hat_k;
  /// The different inertias of the arm
  /// The end-effector inertia
  geometry_msgs__msg__InertiaStamped inertia_ee;
  /// The load inertia
  geometry_msgs__msg__InertiaStamped inertia_load;
  /// The total (end-effector + load) inertia
  geometry_msgs__msg__InertiaStamped inertia_total;
  /// The poses describing the transformations between different frames of the arm
  /// Measured end-effector pose in base frame
  geometry_msgs__msg__PoseStamped o_t_ee;
  /// Last desired end-effector pose of motion generation in base frame
  geometry_msgs__msg__PoseStamped o_t_ee_d;
  /// Last commanded end-effector pose of motion generation in base frame
  geometry_msgs__msg__PoseStamped o_t_ee_c;
  /// Flange to end-effector frame
  geometry_msgs__msg__PoseStamped f_t_ee;
  /// End-effector to stiffness frame
  geometry_msgs__msg__PoseStamped ee_t_k;
  /// Desired end effector twist in base frame
  geometry_msgs__msg__TwistStamped o_dp_ee_d;
  /// Last commanded end effector twist in base frame
  geometry_msgs__msg__TwistStamped o_dp_ee_c;
  /// Last commanded end effector acceleration in base frame
  geometry_msgs__msg__AccelStamped o_ddp_ee_c;
  /// Additional information
  double time;
  double control_command_success_rate;
  uint8_t robot_mode;
  franka_msgs__msg__Errors current_errors;
  franka_msgs__msg__Errors last_motion_errors;
} franka_msgs__msg__FrankaRobotState;

// Struct for a sequence of franka_msgs__msg__FrankaRobotState.
typedef struct franka_msgs__msg__FrankaRobotState__Sequence
{
  franka_msgs__msg__FrankaRobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__msg__FrankaRobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_
