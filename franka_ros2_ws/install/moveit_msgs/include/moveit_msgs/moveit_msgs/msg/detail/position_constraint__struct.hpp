// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/PositionConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__STRUCT_HPP_

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
// Member 'target_point_offset'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'constraint_region'
#include "moveit_msgs/msg/detail/bounding_volume__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__PositionConstraint __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__PositionConstraint __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionConstraint_
{
  using Type = PositionConstraint_<ContainerAllocator>;

  explicit PositionConstraint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    target_point_offset(_init),
    constraint_region(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->weight = 0.0;
    }
  }

  explicit PositionConstraint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    link_name(_alloc),
    target_point_offset(_alloc, _init),
    constraint_region(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->weight = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_name_type link_name;
  using _target_point_offset_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _target_point_offset_type target_point_offset;
  using _constraint_region_type =
    moveit_msgs::msg::BoundingVolume_<ContainerAllocator>;
  _constraint_region_type constraint_region;
  using _weight_type =
    double;
  _weight_type weight;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_name = _arg;
    return *this;
  }
  Type & set__target_point_offset(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->target_point_offset = _arg;
    return *this;
  }
  Type & set__constraint_region(
    const moveit_msgs::msg::BoundingVolume_<ContainerAllocator> & _arg)
  {
    this->constraint_region = _arg;
    return *this;
  }
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::PositionConstraint_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::PositionConstraint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::PositionConstraint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::PositionConstraint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PositionConstraint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PositionConstraint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PositionConstraint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PositionConstraint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::PositionConstraint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::PositionConstraint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__PositionConstraint
    std::shared_ptr<moveit_msgs::msg::PositionConstraint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__PositionConstraint
    std::shared_ptr<moveit_msgs::msg::PositionConstraint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionConstraint_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->link_name != other.link_name) {
      return false;
    }
    if (this->target_point_offset != other.target_point_offset) {
      return false;
    }
    if (this->constraint_region != other.constraint_region) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionConstraint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionConstraint_

// alias to use template instance with default allocator
using PositionConstraint =
  moveit_msgs::msg::PositionConstraint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__STRUCT_HPP_
