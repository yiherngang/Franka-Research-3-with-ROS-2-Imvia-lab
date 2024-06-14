// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_HPP_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'collision_indicators'
#include "franka_msgs/msg/detail/collision_indicators__struct.hpp"
// Member 'measured_joint_state'
// Member 'desired_joint_state'
// Member 'measured_joint_motor_state'
// Member 'tau_ext_hat_filtered'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"
// Member 'elbow'
#include "franka_msgs/msg/detail/elbow__struct.hpp"
// Member 'k_f_ext_hat_k'
// Member 'o_f_ext_hat_k'
#include "geometry_msgs/msg/detail/wrench_stamped__struct.hpp"
// Member 'inertia_ee'
// Member 'inertia_load'
// Member 'inertia_total'
#include "geometry_msgs/msg/detail/inertia_stamped__struct.hpp"
// Member 'o_t_ee'
// Member 'o_t_ee_d'
// Member 'o_t_ee_c'
// Member 'f_t_ee'
// Member 'ee_t_k'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'o_dp_ee_d'
// Member 'o_dp_ee_c'
#include "geometry_msgs/msg/detail/twist_stamped__struct.hpp"
// Member 'o_ddp_ee_c'
#include "geometry_msgs/msg/detail/accel_stamped__struct.hpp"
// Member 'current_errors'
// Member 'last_motion_errors'
#include "franka_msgs/msg/detail/errors__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franka_msgs__msg__FrankaRobotState __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__msg__FrankaRobotState __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrankaRobotState_
{
  using Type = FrankaRobotState_<ContainerAllocator>;

  explicit FrankaRobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    collision_indicators(_init),
    measured_joint_state(_init),
    desired_joint_state(_init),
    measured_joint_motor_state(_init),
    tau_ext_hat_filtered(_init),
    elbow(_init),
    k_f_ext_hat_k(_init),
    o_f_ext_hat_k(_init),
    inertia_ee(_init),
    inertia_load(_init),
    inertia_total(_init),
    o_t_ee(_init),
    o_t_ee_d(_init),
    o_t_ee_c(_init),
    f_t_ee(_init),
    ee_t_k(_init),
    o_dp_ee_d(_init),
    o_dp_ee_c(_init),
    o_ddp_ee_c(_init),
    current_errors(_init),
    last_motion_errors(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->ddq_d.begin(), this->ddq_d.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dtau_j.begin(), this->dtau_j.end(), 0.0);
      this->time = 0.0;
      this->control_command_success_rate = 0.0;
      this->robot_mode = 0;
    }
  }

  explicit FrankaRobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    collision_indicators(_alloc, _init),
    measured_joint_state(_alloc, _init),
    desired_joint_state(_alloc, _init),
    measured_joint_motor_state(_alloc, _init),
    ddq_d(_alloc),
    dtau_j(_alloc),
    tau_ext_hat_filtered(_alloc, _init),
    elbow(_alloc, _init),
    k_f_ext_hat_k(_alloc, _init),
    o_f_ext_hat_k(_alloc, _init),
    inertia_ee(_alloc, _init),
    inertia_load(_alloc, _init),
    inertia_total(_alloc, _init),
    o_t_ee(_alloc, _init),
    o_t_ee_d(_alloc, _init),
    o_t_ee_c(_alloc, _init),
    f_t_ee(_alloc, _init),
    ee_t_k(_alloc, _init),
    o_dp_ee_d(_alloc, _init),
    o_dp_ee_c(_alloc, _init),
    o_ddp_ee_c(_alloc, _init),
    current_errors(_alloc, _init),
    last_motion_errors(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->ddq_d.begin(), this->ddq_d.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dtau_j.begin(), this->dtau_j.end(), 0.0);
      this->time = 0.0;
      this->control_command_success_rate = 0.0;
      this->robot_mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _collision_indicators_type =
    franka_msgs::msg::CollisionIndicators_<ContainerAllocator>;
  _collision_indicators_type collision_indicators;
  using _measured_joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _measured_joint_state_type measured_joint_state;
  using _desired_joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _desired_joint_state_type desired_joint_state;
  using _measured_joint_motor_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _measured_joint_motor_state_type measured_joint_motor_state;
  using _ddq_d_type =
    std::array<double, 7>;
  _ddq_d_type ddq_d;
  using _dtau_j_type =
    std::array<double, 7>;
  _dtau_j_type dtau_j;
  using _tau_ext_hat_filtered_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _tau_ext_hat_filtered_type tau_ext_hat_filtered;
  using _elbow_type =
    franka_msgs::msg::Elbow_<ContainerAllocator>;
  _elbow_type elbow;
  using _k_f_ext_hat_k_type =
    geometry_msgs::msg::WrenchStamped_<ContainerAllocator>;
  _k_f_ext_hat_k_type k_f_ext_hat_k;
  using _o_f_ext_hat_k_type =
    geometry_msgs::msg::WrenchStamped_<ContainerAllocator>;
  _o_f_ext_hat_k_type o_f_ext_hat_k;
  using _inertia_ee_type =
    geometry_msgs::msg::InertiaStamped_<ContainerAllocator>;
  _inertia_ee_type inertia_ee;
  using _inertia_load_type =
    geometry_msgs::msg::InertiaStamped_<ContainerAllocator>;
  _inertia_load_type inertia_load;
  using _inertia_total_type =
    geometry_msgs::msg::InertiaStamped_<ContainerAllocator>;
  _inertia_total_type inertia_total;
  using _o_t_ee_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _o_t_ee_type o_t_ee;
  using _o_t_ee_d_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _o_t_ee_d_type o_t_ee_d;
  using _o_t_ee_c_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _o_t_ee_c_type o_t_ee_c;
  using _f_t_ee_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _f_t_ee_type f_t_ee;
  using _ee_t_k_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _ee_t_k_type ee_t_k;
  using _o_dp_ee_d_type =
    geometry_msgs::msg::TwistStamped_<ContainerAllocator>;
  _o_dp_ee_d_type o_dp_ee_d;
  using _o_dp_ee_c_type =
    geometry_msgs::msg::TwistStamped_<ContainerAllocator>;
  _o_dp_ee_c_type o_dp_ee_c;
  using _o_ddp_ee_c_type =
    geometry_msgs::msg::AccelStamped_<ContainerAllocator>;
  _o_ddp_ee_c_type o_ddp_ee_c;
  using _time_type =
    double;
  _time_type time;
  using _control_command_success_rate_type =
    double;
  _control_command_success_rate_type control_command_success_rate;
  using _robot_mode_type =
    uint8_t;
  _robot_mode_type robot_mode;
  using _current_errors_type =
    franka_msgs::msg::Errors_<ContainerAllocator>;
  _current_errors_type current_errors;
  using _last_motion_errors_type =
    franka_msgs::msg::Errors_<ContainerAllocator>;
  _last_motion_errors_type last_motion_errors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__collision_indicators(
    const franka_msgs::msg::CollisionIndicators_<ContainerAllocator> & _arg)
  {
    this->collision_indicators = _arg;
    return *this;
  }
  Type & set__measured_joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->measured_joint_state = _arg;
    return *this;
  }
  Type & set__desired_joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->desired_joint_state = _arg;
    return *this;
  }
  Type & set__measured_joint_motor_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->measured_joint_motor_state = _arg;
    return *this;
  }
  Type & set__ddq_d(
    const std::array<double, 7> & _arg)
  {
    this->ddq_d = _arg;
    return *this;
  }
  Type & set__dtau_j(
    const std::array<double, 7> & _arg)
  {
    this->dtau_j = _arg;
    return *this;
  }
  Type & set__tau_ext_hat_filtered(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->tau_ext_hat_filtered = _arg;
    return *this;
  }
  Type & set__elbow(
    const franka_msgs::msg::Elbow_<ContainerAllocator> & _arg)
  {
    this->elbow = _arg;
    return *this;
  }
  Type & set__k_f_ext_hat_k(
    const geometry_msgs::msg::WrenchStamped_<ContainerAllocator> & _arg)
  {
    this->k_f_ext_hat_k = _arg;
    return *this;
  }
  Type & set__o_f_ext_hat_k(
    const geometry_msgs::msg::WrenchStamped_<ContainerAllocator> & _arg)
  {
    this->o_f_ext_hat_k = _arg;
    return *this;
  }
  Type & set__inertia_ee(
    const geometry_msgs::msg::InertiaStamped_<ContainerAllocator> & _arg)
  {
    this->inertia_ee = _arg;
    return *this;
  }
  Type & set__inertia_load(
    const geometry_msgs::msg::InertiaStamped_<ContainerAllocator> & _arg)
  {
    this->inertia_load = _arg;
    return *this;
  }
  Type & set__inertia_total(
    const geometry_msgs::msg::InertiaStamped_<ContainerAllocator> & _arg)
  {
    this->inertia_total = _arg;
    return *this;
  }
  Type & set__o_t_ee(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->o_t_ee = _arg;
    return *this;
  }
  Type & set__o_t_ee_d(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->o_t_ee_d = _arg;
    return *this;
  }
  Type & set__o_t_ee_c(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->o_t_ee_c = _arg;
    return *this;
  }
  Type & set__f_t_ee(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->f_t_ee = _arg;
    return *this;
  }
  Type & set__ee_t_k(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->ee_t_k = _arg;
    return *this;
  }
  Type & set__o_dp_ee_d(
    const geometry_msgs::msg::TwistStamped_<ContainerAllocator> & _arg)
  {
    this->o_dp_ee_d = _arg;
    return *this;
  }
  Type & set__o_dp_ee_c(
    const geometry_msgs::msg::TwistStamped_<ContainerAllocator> & _arg)
  {
    this->o_dp_ee_c = _arg;
    return *this;
  }
  Type & set__o_ddp_ee_c(
    const geometry_msgs::msg::AccelStamped_<ContainerAllocator> & _arg)
  {
    this->o_ddp_ee_c = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__control_command_success_rate(
    const double & _arg)
  {
    this->control_command_success_rate = _arg;
    return *this;
  }
  Type & set__robot_mode(
    const uint8_t & _arg)
  {
    this->robot_mode = _arg;
    return *this;
  }
  Type & set__current_errors(
    const franka_msgs::msg::Errors_<ContainerAllocator> & _arg)
  {
    this->current_errors = _arg;
    return *this;
  }
  Type & set__last_motion_errors(
    const franka_msgs::msg::Errors_<ContainerAllocator> & _arg)
  {
    this->last_motion_errors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ROBOT_MODE_OTHER =
    0u;
  static constexpr uint8_t ROBOT_MODE_IDLE =
    1u;
  static constexpr uint8_t ROBOT_MODE_MOVE =
    2u;
  static constexpr uint8_t ROBOT_MODE_GUIDING =
    3u;
  static constexpr uint8_t ROBOT_MODE_REFLEX =
    4u;
  static constexpr uint8_t ROBOT_MODE_USER_STOPPED =
    5u;
  static constexpr uint8_t ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY =
    6u;

  // pointer types
  using RawPtr =
    franka_msgs::msg::FrankaRobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::msg::FrankaRobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__msg__FrankaRobotState
    std::shared_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__msg__FrankaRobotState
    std::shared_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrankaRobotState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->collision_indicators != other.collision_indicators) {
      return false;
    }
    if (this->measured_joint_state != other.measured_joint_state) {
      return false;
    }
    if (this->desired_joint_state != other.desired_joint_state) {
      return false;
    }
    if (this->measured_joint_motor_state != other.measured_joint_motor_state) {
      return false;
    }
    if (this->ddq_d != other.ddq_d) {
      return false;
    }
    if (this->dtau_j != other.dtau_j) {
      return false;
    }
    if (this->tau_ext_hat_filtered != other.tau_ext_hat_filtered) {
      return false;
    }
    if (this->elbow != other.elbow) {
      return false;
    }
    if (this->k_f_ext_hat_k != other.k_f_ext_hat_k) {
      return false;
    }
    if (this->o_f_ext_hat_k != other.o_f_ext_hat_k) {
      return false;
    }
    if (this->inertia_ee != other.inertia_ee) {
      return false;
    }
    if (this->inertia_load != other.inertia_load) {
      return false;
    }
    if (this->inertia_total != other.inertia_total) {
      return false;
    }
    if (this->o_t_ee != other.o_t_ee) {
      return false;
    }
    if (this->o_t_ee_d != other.o_t_ee_d) {
      return false;
    }
    if (this->o_t_ee_c != other.o_t_ee_c) {
      return false;
    }
    if (this->f_t_ee != other.f_t_ee) {
      return false;
    }
    if (this->ee_t_k != other.ee_t_k) {
      return false;
    }
    if (this->o_dp_ee_d != other.o_dp_ee_d) {
      return false;
    }
    if (this->o_dp_ee_c != other.o_dp_ee_c) {
      return false;
    }
    if (this->o_ddp_ee_c != other.o_ddp_ee_c) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->control_command_success_rate != other.control_command_success_rate) {
      return false;
    }
    if (this->robot_mode != other.robot_mode) {
      return false;
    }
    if (this->current_errors != other.current_errors) {
      return false;
    }
    if (this->last_motion_errors != other.last_motion_errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrankaRobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrankaRobotState_

// alias to use template instance with default allocator
using FrankaRobotState =
  franka_msgs::msg::FrankaRobotState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_GUIDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_REFLEX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_USER_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_HPP_
