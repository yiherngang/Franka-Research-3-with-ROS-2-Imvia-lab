// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"
// Member 'multi_dof_joint_trajectory'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__RobotTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__RobotTrajectory __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotTrajectory_
{
  using Type = RobotTrajectory_<ContainerAllocator>;

  explicit RobotTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_trajectory(_init),
    multi_dof_joint_trajectory(_init)
  {
    (void)_init;
  }

  explicit RobotTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_trajectory(_alloc, _init),
    multi_dof_joint_trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joint_trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _joint_trajectory_type joint_trajectory;
  using _multi_dof_joint_trajectory_type =
    trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator>;
  _multi_dof_joint_trajectory_type multi_dof_joint_trajectory;

  // setters for named parameter idiom
  Type & set__joint_trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->joint_trajectory = _arg;
    return *this;
  }
  Type & set__multi_dof_joint_trajectory(
    const trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator> & _arg)
  {
    this->multi_dof_joint_trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__RobotTrajectory
    std::shared_ptr<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__RobotTrajectory
    std::shared_ptr<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTrajectory_ & other) const
  {
    if (this->joint_trajectory != other.joint_trajectory) {
      return false;
    }
    if (this->multi_dof_joint_trajectory != other.multi_dof_joint_trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTrajectory_

// alias to use template instance with default allocator
using RobotTrajectory =
  moveit_msgs::msg::RobotTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__STRUCT_HPP_
