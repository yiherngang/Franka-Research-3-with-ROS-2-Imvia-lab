// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:msg/GraspEpsilon.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__STRUCT_HPP_
#define FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franka_msgs__msg__GraspEpsilon __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__msg__GraspEpsilon __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraspEpsilon_
{
  using Type = GraspEpsilon_<ContainerAllocator>;

  explicit GraspEpsilon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->inner = 0.005;
      this->outer = 0.005;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->inner = 0.0;
      this->outer = 0.0;
    }
  }

  explicit GraspEpsilon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->inner = 0.005;
      this->outer = 0.005;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->inner = 0.0;
      this->outer = 0.0;
    }
  }

  // field types and members
  using _inner_type =
    double;
  _inner_type inner;
  using _outer_type =
    double;
  _outer_type outer;

  // setters for named parameter idiom
  Type & set__inner(
    const double & _arg)
  {
    this->inner = _arg;
    return *this;
  }
  Type & set__outer(
    const double & _arg)
  {
    this->outer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::msg::GraspEpsilon_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::msg::GraspEpsilon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::msg::GraspEpsilon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::msg::GraspEpsilon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::GraspEpsilon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::GraspEpsilon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::GraspEpsilon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::GraspEpsilon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::msg::GraspEpsilon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::msg::GraspEpsilon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__msg__GraspEpsilon
    std::shared_ptr<franka_msgs::msg::GraspEpsilon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__msg__GraspEpsilon
    std::shared_ptr<franka_msgs::msg::GraspEpsilon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspEpsilon_ & other) const
  {
    if (this->inner != other.inner) {
      return false;
    }
    if (this->outer != other.outer) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspEpsilon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspEpsilon_

// alias to use template instance with default allocator
using GraspEpsilon =
  franka_msgs::msg::GraspEpsilon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__STRUCT_HPP_
