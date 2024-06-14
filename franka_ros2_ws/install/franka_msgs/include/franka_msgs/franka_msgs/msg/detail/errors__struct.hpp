// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ERRORS__STRUCT_HPP_
#define FRANKA_MSGS__MSG__DETAIL__ERRORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franka_msgs__msg__Errors __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__msg__Errors __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Errors_
{
  using Type = Errors_<ContainerAllocator>;

  explicit Errors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_position_limits_violation = false;
      this->cartesian_position_limits_violation = false;
      this->self_collision_avoidance_violation = false;
      this->joint_velocity_violation = false;
      this->cartesian_velocity_violation = false;
      this->force_control_safety_violation = false;
      this->joint_reflex = false;
      this->cartesian_reflex = false;
      this->max_goal_pose_deviation_violation = false;
      this->max_path_pose_deviation_violation = false;
      this->cartesian_velocity_profile_safety_violation = false;
      this->joint_position_motion_generator_start_pose_invalid = false;
      this->joint_motion_generator_position_limits_violation = false;
      this->joint_motion_generator_velocity_limits_violation = false;
      this->joint_motion_generator_velocity_discontinuity = false;
      this->joint_motion_generator_acceleration_discontinuity = false;
      this->cartesian_position_motion_generator_start_pose_invalid = false;
      this->cartesian_motion_generator_elbow_limit_violation = false;
      this->cartesian_motion_generator_velocity_limits_violation = false;
      this->cartesian_motion_generator_velocity_discontinuity = false;
      this->cartesian_motion_generator_acceleration_discontinuity = false;
      this->cartesian_motion_generator_elbow_sign_inconsistent = false;
      this->cartesian_motion_generator_start_elbow_invalid = false;
      this->cartesian_motion_generator_joint_position_limits_violation = false;
      this->cartesian_motion_generator_joint_velocity_limits_violation = false;
      this->cartesian_motion_generator_joint_velocity_discontinuity = false;
      this->cartesian_motion_generator_joint_acceleration_discontinuity = false;
      this->cartesian_position_motion_generator_invalid_frame = false;
      this->force_controller_desired_force_tolerance_violation = false;
      this->controller_torque_discontinuity = false;
      this->start_elbow_sign_inconsistent = false;
      this->communication_constraints_violation = false;
      this->power_limit_violation = false;
      this->joint_p2p_insufficient_torque_for_planning = false;
      this->tau_j_range_violation = false;
      this->instability_detected = false;
    }
  }

  explicit Errors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_position_limits_violation = false;
      this->cartesian_position_limits_violation = false;
      this->self_collision_avoidance_violation = false;
      this->joint_velocity_violation = false;
      this->cartesian_velocity_violation = false;
      this->force_control_safety_violation = false;
      this->joint_reflex = false;
      this->cartesian_reflex = false;
      this->max_goal_pose_deviation_violation = false;
      this->max_path_pose_deviation_violation = false;
      this->cartesian_velocity_profile_safety_violation = false;
      this->joint_position_motion_generator_start_pose_invalid = false;
      this->joint_motion_generator_position_limits_violation = false;
      this->joint_motion_generator_velocity_limits_violation = false;
      this->joint_motion_generator_velocity_discontinuity = false;
      this->joint_motion_generator_acceleration_discontinuity = false;
      this->cartesian_position_motion_generator_start_pose_invalid = false;
      this->cartesian_motion_generator_elbow_limit_violation = false;
      this->cartesian_motion_generator_velocity_limits_violation = false;
      this->cartesian_motion_generator_velocity_discontinuity = false;
      this->cartesian_motion_generator_acceleration_discontinuity = false;
      this->cartesian_motion_generator_elbow_sign_inconsistent = false;
      this->cartesian_motion_generator_start_elbow_invalid = false;
      this->cartesian_motion_generator_joint_position_limits_violation = false;
      this->cartesian_motion_generator_joint_velocity_limits_violation = false;
      this->cartesian_motion_generator_joint_velocity_discontinuity = false;
      this->cartesian_motion_generator_joint_acceleration_discontinuity = false;
      this->cartesian_position_motion_generator_invalid_frame = false;
      this->force_controller_desired_force_tolerance_violation = false;
      this->controller_torque_discontinuity = false;
      this->start_elbow_sign_inconsistent = false;
      this->communication_constraints_violation = false;
      this->power_limit_violation = false;
      this->joint_p2p_insufficient_torque_for_planning = false;
      this->tau_j_range_violation = false;
      this->instability_detected = false;
    }
  }

  // field types and members
  using _joint_position_limits_violation_type =
    bool;
  _joint_position_limits_violation_type joint_position_limits_violation;
  using _cartesian_position_limits_violation_type =
    bool;
  _cartesian_position_limits_violation_type cartesian_position_limits_violation;
  using _self_collision_avoidance_violation_type =
    bool;
  _self_collision_avoidance_violation_type self_collision_avoidance_violation;
  using _joint_velocity_violation_type =
    bool;
  _joint_velocity_violation_type joint_velocity_violation;
  using _cartesian_velocity_violation_type =
    bool;
  _cartesian_velocity_violation_type cartesian_velocity_violation;
  using _force_control_safety_violation_type =
    bool;
  _force_control_safety_violation_type force_control_safety_violation;
  using _joint_reflex_type =
    bool;
  _joint_reflex_type joint_reflex;
  using _cartesian_reflex_type =
    bool;
  _cartesian_reflex_type cartesian_reflex;
  using _max_goal_pose_deviation_violation_type =
    bool;
  _max_goal_pose_deviation_violation_type max_goal_pose_deviation_violation;
  using _max_path_pose_deviation_violation_type =
    bool;
  _max_path_pose_deviation_violation_type max_path_pose_deviation_violation;
  using _cartesian_velocity_profile_safety_violation_type =
    bool;
  _cartesian_velocity_profile_safety_violation_type cartesian_velocity_profile_safety_violation;
  using _joint_position_motion_generator_start_pose_invalid_type =
    bool;
  _joint_position_motion_generator_start_pose_invalid_type joint_position_motion_generator_start_pose_invalid;
  using _joint_motion_generator_position_limits_violation_type =
    bool;
  _joint_motion_generator_position_limits_violation_type joint_motion_generator_position_limits_violation;
  using _joint_motion_generator_velocity_limits_violation_type =
    bool;
  _joint_motion_generator_velocity_limits_violation_type joint_motion_generator_velocity_limits_violation;
  using _joint_motion_generator_velocity_discontinuity_type =
    bool;
  _joint_motion_generator_velocity_discontinuity_type joint_motion_generator_velocity_discontinuity;
  using _joint_motion_generator_acceleration_discontinuity_type =
    bool;
  _joint_motion_generator_acceleration_discontinuity_type joint_motion_generator_acceleration_discontinuity;
  using _cartesian_position_motion_generator_start_pose_invalid_type =
    bool;
  _cartesian_position_motion_generator_start_pose_invalid_type cartesian_position_motion_generator_start_pose_invalid;
  using _cartesian_motion_generator_elbow_limit_violation_type =
    bool;
  _cartesian_motion_generator_elbow_limit_violation_type cartesian_motion_generator_elbow_limit_violation;
  using _cartesian_motion_generator_velocity_limits_violation_type =
    bool;
  _cartesian_motion_generator_velocity_limits_violation_type cartesian_motion_generator_velocity_limits_violation;
  using _cartesian_motion_generator_velocity_discontinuity_type =
    bool;
  _cartesian_motion_generator_velocity_discontinuity_type cartesian_motion_generator_velocity_discontinuity;
  using _cartesian_motion_generator_acceleration_discontinuity_type =
    bool;
  _cartesian_motion_generator_acceleration_discontinuity_type cartesian_motion_generator_acceleration_discontinuity;
  using _cartesian_motion_generator_elbow_sign_inconsistent_type =
    bool;
  _cartesian_motion_generator_elbow_sign_inconsistent_type cartesian_motion_generator_elbow_sign_inconsistent;
  using _cartesian_motion_generator_start_elbow_invalid_type =
    bool;
  _cartesian_motion_generator_start_elbow_invalid_type cartesian_motion_generator_start_elbow_invalid;
  using _cartesian_motion_generator_joint_position_limits_violation_type =
    bool;
  _cartesian_motion_generator_joint_position_limits_violation_type cartesian_motion_generator_joint_position_limits_violation;
  using _cartesian_motion_generator_joint_velocity_limits_violation_type =
    bool;
  _cartesian_motion_generator_joint_velocity_limits_violation_type cartesian_motion_generator_joint_velocity_limits_violation;
  using _cartesian_motion_generator_joint_velocity_discontinuity_type =
    bool;
  _cartesian_motion_generator_joint_velocity_discontinuity_type cartesian_motion_generator_joint_velocity_discontinuity;
  using _cartesian_motion_generator_joint_acceleration_discontinuity_type =
    bool;
  _cartesian_motion_generator_joint_acceleration_discontinuity_type cartesian_motion_generator_joint_acceleration_discontinuity;
  using _cartesian_position_motion_generator_invalid_frame_type =
    bool;
  _cartesian_position_motion_generator_invalid_frame_type cartesian_position_motion_generator_invalid_frame;
  using _force_controller_desired_force_tolerance_violation_type =
    bool;
  _force_controller_desired_force_tolerance_violation_type force_controller_desired_force_tolerance_violation;
  using _controller_torque_discontinuity_type =
    bool;
  _controller_torque_discontinuity_type controller_torque_discontinuity;
  using _start_elbow_sign_inconsistent_type =
    bool;
  _start_elbow_sign_inconsistent_type start_elbow_sign_inconsistent;
  using _communication_constraints_violation_type =
    bool;
  _communication_constraints_violation_type communication_constraints_violation;
  using _power_limit_violation_type =
    bool;
  _power_limit_violation_type power_limit_violation;
  using _joint_p2p_insufficient_torque_for_planning_type =
    bool;
  _joint_p2p_insufficient_torque_for_planning_type joint_p2p_insufficient_torque_for_planning;
  using _tau_j_range_violation_type =
    bool;
  _tau_j_range_violation_type tau_j_range_violation;
  using _instability_detected_type =
    bool;
  _instability_detected_type instability_detected;

  // setters for named parameter idiom
  Type & set__joint_position_limits_violation(
    const bool & _arg)
  {
    this->joint_position_limits_violation = _arg;
    return *this;
  }
  Type & set__cartesian_position_limits_violation(
    const bool & _arg)
  {
    this->cartesian_position_limits_violation = _arg;
    return *this;
  }
  Type & set__self_collision_avoidance_violation(
    const bool & _arg)
  {
    this->self_collision_avoidance_violation = _arg;
    return *this;
  }
  Type & set__joint_velocity_violation(
    const bool & _arg)
  {
    this->joint_velocity_violation = _arg;
    return *this;
  }
  Type & set__cartesian_velocity_violation(
    const bool & _arg)
  {
    this->cartesian_velocity_violation = _arg;
    return *this;
  }
  Type & set__force_control_safety_violation(
    const bool & _arg)
  {
    this->force_control_safety_violation = _arg;
    return *this;
  }
  Type & set__joint_reflex(
    const bool & _arg)
  {
    this->joint_reflex = _arg;
    return *this;
  }
  Type & set__cartesian_reflex(
    const bool & _arg)
  {
    this->cartesian_reflex = _arg;
    return *this;
  }
  Type & set__max_goal_pose_deviation_violation(
    const bool & _arg)
  {
    this->max_goal_pose_deviation_violation = _arg;
    return *this;
  }
  Type & set__max_path_pose_deviation_violation(
    const bool & _arg)
  {
    this->max_path_pose_deviation_violation = _arg;
    return *this;
  }
  Type & set__cartesian_velocity_profile_safety_violation(
    const bool & _arg)
  {
    this->cartesian_velocity_profile_safety_violation = _arg;
    return *this;
  }
  Type & set__joint_position_motion_generator_start_pose_invalid(
    const bool & _arg)
  {
    this->joint_position_motion_generator_start_pose_invalid = _arg;
    return *this;
  }
  Type & set__joint_motion_generator_position_limits_violation(
    const bool & _arg)
  {
    this->joint_motion_generator_position_limits_violation = _arg;
    return *this;
  }
  Type & set__joint_motion_generator_velocity_limits_violation(
    const bool & _arg)
  {
    this->joint_motion_generator_velocity_limits_violation = _arg;
    return *this;
  }
  Type & set__joint_motion_generator_velocity_discontinuity(
    const bool & _arg)
  {
    this->joint_motion_generator_velocity_discontinuity = _arg;
    return *this;
  }
  Type & set__joint_motion_generator_acceleration_discontinuity(
    const bool & _arg)
  {
    this->joint_motion_generator_acceleration_discontinuity = _arg;
    return *this;
  }
  Type & set__cartesian_position_motion_generator_start_pose_invalid(
    const bool & _arg)
  {
    this->cartesian_position_motion_generator_start_pose_invalid = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_elbow_limit_violation(
    const bool & _arg)
  {
    this->cartesian_motion_generator_elbow_limit_violation = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_velocity_limits_violation(
    const bool & _arg)
  {
    this->cartesian_motion_generator_velocity_limits_violation = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_velocity_discontinuity(
    const bool & _arg)
  {
    this->cartesian_motion_generator_velocity_discontinuity = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_acceleration_discontinuity(
    const bool & _arg)
  {
    this->cartesian_motion_generator_acceleration_discontinuity = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_elbow_sign_inconsistent(
    const bool & _arg)
  {
    this->cartesian_motion_generator_elbow_sign_inconsistent = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_start_elbow_invalid(
    const bool & _arg)
  {
    this->cartesian_motion_generator_start_elbow_invalid = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_joint_position_limits_violation(
    const bool & _arg)
  {
    this->cartesian_motion_generator_joint_position_limits_violation = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_joint_velocity_limits_violation(
    const bool & _arg)
  {
    this->cartesian_motion_generator_joint_velocity_limits_violation = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_joint_velocity_discontinuity(
    const bool & _arg)
  {
    this->cartesian_motion_generator_joint_velocity_discontinuity = _arg;
    return *this;
  }
  Type & set__cartesian_motion_generator_joint_acceleration_discontinuity(
    const bool & _arg)
  {
    this->cartesian_motion_generator_joint_acceleration_discontinuity = _arg;
    return *this;
  }
  Type & set__cartesian_position_motion_generator_invalid_frame(
    const bool & _arg)
  {
    this->cartesian_position_motion_generator_invalid_frame = _arg;
    return *this;
  }
  Type & set__force_controller_desired_force_tolerance_violation(
    const bool & _arg)
  {
    this->force_controller_desired_force_tolerance_violation = _arg;
    return *this;
  }
  Type & set__controller_torque_discontinuity(
    const bool & _arg)
  {
    this->controller_torque_discontinuity = _arg;
    return *this;
  }
  Type & set__start_elbow_sign_inconsistent(
    const bool & _arg)
  {
    this->start_elbow_sign_inconsistent = _arg;
    return *this;
  }
  Type & set__communication_constraints_violation(
    const bool & _arg)
  {
    this->communication_constraints_violation = _arg;
    return *this;
  }
  Type & set__power_limit_violation(
    const bool & _arg)
  {
    this->power_limit_violation = _arg;
    return *this;
  }
  Type & set__joint_p2p_insufficient_torque_for_planning(
    const bool & _arg)
  {
    this->joint_p2p_insufficient_torque_for_planning = _arg;
    return *this;
  }
  Type & set__tau_j_range_violation(
    const bool & _arg)
  {
    this->tau_j_range_violation = _arg;
    return *this;
  }
  Type & set__instability_detected(
    const bool & _arg)
  {
    this->instability_detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::msg::Errors_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::msg::Errors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::msg::Errors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::msg::Errors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::Errors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::Errors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::Errors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::Errors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::msg::Errors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::msg::Errors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__msg__Errors
    std::shared_ptr<franka_msgs::msg::Errors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__msg__Errors
    std::shared_ptr<franka_msgs::msg::Errors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Errors_ & other) const
  {
    if (this->joint_position_limits_violation != other.joint_position_limits_violation) {
      return false;
    }
    if (this->cartesian_position_limits_violation != other.cartesian_position_limits_violation) {
      return false;
    }
    if (this->self_collision_avoidance_violation != other.self_collision_avoidance_violation) {
      return false;
    }
    if (this->joint_velocity_violation != other.joint_velocity_violation) {
      return false;
    }
    if (this->cartesian_velocity_violation != other.cartesian_velocity_violation) {
      return false;
    }
    if (this->force_control_safety_violation != other.force_control_safety_violation) {
      return false;
    }
    if (this->joint_reflex != other.joint_reflex) {
      return false;
    }
    if (this->cartesian_reflex != other.cartesian_reflex) {
      return false;
    }
    if (this->max_goal_pose_deviation_violation != other.max_goal_pose_deviation_violation) {
      return false;
    }
    if (this->max_path_pose_deviation_violation != other.max_path_pose_deviation_violation) {
      return false;
    }
    if (this->cartesian_velocity_profile_safety_violation != other.cartesian_velocity_profile_safety_violation) {
      return false;
    }
    if (this->joint_position_motion_generator_start_pose_invalid != other.joint_position_motion_generator_start_pose_invalid) {
      return false;
    }
    if (this->joint_motion_generator_position_limits_violation != other.joint_motion_generator_position_limits_violation) {
      return false;
    }
    if (this->joint_motion_generator_velocity_limits_violation != other.joint_motion_generator_velocity_limits_violation) {
      return false;
    }
    if (this->joint_motion_generator_velocity_discontinuity != other.joint_motion_generator_velocity_discontinuity) {
      return false;
    }
    if (this->joint_motion_generator_acceleration_discontinuity != other.joint_motion_generator_acceleration_discontinuity) {
      return false;
    }
    if (this->cartesian_position_motion_generator_start_pose_invalid != other.cartesian_position_motion_generator_start_pose_invalid) {
      return false;
    }
    if (this->cartesian_motion_generator_elbow_limit_violation != other.cartesian_motion_generator_elbow_limit_violation) {
      return false;
    }
    if (this->cartesian_motion_generator_velocity_limits_violation != other.cartesian_motion_generator_velocity_limits_violation) {
      return false;
    }
    if (this->cartesian_motion_generator_velocity_discontinuity != other.cartesian_motion_generator_velocity_discontinuity) {
      return false;
    }
    if (this->cartesian_motion_generator_acceleration_discontinuity != other.cartesian_motion_generator_acceleration_discontinuity) {
      return false;
    }
    if (this->cartesian_motion_generator_elbow_sign_inconsistent != other.cartesian_motion_generator_elbow_sign_inconsistent) {
      return false;
    }
    if (this->cartesian_motion_generator_start_elbow_invalid != other.cartesian_motion_generator_start_elbow_invalid) {
      return false;
    }
    if (this->cartesian_motion_generator_joint_position_limits_violation != other.cartesian_motion_generator_joint_position_limits_violation) {
      return false;
    }
    if (this->cartesian_motion_generator_joint_velocity_limits_violation != other.cartesian_motion_generator_joint_velocity_limits_violation) {
      return false;
    }
    if (this->cartesian_motion_generator_joint_velocity_discontinuity != other.cartesian_motion_generator_joint_velocity_discontinuity) {
      return false;
    }
    if (this->cartesian_motion_generator_joint_acceleration_discontinuity != other.cartesian_motion_generator_joint_acceleration_discontinuity) {
      return false;
    }
    if (this->cartesian_position_motion_generator_invalid_frame != other.cartesian_position_motion_generator_invalid_frame) {
      return false;
    }
    if (this->force_controller_desired_force_tolerance_violation != other.force_controller_desired_force_tolerance_violation) {
      return false;
    }
    if (this->controller_torque_discontinuity != other.controller_torque_discontinuity) {
      return false;
    }
    if (this->start_elbow_sign_inconsistent != other.start_elbow_sign_inconsistent) {
      return false;
    }
    if (this->communication_constraints_violation != other.communication_constraints_violation) {
      return false;
    }
    if (this->power_limit_violation != other.power_limit_violation) {
      return false;
    }
    if (this->joint_p2p_insufficient_torque_for_planning != other.joint_p2p_insufficient_torque_for_planning) {
      return false;
    }
    if (this->tau_j_range_violation != other.tau_j_range_violation) {
      return false;
    }
    if (this->instability_detected != other.instability_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const Errors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Errors_

// alias to use template instance with default allocator
using Errors =
  franka_msgs::msg::Errors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__ERRORS__STRUCT_HPP_
