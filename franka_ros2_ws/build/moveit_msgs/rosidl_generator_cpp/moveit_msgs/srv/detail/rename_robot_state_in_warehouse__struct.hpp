// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/RenameRobotStateInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__RenameRobotStateInWarehouse_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__RenameRobotStateInWarehouse_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RenameRobotStateInWarehouse_Request_
{
  using Type = RenameRobotStateInWarehouse_Request_<ContainerAllocator>;

  explicit RenameRobotStateInWarehouse_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->old_name = "";
      this->new_name = "";
      this->robot = "";
    }
  }

  explicit RenameRobotStateInWarehouse_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : old_name(_alloc),
    new_name(_alloc),
    robot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->old_name = "";
      this->new_name = "";
      this->robot = "";
    }
  }

  // field types and members
  using _old_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _old_name_type old_name;
  using _new_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _new_name_type new_name;
  using _robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type robot;

  // setters for named parameter idiom
  Type & set__old_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->old_name = _arg;
    return *this;
  }
  Type & set__new_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->new_name = _arg;
    return *this;
  }
  Type & set__robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__RenameRobotStateInWarehouse_Request
    std::shared_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__RenameRobotStateInWarehouse_Request
    std::shared_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RenameRobotStateInWarehouse_Request_ & other) const
  {
    if (this->old_name != other.old_name) {
      return false;
    }
    if (this->new_name != other.new_name) {
      return false;
    }
    if (this->robot != other.robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const RenameRobotStateInWarehouse_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RenameRobotStateInWarehouse_Request_

// alias to use template instance with default allocator
using RenameRobotStateInWarehouse_Request =
  moveit_msgs::srv::RenameRobotStateInWarehouse_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__RenameRobotStateInWarehouse_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__RenameRobotStateInWarehouse_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RenameRobotStateInWarehouse_Response_
{
  using Type = RenameRobotStateInWarehouse_Response_<ContainerAllocator>;

  explicit RenameRobotStateInWarehouse_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RenameRobotStateInWarehouse_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__RenameRobotStateInWarehouse_Response
    std::shared_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__RenameRobotStateInWarehouse_Response
    std::shared_ptr<moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RenameRobotStateInWarehouse_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RenameRobotStateInWarehouse_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RenameRobotStateInWarehouse_Response_

// alias to use template instance with default allocator
using RenameRobotStateInWarehouse_Response =
  moveit_msgs::srv::RenameRobotStateInWarehouse_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct RenameRobotStateInWarehouse
{
  using Request = moveit_msgs::srv::RenameRobotStateInWarehouse_Request;
  using Response = moveit_msgs::srv::RenameRobotStateInWarehouse_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__STRUCT_HPP_
