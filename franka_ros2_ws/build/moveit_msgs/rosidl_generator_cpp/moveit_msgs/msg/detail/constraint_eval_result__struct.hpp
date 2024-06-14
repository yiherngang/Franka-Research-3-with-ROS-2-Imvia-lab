// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/ConstraintEvalResult.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONSTRAINT_EVAL_RESULT__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONSTRAINT_EVAL_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__ConstraintEvalResult __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__ConstraintEvalResult __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstraintEvalResult_
{
  using Type = ConstraintEvalResult_<ContainerAllocator>;

  explicit ConstraintEvalResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->distance = 0.0;
    }
  }

  explicit ConstraintEvalResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__ConstraintEvalResult
    std::shared_ptr<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__ConstraintEvalResult
    std::shared_ptr<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstraintEvalResult_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstraintEvalResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstraintEvalResult_

// alias to use template instance with default allocator
using ConstraintEvalResult =
  moveit_msgs::msg::ConstraintEvalResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONSTRAINT_EVAL_RESULT__STRUCT_HPP_
