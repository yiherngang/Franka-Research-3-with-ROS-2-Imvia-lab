// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "moveit_msgs/msg/detail/cartesian_point__struct.hpp"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__CartesianTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__CartesianTrajectoryPoint __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianTrajectoryPoint_
{
  using Type = CartesianTrajectoryPoint_<ContainerAllocator>;

  explicit CartesianTrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init),
    time_from_start(_init)
  {
    (void)_init;
  }

  explicit CartesianTrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    time_from_start(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    moveit_msgs::msg::CartesianPoint_<ContainerAllocator>;
  _point_type point;
  using _time_from_start_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_from_start_type time_from_start;

  // setters for named parameter idiom
  Type & set__point(
    const moveit_msgs::msg::CartesianPoint_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__time_from_start(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_from_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__CartesianTrajectoryPoint
    std::shared_ptr<moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__CartesianTrajectoryPoint
    std::shared_ptr<moveit_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianTrajectoryPoint_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianTrajectoryPoint_

// alias to use template instance with default allocator
using CartesianTrajectoryPoint =
  moveit_msgs::msg::CartesianTrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_
