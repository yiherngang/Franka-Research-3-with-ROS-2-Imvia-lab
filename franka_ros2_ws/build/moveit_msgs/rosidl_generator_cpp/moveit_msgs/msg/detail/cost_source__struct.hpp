// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/CostSource.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'aabb_min'
// Member 'aabb_max'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__CostSource __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__CostSource __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CostSource_
{
  using Type = CostSource_<ContainerAllocator>;

  explicit CostSource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : aabb_min(_init),
    aabb_max(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cost_density = 0.0;
    }
  }

  explicit CostSource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : aabb_min(_alloc, _init),
    aabb_max(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cost_density = 0.0;
    }
  }

  // field types and members
  using _cost_density_type =
    double;
  _cost_density_type cost_density;
  using _aabb_min_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _aabb_min_type aabb_min;
  using _aabb_max_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _aabb_max_type aabb_max;

  // setters for named parameter idiom
  Type & set__cost_density(
    const double & _arg)
  {
    this->cost_density = _arg;
    return *this;
  }
  Type & set__aabb_min(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->aabb_min = _arg;
    return *this;
  }
  Type & set__aabb_max(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->aabb_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::CostSource_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::CostSource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::CostSource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::CostSource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::CostSource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::CostSource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::CostSource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::CostSource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::CostSource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::CostSource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__CostSource
    std::shared_ptr<moveit_msgs::msg::CostSource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__CostSource
    std::shared_ptr<moveit_msgs::msg::CostSource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CostSource_ & other) const
  {
    if (this->cost_density != other.cost_density) {
      return false;
    }
    if (this->aabb_min != other.aabb_min) {
      return false;
    }
    if (this->aabb_max != other.aabb_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const CostSource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CostSource_

// alias to use template instance with default allocator
using CostSource =
  moveit_msgs::msg::CostSource_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__COST_SOURCE__STRUCT_HPP_
