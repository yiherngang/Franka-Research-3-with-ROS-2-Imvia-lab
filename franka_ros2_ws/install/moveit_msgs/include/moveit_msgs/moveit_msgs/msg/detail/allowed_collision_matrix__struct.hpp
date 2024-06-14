// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'entry_values'
#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__AllowedCollisionMatrix __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__AllowedCollisionMatrix __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllowedCollisionMatrix_
{
  using Type = AllowedCollisionMatrix_<ContainerAllocator>;

  explicit AllowedCollisionMatrix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AllowedCollisionMatrix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _entry_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _entry_names_type entry_names;
  using _entry_values_type =
    std::vector<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>>;
  _entry_values_type entry_values;
  using _default_entry_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _default_entry_names_type default_entry_names;
  using _default_entry_values_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _default_entry_values_type default_entry_values;

  // setters for named parameter idiom
  Type & set__entry_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->entry_names = _arg;
    return *this;
  }
  Type & set__entry_values(
    const std::vector<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>> & _arg)
  {
    this->entry_values = _arg;
    return *this;
  }
  Type & set__default_entry_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->default_entry_names = _arg;
    return *this;
  }
  Type & set__default_entry_values(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->default_entry_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__AllowedCollisionMatrix
    std::shared_ptr<moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__AllowedCollisionMatrix
    std::shared_ptr<moveit_msgs::msg::AllowedCollisionMatrix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllowedCollisionMatrix_ & other) const
  {
    if (this->entry_names != other.entry_names) {
      return false;
    }
    if (this->entry_values != other.entry_values) {
      return false;
    }
    if (this->default_entry_names != other.default_entry_names) {
      return false;
    }
    if (this->default_entry_values != other.default_entry_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllowedCollisionMatrix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllowedCollisionMatrix_

// alias to use template instance with default allocator
using AllowedCollisionMatrix =
  moveit_msgs::msg::AllowedCollisionMatrix_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_HPP_
