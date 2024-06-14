// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__VisibilityConstraint __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__VisibilityConstraint __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisibilityConstraint_
{
  using Type = VisibilityConstraint_<ContainerAllocator>;

  explicit VisibilityConstraint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init),
    sensor_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_radius = 0.0;
      this->cone_sides = 0l;
      this->max_view_angle = 0.0;
      this->max_range_angle = 0.0;
      this->sensor_view_direction = 0;
      this->weight = 0.0;
    }
  }

  explicit VisibilityConstraint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init),
    sensor_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_radius = 0.0;
      this->cone_sides = 0l;
      this->max_view_angle = 0.0;
      this->max_range_angle = 0.0;
      this->sensor_view_direction = 0;
      this->weight = 0.0;
    }
  }

  // field types and members
  using _target_radius_type =
    double;
  _target_radius_type target_radius;
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;
  using _cone_sides_type =
    int32_t;
  _cone_sides_type cone_sides;
  using _sensor_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _sensor_pose_type sensor_pose;
  using _max_view_angle_type =
    double;
  _max_view_angle_type max_view_angle;
  using _max_range_angle_type =
    double;
  _max_range_angle_type max_range_angle;
  using _sensor_view_direction_type =
    uint8_t;
  _sensor_view_direction_type sensor_view_direction;
  using _weight_type =
    double;
  _weight_type weight;

  // setters for named parameter idiom
  Type & set__target_radius(
    const double & _arg)
  {
    this->target_radius = _arg;
    return *this;
  }
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__cone_sides(
    const int32_t & _arg)
  {
    this->cone_sides = _arg;
    return *this;
  }
  Type & set__sensor_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->sensor_pose = _arg;
    return *this;
  }
  Type & set__max_view_angle(
    const double & _arg)
  {
    this->max_view_angle = _arg;
    return *this;
  }
  Type & set__max_range_angle(
    const double & _arg)
  {
    this->max_range_angle = _arg;
    return *this;
  }
  Type & set__sensor_view_direction(
    const uint8_t & _arg)
  {
    this->sensor_view_direction = _arg;
    return *this;
  }
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SENSOR_Z =
    0u;
  static constexpr uint8_t SENSOR_Y =
    1u;
  static constexpr uint8_t SENSOR_X =
    2u;

  // pointer types
  using RawPtr =
    moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__VisibilityConstraint
    std::shared_ptr<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__VisibilityConstraint
    std::shared_ptr<moveit_msgs::msg::VisibilityConstraint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisibilityConstraint_ & other) const
  {
    if (this->target_radius != other.target_radius) {
      return false;
    }
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->cone_sides != other.cone_sides) {
      return false;
    }
    if (this->sensor_pose != other.sensor_pose) {
      return false;
    }
    if (this->max_view_angle != other.max_view_angle) {
      return false;
    }
    if (this->max_range_angle != other.max_range_angle) {
      return false;
    }
    if (this->sensor_view_direction != other.sensor_view_direction) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisibilityConstraint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisibilityConstraint_

// alias to use template instance with default allocator
using VisibilityConstraint =
  moveit_msgs::msg::VisibilityConstraint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VisibilityConstraint_<ContainerAllocator>::SENSOR_Z;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VisibilityConstraint_<ContainerAllocator>::SENSOR_Y;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VisibilityConstraint_<ContainerAllocator>::SENSOR_X;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_HPP_
