// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__JointLimits __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__JointLimits __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointLimits_
{
  using Type = JointLimits_<ContainerAllocator>;

  explicit JointLimits_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->has_position_limits = false;
      this->min_position = 0.0;
      this->max_position = 0.0;
      this->has_velocity_limits = false;
      this->max_velocity = 0.0;
      this->has_acceleration_limits = false;
      this->max_acceleration = 0.0;
      this->has_jerk_limits = false;
      this->max_jerk = 0.0;
    }
  }

  explicit JointLimits_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->has_position_limits = false;
      this->min_position = 0.0;
      this->max_position = 0.0;
      this->has_velocity_limits = false;
      this->max_velocity = 0.0;
      this->has_acceleration_limits = false;
      this->max_acceleration = 0.0;
      this->has_jerk_limits = false;
      this->max_jerk = 0.0;
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _has_position_limits_type =
    bool;
  _has_position_limits_type has_position_limits;
  using _min_position_type =
    double;
  _min_position_type min_position;
  using _max_position_type =
    double;
  _max_position_type max_position;
  using _has_velocity_limits_type =
    bool;
  _has_velocity_limits_type has_velocity_limits;
  using _max_velocity_type =
    double;
  _max_velocity_type max_velocity;
  using _has_acceleration_limits_type =
    bool;
  _has_acceleration_limits_type has_acceleration_limits;
  using _max_acceleration_type =
    double;
  _max_acceleration_type max_acceleration;
  using _has_jerk_limits_type =
    bool;
  _has_jerk_limits_type has_jerk_limits;
  using _max_jerk_type =
    double;
  _max_jerk_type max_jerk;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__has_position_limits(
    const bool & _arg)
  {
    this->has_position_limits = _arg;
    return *this;
  }
  Type & set__min_position(
    const double & _arg)
  {
    this->min_position = _arg;
    return *this;
  }
  Type & set__max_position(
    const double & _arg)
  {
    this->max_position = _arg;
    return *this;
  }
  Type & set__has_velocity_limits(
    const bool & _arg)
  {
    this->has_velocity_limits = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const double & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__has_acceleration_limits(
    const bool & _arg)
  {
    this->has_acceleration_limits = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const double & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }
  Type & set__has_jerk_limits(
    const bool & _arg)
  {
    this->has_jerk_limits = _arg;
    return *this;
  }
  Type & set__max_jerk(
    const double & _arg)
  {
    this->max_jerk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::JointLimits_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::JointLimits_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::JointLimits_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::JointLimits_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::JointLimits_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::JointLimits_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::JointLimits_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::JointLimits_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::JointLimits_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::JointLimits_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__JointLimits
    std::shared_ptr<moveit_msgs::msg::JointLimits_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__JointLimits
    std::shared_ptr<moveit_msgs::msg::JointLimits_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointLimits_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->has_position_limits != other.has_position_limits) {
      return false;
    }
    if (this->min_position != other.min_position) {
      return false;
    }
    if (this->max_position != other.max_position) {
      return false;
    }
    if (this->has_velocity_limits != other.has_velocity_limits) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->has_acceleration_limits != other.has_acceleration_limits) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->has_jerk_limits != other.has_jerk_limits) {
      return false;
    }
    if (this->max_jerk != other.max_jerk) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointLimits_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointLimits_

// alias to use template instance with default allocator
using JointLimits =
  moveit_msgs::msg::JointLimits_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_HPP_
