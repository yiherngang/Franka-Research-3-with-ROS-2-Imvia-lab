// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/JointConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__JointConstraint __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__JointConstraint __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointConstraint_
{
  using Type = JointConstraint_<ContainerAllocator>;

  explicit JointConstraint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->position = 0.0;
      this->tolerance_above = 0.0;
      this->tolerance_below = 0.0;
      this->weight = 0.0;
    }
  }

  explicit JointConstraint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->position = 0.0;
      this->tolerance_above = 0.0;
      this->tolerance_below = 0.0;
      this->weight = 0.0;
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _position_type =
    double;
  _position_type position;
  using _tolerance_above_type =
    double;
  _tolerance_above_type tolerance_above;
  using _tolerance_below_type =
    double;
  _tolerance_below_type tolerance_below;
  using _weight_type =
    double;
  _weight_type weight;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__tolerance_above(
    const double & _arg)
  {
    this->tolerance_above = _arg;
    return *this;
  }
  Type & set__tolerance_below(
    const double & _arg)
  {
    this->tolerance_below = _arg;
    return *this;
  }
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::JointConstraint_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::JointConstraint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::JointConstraint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::JointConstraint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::JointConstraint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::JointConstraint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::JointConstraint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::JointConstraint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::JointConstraint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::JointConstraint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__JointConstraint
    std::shared_ptr<moveit_msgs::msg::JointConstraint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__JointConstraint
    std::shared_ptr<moveit_msgs::msg::JointConstraint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointConstraint_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->tolerance_above != other.tolerance_above) {
      return false;
    }
    if (this->tolerance_below != other.tolerance_below) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointConstraint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointConstraint_

// alias to use template instance with default allocator
using JointConstraint =
  moveit_msgs::msg::JointConstraint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_CONSTRAINT__STRUCT_HPP_
