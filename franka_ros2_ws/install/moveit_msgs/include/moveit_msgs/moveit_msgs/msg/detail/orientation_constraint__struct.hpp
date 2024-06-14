// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/OrientationConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__STRUCT_HPP_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__OrientationConstraint __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__OrientationConstraint __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OrientationConstraint_
{
  using Type = OrientationConstraint_<ContainerAllocator>;

  explicit OrientationConstraint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->absolute_x_axis_tolerance = 0.0;
      this->absolute_y_axis_tolerance = 0.0;
      this->absolute_z_axis_tolerance = 0.0;
      this->parameterization = 0;
      this->weight = 0.0;
    }
  }

  explicit OrientationConstraint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    orientation(_alloc, _init),
    link_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->absolute_x_axis_tolerance = 0.0;
      this->absolute_y_axis_tolerance = 0.0;
      this->absolute_z_axis_tolerance = 0.0;
      this->parameterization = 0;
      this->weight = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_name_type link_name;
  using _absolute_x_axis_tolerance_type =
    double;
  _absolute_x_axis_tolerance_type absolute_x_axis_tolerance;
  using _absolute_y_axis_tolerance_type =
    double;
  _absolute_y_axis_tolerance_type absolute_y_axis_tolerance;
  using _absolute_z_axis_tolerance_type =
    double;
  _absolute_z_axis_tolerance_type absolute_z_axis_tolerance;
  using _parameterization_type =
    uint8_t;
  _parameterization_type parameterization;
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
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_name = _arg;
    return *this;
  }
  Type & set__absolute_x_axis_tolerance(
    const double & _arg)
  {
    this->absolute_x_axis_tolerance = _arg;
    return *this;
  }
  Type & set__absolute_y_axis_tolerance(
    const double & _arg)
  {
    this->absolute_y_axis_tolerance = _arg;
    return *this;
  }
  Type & set__absolute_z_axis_tolerance(
    const double & _arg)
  {
    this->absolute_z_axis_tolerance = _arg;
    return *this;
  }
  Type & set__parameterization(
    const uint8_t & _arg)
  {
    this->parameterization = _arg;
    return *this;
  }
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t XYZ_EULER_ANGLES =
    0u;
  static constexpr uint8_t ROTATION_VECTOR =
    1u;

  // pointer types
  using RawPtr =
    moveit_msgs::msg::OrientationConstraint_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::OrientationConstraint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__OrientationConstraint
    std::shared_ptr<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__OrientationConstraint
    std::shared_ptr<moveit_msgs::msg::OrientationConstraint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrientationConstraint_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->link_name != other.link_name) {
      return false;
    }
    if (this->absolute_x_axis_tolerance != other.absolute_x_axis_tolerance) {
      return false;
    }
    if (this->absolute_y_axis_tolerance != other.absolute_y_axis_tolerance) {
      return false;
    }
    if (this->absolute_z_axis_tolerance != other.absolute_z_axis_tolerance) {
      return false;
    }
    if (this->parameterization != other.parameterization) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrientationConstraint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrientationConstraint_

// alias to use template instance with default allocator
using OrientationConstraint =
  moveit_msgs::msg::OrientationConstraint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrientationConstraint_<ContainerAllocator>::XYZ_EULER_ANGLES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrientationConstraint_<ContainerAllocator>::ROTATION_VECTOR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__STRUCT_HPP_
