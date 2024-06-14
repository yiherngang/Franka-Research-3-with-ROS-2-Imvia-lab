// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"
// Member 'multi_dof_joint_state'
#include "sensor_msgs/msg/detail/multi_dof_joint_state__struct.hpp"
// Member 'attached_collision_objects'
#include "moveit_msgs/msg/detail/attached_collision_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__RobotState __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_state(_init),
    multi_dof_joint_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_diff = false;
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_state(_alloc, _init),
    multi_dof_joint_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_diff = false;
    }
  }

  // field types and members
  using _joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_state_type joint_state;
  using _multi_dof_joint_state_type =
    sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>;
  _multi_dof_joint_state_type multi_dof_joint_state;
  using _attached_collision_objects_type =
    std::vector<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>>>;
  _attached_collision_objects_type attached_collision_objects;
  using _is_diff_type =
    bool;
  _is_diff_type is_diff;

  // setters for named parameter idiom
  Type & set__joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }
  Type & set__multi_dof_joint_state(
    const sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> & _arg)
  {
    this->multi_dof_joint_state = _arg;
    return *this;
  }
  Type & set__attached_collision_objects(
    const std::vector<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::AttachedCollisionObject_<ContainerAllocator>>> & _arg)
  {
    this->attached_collision_objects = _arg;
    return *this;
  }
  Type & set__is_diff(
    const bool & _arg)
  {
    this->is_diff = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__RobotState
    std::shared_ptr<moveit_msgs::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__RobotState
    std::shared_ptr<moveit_msgs::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->joint_state != other.joint_state) {
      return false;
    }
    if (this->multi_dof_joint_state != other.multi_dof_joint_state) {
      return false;
    }
    if (this->attached_collision_objects != other.attached_collision_objects) {
      return false;
    }
    if (this->is_diff != other.is_diff) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  moveit_msgs::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
