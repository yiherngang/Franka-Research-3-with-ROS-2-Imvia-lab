// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__STRUCT_HPP_
#define FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'is_cartesian_linear_collision'
// Member 'is_cartesian_angular_collision'
// Member 'is_cartesian_linear_contact'
// Member 'is_cartesian_angular_contact'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franka_msgs__msg__CollisionIndicators __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__msg__CollisionIndicators __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionIndicators_
{
  using Type = CollisionIndicators_<ContainerAllocator>;

  explicit CollisionIndicators_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : is_cartesian_linear_collision(_init),
    is_cartesian_angular_collision(_init),
    is_cartesian_linear_contact(_init),
    is_cartesian_angular_contact(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->is_joint_collision.begin(), this->is_joint_collision.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->is_joint_contact.begin(), this->is_joint_contact.end(), 0.0);
    }
  }

  explicit CollisionIndicators_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : is_cartesian_linear_collision(_alloc, _init),
    is_cartesian_angular_collision(_alloc, _init),
    is_cartesian_linear_contact(_alloc, _init),
    is_cartesian_angular_contact(_alloc, _init),
    is_joint_collision(_alloc),
    is_joint_contact(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->is_joint_collision.begin(), this->is_joint_collision.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->is_joint_contact.begin(), this->is_joint_contact.end(), 0.0);
    }
  }

  // field types and members
  using _is_cartesian_linear_collision_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _is_cartesian_linear_collision_type is_cartesian_linear_collision;
  using _is_cartesian_angular_collision_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _is_cartesian_angular_collision_type is_cartesian_angular_collision;
  using _is_cartesian_linear_contact_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _is_cartesian_linear_contact_type is_cartesian_linear_contact;
  using _is_cartesian_angular_contact_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _is_cartesian_angular_contact_type is_cartesian_angular_contact;
  using _is_joint_collision_type =
    std::array<double, 7>;
  _is_joint_collision_type is_joint_collision;
  using _is_joint_contact_type =
    std::array<double, 7>;
  _is_joint_contact_type is_joint_contact;

  // setters for named parameter idiom
  Type & set__is_cartesian_linear_collision(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->is_cartesian_linear_collision = _arg;
    return *this;
  }
  Type & set__is_cartesian_angular_collision(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->is_cartesian_angular_collision = _arg;
    return *this;
  }
  Type & set__is_cartesian_linear_contact(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->is_cartesian_linear_contact = _arg;
    return *this;
  }
  Type & set__is_cartesian_angular_contact(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->is_cartesian_angular_contact = _arg;
    return *this;
  }
  Type & set__is_joint_collision(
    const std::array<double, 7> & _arg)
  {
    this->is_joint_collision = _arg;
    return *this;
  }
  Type & set__is_joint_contact(
    const std::array<double, 7> & _arg)
  {
    this->is_joint_contact = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::msg::CollisionIndicators_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::msg::CollisionIndicators_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::msg::CollisionIndicators_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::msg::CollisionIndicators_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::CollisionIndicators_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::CollisionIndicators_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::CollisionIndicators_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::CollisionIndicators_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::msg::CollisionIndicators_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::msg::CollisionIndicators_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__msg__CollisionIndicators
    std::shared_ptr<franka_msgs::msg::CollisionIndicators_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__msg__CollisionIndicators
    std::shared_ptr<franka_msgs::msg::CollisionIndicators_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionIndicators_ & other) const
  {
    if (this->is_cartesian_linear_collision != other.is_cartesian_linear_collision) {
      return false;
    }
    if (this->is_cartesian_angular_collision != other.is_cartesian_angular_collision) {
      return false;
    }
    if (this->is_cartesian_linear_contact != other.is_cartesian_linear_contact) {
      return false;
    }
    if (this->is_cartesian_angular_contact != other.is_cartesian_angular_contact) {
      return false;
    }
    if (this->is_joint_collision != other.is_joint_collision) {
      return false;
    }
    if (this->is_joint_contact != other.is_joint_contact) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionIndicators_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionIndicators_

// alias to use template instance with default allocator
using CollisionIndicators =
  franka_msgs::msg::CollisionIndicators_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__COLLISION_INDICATORS__STRUCT_HPP_
