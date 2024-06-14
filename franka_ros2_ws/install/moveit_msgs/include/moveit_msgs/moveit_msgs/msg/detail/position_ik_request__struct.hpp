// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__struct.hpp"
// Member 'pose_stamped'
// Member 'pose_stamped_vector'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__PositionIKRequest __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__PositionIKRequest __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionIKRequest_
{
  using Type = PositionIKRequest_<ContainerAllocator>;

  explicit PositionIKRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_state(_init),
    constraints(_init),
    pose_stamped(_init),
    timeout(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->avoid_collisions = false;
      this->ik_link_name = "";
    }
  }

  explicit PositionIKRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : group_name(_alloc),
    robot_state(_alloc, _init),
    constraints(_alloc, _init),
    ik_link_name(_alloc),
    pose_stamped(_alloc, _init),
    timeout(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->avoid_collisions = false;
      this->ik_link_name = "";
    }
  }

  // field types and members
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _robot_state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _robot_state_type robot_state;
  using _constraints_type =
    moveit_msgs::msg::Constraints_<ContainerAllocator>;
  _constraints_type constraints;
  using _avoid_collisions_type =
    bool;
  _avoid_collisions_type avoid_collisions;
  using _ik_link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ik_link_name_type ik_link_name;
  using _pose_stamped_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_stamped_type pose_stamped;
  using _ik_link_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _ik_link_names_type ik_link_names;
  using _pose_stamped_vector_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _pose_stamped_vector_type pose_stamped_vector;
  using _timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__robot_state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->robot_state = _arg;
    return *this;
  }
  Type & set__constraints(
    const moveit_msgs::msg::Constraints_<ContainerAllocator> & _arg)
  {
    this->constraints = _arg;
    return *this;
  }
  Type & set__avoid_collisions(
    const bool & _arg)
  {
    this->avoid_collisions = _arg;
    return *this;
  }
  Type & set__ik_link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ik_link_name = _arg;
    return *this;
  }
  Type & set__pose_stamped(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose_stamped = _arg;
    return *this;
  }
  Type & set__ik_link_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->ik_link_names = _arg;
    return *this;
  }
  Type & set__pose_stamped_vector(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->pose_stamped_vector = _arg;
    return *this;
  }
  Type & set__timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::PositionIKRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::PositionIKRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::PositionIKRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::PositionIKRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PositionIKRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PositionIKRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PositionIKRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PositionIKRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::PositionIKRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::PositionIKRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__PositionIKRequest
    std::shared_ptr<moveit_msgs::msg::PositionIKRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__PositionIKRequest
    std::shared_ptr<moveit_msgs::msg::PositionIKRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionIKRequest_ & other) const
  {
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->robot_state != other.robot_state) {
      return false;
    }
    if (this->constraints != other.constraints) {
      return false;
    }
    if (this->avoid_collisions != other.avoid_collisions) {
      return false;
    }
    if (this->ik_link_name != other.ik_link_name) {
      return false;
    }
    if (this->pose_stamped != other.pose_stamped) {
      return false;
    }
    if (this->ik_link_names != other.ik_link_names) {
      return false;
    }
    if (this->pose_stamped_vector != other.pose_stamped_vector) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionIKRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionIKRequest_

// alias to use template instance with default allocator
using PositionIKRequest =
  moveit_msgs::msg::PositionIKRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_HPP_
