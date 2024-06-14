// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/ContactInformation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__STRUCT_HPP_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__ContactInformation __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__ContactInformation __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactInformation_
{
  using Type = ContactInformation_<ContainerAllocator>;

  explicit ContactInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    normal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth = 0.0;
      this->contact_body_1 = "";
      this->body_type_1 = 0ul;
      this->contact_body_2 = "";
      this->body_type_2 = 0ul;
    }
  }

  explicit ContactInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    normal(_alloc, _init),
    contact_body_1(_alloc),
    contact_body_2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->depth = 0.0;
      this->contact_body_1 = "";
      this->body_type_1 = 0ul;
      this->contact_body_2 = "";
      this->body_type_2 = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _normal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_type normal;
  using _depth_type =
    double;
  _depth_type depth;
  using _contact_body_1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _contact_body_1_type contact_body_1;
  using _body_type_1_type =
    uint32_t;
  _body_type_1_type body_type_1;
  using _contact_body_2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _contact_body_2_type contact_body_2;
  using _body_type_2_type =
    uint32_t;
  _body_type_2_type body_type_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__normal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal = _arg;
    return *this;
  }
  Type & set__depth(
    const double & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__contact_body_1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->contact_body_1 = _arg;
    return *this;
  }
  Type & set__body_type_1(
    const uint32_t & _arg)
  {
    this->body_type_1 = _arg;
    return *this;
  }
  Type & set__contact_body_2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->contact_body_2 = _arg;
    return *this;
  }
  Type & set__body_type_2(
    const uint32_t & _arg)
  {
    this->body_type_2 = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ROBOT_LINK =
    0u;
  static constexpr uint32_t WORLD_OBJECT =
    1u;
  static constexpr uint32_t ROBOT_ATTACHED =
    2u;

  // pointer types
  using RawPtr =
    moveit_msgs::msg::ContactInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::ContactInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::ContactInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::ContactInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::ContactInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::ContactInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::ContactInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::ContactInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::ContactInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::ContactInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__ContactInformation
    std::shared_ptr<moveit_msgs::msg::ContactInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__ContactInformation
    std::shared_ptr<moveit_msgs::msg::ContactInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactInformation_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->normal != other.normal) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->contact_body_1 != other.contact_body_1) {
      return false;
    }
    if (this->body_type_1 != other.body_type_1) {
      return false;
    }
    if (this->contact_body_2 != other.contact_body_2) {
      return false;
    }
    if (this->body_type_2 != other.body_type_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactInformation_

// alias to use template instance with default allocator
using ContactInformation =
  moveit_msgs::msg::ContactInformation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ContactInformation_<ContainerAllocator>::ROBOT_LINK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ContactInformation_<ContainerAllocator>::WORLD_OBJECT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ContactInformation_<ContainerAllocator>::ROBOT_ATTACHED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__STRUCT_HPP_
