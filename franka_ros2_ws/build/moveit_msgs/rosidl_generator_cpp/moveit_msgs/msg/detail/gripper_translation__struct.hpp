// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/GripperTranslation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__GripperTranslation __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__GripperTranslation __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperTranslation_
{
  using Type = GripperTranslation_<ContainerAllocator>;

  explicit GripperTranslation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_distance = 0.0f;
      this->min_distance = 0.0f;
    }
  }

  explicit GripperTranslation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_distance = 0.0f;
      this->min_distance = 0.0f;
    }
  }

  // field types and members
  using _direction_type =
    geometry_msgs::msg::Vector3Stamped_<ContainerAllocator>;
  _direction_type direction;
  using _desired_distance_type =
    float;
  _desired_distance_type desired_distance;
  using _min_distance_type =
    float;
  _min_distance_type min_distance;

  // setters for named parameter idiom
  Type & set__direction(
    const geometry_msgs::msg::Vector3Stamped_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__desired_distance(
    const float & _arg)
  {
    this->desired_distance = _arg;
    return *this;
  }
  Type & set__min_distance(
    const float & _arg)
  {
    this->min_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::GripperTranslation_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::GripperTranslation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::GripperTranslation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::GripperTranslation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::GripperTranslation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::GripperTranslation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::GripperTranslation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::GripperTranslation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::GripperTranslation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::GripperTranslation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__GripperTranslation
    std::shared_ptr<moveit_msgs::msg::GripperTranslation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__GripperTranslation
    std::shared_ptr<moveit_msgs::msg::GripperTranslation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperTranslation_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->desired_distance != other.desired_distance) {
      return false;
    }
    if (this->min_distance != other.min_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperTranslation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperTranslation_

// alias to use template instance with default allocator
using GripperTranslation =
  moveit_msgs::msg::GripperTranslation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRIPPER_TRANSLATION__STRUCT_HPP_
