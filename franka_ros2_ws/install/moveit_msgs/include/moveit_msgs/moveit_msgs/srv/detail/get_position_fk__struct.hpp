// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__STRUCT_HPP_

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
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetPositionFK_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetPositionFK_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPositionFK_Request_
{
  using Type = GetPositionFK_Request_<ContainerAllocator>;

  explicit GetPositionFK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    robot_state(_init)
  {
    (void)_init;
  }

  explicit GetPositionFK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fk_link_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _fk_link_names_type fk_link_names;
  using _robot_state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _robot_state_type robot_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fk_link_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->fk_link_names = _arg;
    return *this;
  }
  Type & set__robot_state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->robot_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetPositionFK_Request
    std::shared_ptr<moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetPositionFK_Request
    std::shared_ptr<moveit_msgs::srv::GetPositionFK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPositionFK_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fk_link_names != other.fk_link_names) {
      return false;
    }
    if (this->robot_state != other.robot_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPositionFK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPositionFK_Request_

// alias to use template instance with default allocator
using GetPositionFK_Request =
  moveit_msgs::srv::GetPositionFK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'pose_stamped'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetPositionFK_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetPositionFK_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPositionFK_Response_
{
  using Type = GetPositionFK_Response_<ContainerAllocator>;

  explicit GetPositionFK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_init)
  {
    (void)_init;
  }

  explicit GetPositionFK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_stamped_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _pose_stamped_type pose_stamped;
  using _fk_link_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _fk_link_names_type fk_link_names;
  using _error_code_type =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__pose_stamped(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->pose_stamped = _arg;
    return *this;
  }
  Type & set__fk_link_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->fk_link_names = _arg;
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
    moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetPositionFK_Response
    std::shared_ptr<moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetPositionFK_Response
    std::shared_ptr<moveit_msgs::srv::GetPositionFK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPositionFK_Response_ & other) const
  {
    if (this->pose_stamped != other.pose_stamped) {
      return false;
    }
    if (this->fk_link_names != other.fk_link_names) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPositionFK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPositionFK_Response_

// alias to use template instance with default allocator
using GetPositionFK_Response =
  moveit_msgs::srv::GetPositionFK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct GetPositionFK
{
  using Request = moveit_msgs::srv::GetPositionFK_Request;
  using Response = moveit_msgs::srv::GetPositionFK_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__STRUCT_HPP_
