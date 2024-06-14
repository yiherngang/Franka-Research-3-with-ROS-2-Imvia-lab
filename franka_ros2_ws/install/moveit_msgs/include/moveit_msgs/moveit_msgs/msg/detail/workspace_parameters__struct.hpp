// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/WorkspaceParameters.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__STRUCT_HPP_

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
// Member 'min_corner'
// Member 'max_corner'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__WorkspaceParameters __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__WorkspaceParameters __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorkspaceParameters_
{
  using Type = WorkspaceParameters_<ContainerAllocator>;

  explicit WorkspaceParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    min_corner(_init),
    max_corner(_init)
  {
    (void)_init;
  }

  explicit WorkspaceParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    min_corner(_alloc, _init),
    max_corner(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _min_corner_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _min_corner_type min_corner;
  using _max_corner_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _max_corner_type max_corner;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__min_corner(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->min_corner = _arg;
    return *this;
  }
  Type & set__max_corner(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->max_corner = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__WorkspaceParameters
    std::shared_ptr<moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__WorkspaceParameters
    std::shared_ptr<moveit_msgs::msg::WorkspaceParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorkspaceParameters_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->min_corner != other.min_corner) {
      return false;
    }
    if (this->max_corner != other.max_corner) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorkspaceParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorkspaceParameters_

// alias to use template instance with default allocator
using WorkspaceParameters =
  moveit_msgs::msg::WorkspaceParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__STRUCT_HPP_
