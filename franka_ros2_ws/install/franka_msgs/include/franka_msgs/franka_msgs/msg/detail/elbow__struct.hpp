// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ELBOW__STRUCT_HPP_
#define FRANKA_MSGS__MSG__DETAIL__ELBOW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franka_msgs__msg__Elbow __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__msg__Elbow __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Elbow_
{
  using Type = Elbow_<ContainerAllocator>;

  explicit Elbow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->desired_position.begin(), this->desired_position.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->commanded_position.begin(), this->commanded_position.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->commanded_velocity.begin(), this->commanded_velocity.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->commanded_acceleration.begin(), this->commanded_acceleration.end(), 0.0);
    }
  }

  explicit Elbow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    desired_position(_alloc),
    commanded_position(_alloc),
    commanded_velocity(_alloc),
    commanded_acceleration(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->desired_position.begin(), this->desired_position.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->commanded_position.begin(), this->commanded_position.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->commanded_velocity.begin(), this->commanded_velocity.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->commanded_acceleration.begin(), this->commanded_acceleration.end(), 0.0);
    }
  }

  // field types and members
  using _position_type =
    std::array<double, 2>;
  _position_type position;
  using _desired_position_type =
    std::array<double, 2>;
  _desired_position_type desired_position;
  using _commanded_position_type =
    std::array<double, 2>;
  _commanded_position_type commanded_position;
  using _commanded_velocity_type =
    std::array<double, 2>;
  _commanded_velocity_type commanded_velocity;
  using _commanded_acceleration_type =
    std::array<double, 2>;
  _commanded_acceleration_type commanded_acceleration;

  // setters for named parameter idiom
  Type & set__position(
    const std::array<double, 2> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__desired_position(
    const std::array<double, 2> & _arg)
  {
    this->desired_position = _arg;
    return *this;
  }
  Type & set__commanded_position(
    const std::array<double, 2> & _arg)
  {
    this->commanded_position = _arg;
    return *this;
  }
  Type & set__commanded_velocity(
    const std::array<double, 2> & _arg)
  {
    this->commanded_velocity = _arg;
    return *this;
  }
  Type & set__commanded_acceleration(
    const std::array<double, 2> & _arg)
  {
    this->commanded_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::msg::Elbow_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::msg::Elbow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::msg::Elbow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::msg::Elbow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::Elbow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::Elbow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::Elbow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::Elbow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::msg::Elbow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::msg::Elbow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__msg__Elbow
    std::shared_ptr<franka_msgs::msg::Elbow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__msg__Elbow
    std::shared_ptr<franka_msgs::msg::Elbow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Elbow_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->desired_position != other.desired_position) {
      return false;
    }
    if (this->commanded_position != other.commanded_position) {
      return false;
    }
    if (this->commanded_velocity != other.commanded_velocity) {
      return false;
    }
    if (this->commanded_acceleration != other.commanded_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Elbow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Elbow_

// alias to use template instance with default allocator
using Elbow =
  franka_msgs::msg::Elbow_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__ELBOW__STRUCT_HPP_
