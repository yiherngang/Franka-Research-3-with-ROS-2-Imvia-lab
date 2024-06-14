// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/MotionSequenceItem.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'req'
#include "moveit_msgs/msg/detail/motion_plan_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__MotionSequenceItem __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__MotionSequenceItem __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionSequenceItem_
{
  using Type = MotionSequenceItem_<ContainerAllocator>;

  explicit MotionSequenceItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : req(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blend_radius = 0.0;
    }
  }

  explicit MotionSequenceItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : req(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blend_radius = 0.0;
    }
  }

  // field types and members
  using _req_type =
    moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator>;
  _req_type req;
  using _blend_radius_type =
    double;
  _blend_radius_type blend_radius;

  // setters for named parameter idiom
  Type & set__req(
    const moveit_msgs::msg::MotionPlanRequest_<ContainerAllocator> & _arg)
  {
    this->req = _arg;
    return *this;
  }
  Type & set__blend_radius(
    const double & _arg)
  {
    this->blend_radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__MotionSequenceItem
    std::shared_ptr<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__MotionSequenceItem
    std::shared_ptr<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequenceItem_ & other) const
  {
    if (this->req != other.req) {
      return false;
    }
    if (this->blend_radius != other.blend_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequenceItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequenceItem_

// alias to use template instance with default allocator
using MotionSequenceItem =
  moveit_msgs::msg::MotionSequenceItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__STRUCT_HPP_
