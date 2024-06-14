// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/GenericTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__STRUCT_HPP_

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
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"
// Member 'cartesian_trajectory'
#include "moveit_msgs/msg/detail/cartesian_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__GenericTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__GenericTrajectory __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GenericTrajectory_
{
  using Type = GenericTrajectory_<ContainerAllocator>;

  explicit GenericTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit GenericTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_trajectory_type =
    std::vector<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>>>;
  _joint_trajectory_type joint_trajectory;
  using _cartesian_trajectory_type =
    std::vector<moveit_msgs::msg::CartesianTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CartesianTrajectory_<ContainerAllocator>>>;
  _cartesian_trajectory_type cartesian_trajectory;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__joint_trajectory(
    const std::vector<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->joint_trajectory = _arg;
    return *this;
  }
  Type & set__cartesian_trajectory(
    const std::vector<moveit_msgs::msg::CartesianTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CartesianTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->cartesian_trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::GenericTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::GenericTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__GenericTrajectory
    std::shared_ptr<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__GenericTrajectory
    std::shared_ptr<moveit_msgs::msg::GenericTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenericTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_trajectory != other.joint_trajectory) {
      return false;
    }
    if (this->cartesian_trajectory != other.cartesian_trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenericTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenericTrajectory_

// alias to use template instance with default allocator
using GenericTrajectory =
  moveit_msgs::msg::GenericTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__GENERIC_TRAJECTORY__STRUCT_HPP_
