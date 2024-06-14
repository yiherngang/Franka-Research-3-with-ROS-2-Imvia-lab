// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/TrajectoryConstraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__TrajectoryConstraints __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__TrajectoryConstraints __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryConstraints_
{
  using Type = TrajectoryConstraints_<ContainerAllocator>;

  explicit TrajectoryConstraints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TrajectoryConstraints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _constraints_type =
    std::vector<moveit_msgs::msg::Constraints_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Constraints_<ContainerAllocator>>>;
  _constraints_type constraints;

  // setters for named parameter idiom
  Type & set__constraints(
    const std::vector<moveit_msgs::msg::Constraints_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::Constraints_<ContainerAllocator>>> & _arg)
  {
    this->constraints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__TrajectoryConstraints
    std::shared_ptr<moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__TrajectoryConstraints
    std::shared_ptr<moveit_msgs::msg::TrajectoryConstraints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryConstraints_ & other) const
  {
    if (this->constraints != other.constraints) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryConstraints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryConstraints_

// alias to use template instance with default allocator
using TrajectoryConstraints =
  moveit_msgs::msg::TrajectoryConstraints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__TRAJECTORY_CONSTRAINTS__STRUCT_HPP_
