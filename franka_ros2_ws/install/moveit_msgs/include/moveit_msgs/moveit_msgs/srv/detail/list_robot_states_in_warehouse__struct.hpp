// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__ListRobotStatesInWarehouse_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__ListRobotStatesInWarehouse_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListRobotStatesInWarehouse_Request_
{
  using Type = ListRobotStatesInWarehouse_Request_<ContainerAllocator>;

  explicit ListRobotStatesInWarehouse_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->regex = "";
      this->robot = "";
    }
  }

  explicit ListRobotStatesInWarehouse_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : regex(_alloc),
    robot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->regex = "";
      this->robot = "";
    }
  }

  // field types and members
  using _regex_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _regex_type regex;
  using _robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type robot;

  // setters for named parameter idiom
  Type & set__regex(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->regex = _arg;
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
    moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__ListRobotStatesInWarehouse_Request
    std::shared_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__ListRobotStatesInWarehouse_Request
    std::shared_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListRobotStatesInWarehouse_Request_ & other) const
  {
    if (this->regex != other.regex) {
      return false;
    }
    if (this->robot != other.robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListRobotStatesInWarehouse_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListRobotStatesInWarehouse_Request_

// alias to use template instance with default allocator
using ListRobotStatesInWarehouse_Request =
  moveit_msgs::srv::ListRobotStatesInWarehouse_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__ListRobotStatesInWarehouse_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__ListRobotStatesInWarehouse_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListRobotStatesInWarehouse_Response_
{
  using Type = ListRobotStatesInWarehouse_Response_<ContainerAllocator>;

  explicit ListRobotStatesInWarehouse_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListRobotStatesInWarehouse_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _states_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _states_type states;

  // setters for named parameter idiom
  Type & set__states(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__ListRobotStatesInWarehouse_Response
    std::shared_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__ListRobotStatesInWarehouse_Response
    std::shared_ptr<moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListRobotStatesInWarehouse_Response_ & other) const
  {
    if (this->states != other.states) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListRobotStatesInWarehouse_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListRobotStatesInWarehouse_Response_

// alias to use template instance with default allocator
using ListRobotStatesInWarehouse_Response =
  moveit_msgs::srv::ListRobotStatesInWarehouse_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct ListRobotStatesInWarehouse
{
  using Request = moveit_msgs::srv::ListRobotStatesInWarehouse_Request;
  using Response = moveit_msgs::srv::ListRobotStatesInWarehouse_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__STRUCT_HPP_
