// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/DisplayRobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'highlight_links'
#include "moveit_msgs/msg/detail/object_color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__DisplayRobotState __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__DisplayRobotState __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DisplayRobotState_
{
  using Type = DisplayRobotState_<ContainerAllocator>;

  explicit DisplayRobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hide = false;
    }
  }

  explicit DisplayRobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hide = false;
    }
  }

  // field types and members
  using _state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _state_type state;
  using _highlight_links_type =
    std::vector<moveit_msgs::msg::ObjectColor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::ObjectColor_<ContainerAllocator>>>;
  _highlight_links_type highlight_links;
  using _hide_type =
    bool;
  _hide_type hide;

  // setters for named parameter idiom
  Type & set__state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__highlight_links(
    const std::vector<moveit_msgs::msg::ObjectColor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::ObjectColor_<ContainerAllocator>>> & _arg)
  {
    this->highlight_links = _arg;
    return *this;
  }
  Type & set__hide(
    const bool & _arg)
  {
    this->hide = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::DisplayRobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::DisplayRobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::DisplayRobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::DisplayRobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::DisplayRobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::DisplayRobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::DisplayRobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::DisplayRobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::DisplayRobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::DisplayRobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__DisplayRobotState
    std::shared_ptr<moveit_msgs::msg::DisplayRobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__DisplayRobotState
    std::shared_ptr<moveit_msgs::msg::DisplayRobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DisplayRobotState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->highlight_links != other.highlight_links) {
      return false;
    }
    if (this->hide != other.hide) {
      return false;
    }
    return true;
  }
  bool operator!=(const DisplayRobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DisplayRobotState_

// alias to use template instance with default allocator
using DisplayRobotState =
  moveit_msgs::msg::DisplayRobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__DISPLAY_ROBOT_STATE__STRUCT_HPP_
