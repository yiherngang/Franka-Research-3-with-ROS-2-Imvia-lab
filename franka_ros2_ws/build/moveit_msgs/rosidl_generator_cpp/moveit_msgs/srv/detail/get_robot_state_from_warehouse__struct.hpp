// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/GetRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetRobotStateFromWarehouse_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetRobotStateFromWarehouse_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotStateFromWarehouse_Request_
{
  using Type = GetRobotStateFromWarehouse_Request_<ContainerAllocator>;

  explicit GetRobotStateFromWarehouse_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->robot = "";
    }
  }

  explicit GetRobotStateFromWarehouse_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    robot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->robot = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type robot;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
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
    moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetRobotStateFromWarehouse_Request
    std::shared_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetRobotStateFromWarehouse_Request
    std::shared_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotStateFromWarehouse_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->robot != other.robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotStateFromWarehouse_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotStateFromWarehouse_Request_

// alias to use template instance with default allocator
using GetRobotStateFromWarehouse_Request =
  moveit_msgs::srv::GetRobotStateFromWarehouse_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'state'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetRobotStateFromWarehouse_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetRobotStateFromWarehouse_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotStateFromWarehouse_Response_
{
  using Type = GetRobotStateFromWarehouse_Response_<ContainerAllocator>;

  explicit GetRobotStateFromWarehouse_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    (void)_init;
  }

  explicit GetRobotStateFromWarehouse_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetRobotStateFromWarehouse_Response
    std::shared_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetRobotStateFromWarehouse_Response
    std::shared_ptr<moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotStateFromWarehouse_Response_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotStateFromWarehouse_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotStateFromWarehouse_Response_

// alias to use template instance with default allocator
using GetRobotStateFromWarehouse_Response =
  moveit_msgs::srv::GetRobotStateFromWarehouse_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct GetRobotStateFromWarehouse
{
  using Request = moveit_msgs::srv::GetRobotStateFromWarehouse_Request;
  using Response = moveit_msgs::srv::GetRobotStateFromWarehouse_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__STRUCT_HPP_
