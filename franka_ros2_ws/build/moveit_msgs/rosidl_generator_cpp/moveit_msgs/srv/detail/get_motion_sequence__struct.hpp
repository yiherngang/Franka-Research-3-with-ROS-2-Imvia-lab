// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/GetMotionSequence.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_sequence_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetMotionSequence_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetMotionSequence_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMotionSequence_Request_
{
  using Type = GetMotionSequence_Request_<ContainerAllocator>;

  explicit GetMotionSequence_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit GetMotionSequence_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const moveit_msgs::msg::MotionSequenceRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetMotionSequence_Request
    std::shared_ptr<moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetMotionSequence_Request
    std::shared_ptr<moveit_msgs::srv::GetMotionSequence_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionSequence_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionSequence_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionSequence_Request_

// alias to use template instance with default allocator
using GetMotionSequence_Request =
  moveit_msgs::srv::GetMotionSequence_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'response'
#include "moveit_msgs/msg/detail/motion_sequence_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetMotionSequence_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetMotionSequence_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMotionSequence_Response_
{
  using Type = GetMotionSequence_Response_<ContainerAllocator>;

  explicit GetMotionSequence_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit GetMotionSequence_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const moveit_msgs::msg::MotionSequenceResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetMotionSequence_Response
    std::shared_ptr<moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetMotionSequence_Response
    std::shared_ptr<moveit_msgs::srv::GetMotionSequence_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionSequence_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionSequence_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionSequence_Response_

// alias to use template instance with default allocator
using GetMotionSequence_Response =
  moveit_msgs::srv::GetMotionSequence_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct GetMotionSequence
{
  using Request = moveit_msgs::srv::GetMotionSequence_Request;
  using Response = moveit_msgs::srv::GetMotionSequence_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_MOTION_SEQUENCE__STRUCT_HPP_
