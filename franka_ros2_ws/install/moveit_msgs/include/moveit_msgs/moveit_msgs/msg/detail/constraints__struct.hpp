// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_constraints'
#include "moveit_msgs/msg/detail/joint_constraint__struct.hpp"
// Member 'position_constraints'
#include "moveit_msgs/msg/detail/position_constraint__struct.hpp"
// Member 'orientation_constraints'
#include "moveit_msgs/msg/detail/orientation_constraint__struct.hpp"
// Member 'visibility_constraints'
#include "moveit_msgs/msg/detail/visibility_constraint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__Constraints __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__Constraints __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Constraints_
{
  using Type = Constraints_<ContainerAllocator>;

  explicit Constraints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Constraints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _joint_constraints_type =
    std::vector<moveit_msgs::msg::JointConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::JointConstraint_<ContainerAllocator>>>;
  _joint_constraints_type joint_constraints;
  using _position_constraints_type =
    std::vector<moveit_msgs::msg::PositionConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::PositionConstraint_<ContainerAllocator>>>;
  _position_constraints_type position_constraints;
  using _orientation_constraints_type =
    std::vector<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>>>;
  _orientation_constraints_type orientation_constraints;
  using _visibility_constraints_type =
    std::vector<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>>>;
  _visibility_constraints_type visibility_constraints;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__joint_constraints(
    const std::vector<moveit_msgs::msg::JointConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::JointConstraint_<ContainerAllocator>>> & _arg)
  {
    this->joint_constraints = _arg;
    return *this;
  }
  Type & set__position_constraints(
    const std::vector<moveit_msgs::msg::PositionConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::PositionConstraint_<ContainerAllocator>>> & _arg)
  {
    this->position_constraints = _arg;
    return *this;
  }
  Type & set__orientation_constraints(
    const std::vector<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>>> & _arg)
  {
    this->orientation_constraints = _arg;
    return *this;
  }
  Type & set__visibility_constraints(
    const std::vector<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>>> & _arg)
  {
    this->visibility_constraints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::Constraints_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::Constraints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::Constraints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::Constraints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::Constraints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::Constraints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::Constraints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::Constraints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::Constraints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::Constraints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__Constraints
    std::shared_ptr<moveit_msgs::msg::Constraints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__Constraints
    std::shared_ptr<moveit_msgs::msg::Constraints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Constraints_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->joint_constraints != other.joint_constraints) {
      return false;
    }
    if (this->position_constraints != other.position_constraints) {
      return false;
    }
    if (this->orientation_constraints != other.orientation_constraints) {
      return false;
    }
    if (this->visibility_constraints != other.visibility_constraints) {
      return false;
    }
    return true;
  }
  bool operator!=(const Constraints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Constraints_

// alias to use template instance with default allocator
using Constraints =
  moveit_msgs::msg::Constraints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONSTRAINTS__STRUCT_HPP_
