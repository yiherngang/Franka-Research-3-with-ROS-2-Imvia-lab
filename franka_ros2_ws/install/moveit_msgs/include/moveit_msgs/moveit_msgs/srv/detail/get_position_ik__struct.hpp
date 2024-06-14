// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/GetPositionIK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ik_request'
#include "moveit_msgs/msg/detail/position_ik_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetPositionIK_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetPositionIK_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPositionIK_Request_
{
  using Type = GetPositionIK_Request_<ContainerAllocator>;

  explicit GetPositionIK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ik_request(_init)
  {
    (void)_init;
  }

  explicit GetPositionIK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ik_request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _ik_request_type =
    moveit_msgs::msg::PositionIKRequest_<ContainerAllocator>;
  _ik_request_type ik_request;

  // setters for named parameter idiom
  Type & set__ik_request(
    const moveit_msgs::msg::PositionIKRequest_<ContainerAllocator> & _arg)
  {
    this->ik_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetPositionIK_Request
    std::shared_ptr<moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetPositionIK_Request
    std::shared_ptr<moveit_msgs::srv::GetPositionIK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPositionIK_Request_ & other) const
  {
    if (this->ik_request != other.ik_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPositionIK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPositionIK_Request_

// alias to use template instance with default allocator
using GetPositionIK_Request =
  moveit_msgs::srv::GetPositionIK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'solution'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetPositionIK_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetPositionIK_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPositionIK_Response_
{
  using Type = GetPositionIK_Response_<ContainerAllocator>;

  explicit GetPositionIK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : solution(_init),
    error_code(_init)
  {
    (void)_init;
  }

  explicit GetPositionIK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : solution(_alloc, _init),
    error_code(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _solution_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _solution_type solution;
  using _error_code_type =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__solution(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->solution = _arg;
    return *this;
  }
  Type & set__error_code(
    const moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetPositionIK_Response
    std::shared_ptr<moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetPositionIK_Response
    std::shared_ptr<moveit_msgs::srv::GetPositionIK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPositionIK_Response_ & other) const
  {
    if (this->solution != other.solution) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPositionIK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPositionIK_Response_

// alias to use template instance with default allocator
using GetPositionIK_Response =
  moveit_msgs::srv::GetPositionIK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct GetPositionIK
{
  using Request = moveit_msgs::srv::GetPositionIK_Request;
  using Response = moveit_msgs::srv::GetPositionIK_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__STRUCT_HPP_
