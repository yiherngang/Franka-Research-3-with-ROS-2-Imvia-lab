// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/MotionSequenceRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'items'
#include "moveit_msgs/msg/detail/motion_sequence_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__MotionSequenceRequest __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__MotionSequenceRequest __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionSequenceRequest_
{
  using Type = MotionSequenceRequest_<ContainerAllocator>;

  explicit MotionSequenceRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotionSequenceRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _items_type =
    std::vector<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>>>;
  _items_type items;

  // setters for named parameter idiom
  Type & set__items(
    const std::vector<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::MotionSequenceItem_<ContainerAllocator>>> & _arg)
  {
    this->items = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__MotionSequenceRequest
    std::shared_ptr<moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__MotionSequenceRequest
    std::shared_ptr<moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequenceRequest_ & other) const
  {
    if (this->items != other.items) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequenceRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequenceRequest_

// alias to use template instance with default allocator
using MotionSequenceRequest =
  moveit_msgs::msg::MotionSequenceRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__STRUCT_HPP_
