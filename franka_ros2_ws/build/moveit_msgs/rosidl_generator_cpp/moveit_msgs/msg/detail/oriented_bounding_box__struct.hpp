// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/OrientedBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'extents'
#include "geometry_msgs/msg/detail/point32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__OrientedBoundingBox __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__OrientedBoundingBox __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OrientedBoundingBox_
{
  using Type = OrientedBoundingBox_<ContainerAllocator>;

  explicit OrientedBoundingBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    extents(_init)
  {
    (void)_init;
  }

  explicit OrientedBoundingBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    extents(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _extents_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _extents_type extents;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__extents(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->extents = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__OrientedBoundingBox
    std::shared_ptr<moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__OrientedBoundingBox
    std::shared_ptr<moveit_msgs::msg::OrientedBoundingBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrientedBoundingBox_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->extents != other.extents) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrientedBoundingBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrientedBoundingBox_

// alias to use template instance with default allocator
using OrientedBoundingBox =
  moveit_msgs::msg::OrientedBoundingBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ORIENTED_BOUNDING_BOX__STRUCT_HPP_
