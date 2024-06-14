// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/LinkPadding.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__LinkPadding __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__LinkPadding __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinkPadding_
{
  using Type = LinkPadding_<ContainerAllocator>;

  explicit LinkPadding_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->padding = 0.0;
    }
  }

  explicit LinkPadding_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->padding = 0.0;
    }
  }

  // field types and members
  using _link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_name_type link_name;
  using _padding_type =
    double;
  _padding_type padding;

  // setters for named parameter idiom
  Type & set__link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_name = _arg;
    return *this;
  }
  Type & set__padding(
    const double & _arg)
  {
    this->padding = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::LinkPadding_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::LinkPadding_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::LinkPadding_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::LinkPadding_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::LinkPadding_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::LinkPadding_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::LinkPadding_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::LinkPadding_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::LinkPadding_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::LinkPadding_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__LinkPadding
    std::shared_ptr<moveit_msgs::msg::LinkPadding_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__LinkPadding
    std::shared_ptr<moveit_msgs::msg::LinkPadding_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinkPadding_ & other) const
  {
    if (this->link_name != other.link_name) {
      return false;
    }
    if (this->padding != other.padding) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinkPadding_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinkPadding_

// alias to use template instance with default allocator
using LinkPadding =
  moveit_msgs::msg::LinkPadding_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__LINK_PADDING__STRUCT_HPP_
