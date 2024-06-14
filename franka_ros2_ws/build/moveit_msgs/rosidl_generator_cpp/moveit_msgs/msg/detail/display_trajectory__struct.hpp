// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/DisplayTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__DisplayTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__DisplayTrajectory __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DisplayTrajectory_
{
  using Type = DisplayTrajectory_<ContainerAllocator>;

  explicit DisplayTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_start(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_id = "";
    }
  }

  explicit DisplayTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model_id(_alloc),
    trajectory_start(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_id = "";
    }
  }

  // field types and members
  using _model_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_id_type model_id;
  using _trajectory_type =
    std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>;
  _trajectory_type trajectory;
  using _trajectory_start_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _trajectory_start_type trajectory_start;

  // setters for named parameter idiom
  Type & set__model_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_id = _arg;
    return *this;
  }
  Type & set__trajectory(
    const std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__trajectory_start(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->trajectory_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__DisplayTrajectory
    std::shared_ptr<moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__DisplayTrajectory
    std::shared_ptr<moveit_msgs::msg::DisplayTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DisplayTrajectory_ & other) const
  {
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->trajectory_start != other.trajectory_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const DisplayTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DisplayTrajectory_

// alias to use template instance with default allocator
using DisplayTrajectory =
  moveit_msgs::msg::DisplayTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__STRUCT_HPP_
