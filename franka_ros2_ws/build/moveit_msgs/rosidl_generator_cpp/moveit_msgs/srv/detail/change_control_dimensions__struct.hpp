// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/ChangeControlDimensions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__ChangeControlDimensions_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__ChangeControlDimensions_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeControlDimensions_Request_
{
  using Type = ChangeControlDimensions_Request_<ContainerAllocator>;

  explicit ChangeControlDimensions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_x_translation = false;
      this->control_y_translation = false;
      this->control_z_translation = false;
      this->control_x_rotation = false;
      this->control_y_rotation = false;
      this->control_z_rotation = false;
    }
  }

  explicit ChangeControlDimensions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_x_translation = false;
      this->control_y_translation = false;
      this->control_z_translation = false;
      this->control_x_rotation = false;
      this->control_y_rotation = false;
      this->control_z_rotation = false;
    }
  }

  // field types and members
  using _control_x_translation_type =
    bool;
  _control_x_translation_type control_x_translation;
  using _control_y_translation_type =
    bool;
  _control_y_translation_type control_y_translation;
  using _control_z_translation_type =
    bool;
  _control_z_translation_type control_z_translation;
  using _control_x_rotation_type =
    bool;
  _control_x_rotation_type control_x_rotation;
  using _control_y_rotation_type =
    bool;
  _control_y_rotation_type control_y_rotation;
  using _control_z_rotation_type =
    bool;
  _control_z_rotation_type control_z_rotation;

  // setters for named parameter idiom
  Type & set__control_x_translation(
    const bool & _arg)
  {
    this->control_x_translation = _arg;
    return *this;
  }
  Type & set__control_y_translation(
    const bool & _arg)
  {
    this->control_y_translation = _arg;
    return *this;
  }
  Type & set__control_z_translation(
    const bool & _arg)
  {
    this->control_z_translation = _arg;
    return *this;
  }
  Type & set__control_x_rotation(
    const bool & _arg)
  {
    this->control_x_rotation = _arg;
    return *this;
  }
  Type & set__control_y_rotation(
    const bool & _arg)
  {
    this->control_y_rotation = _arg;
    return *this;
  }
  Type & set__control_z_rotation(
    const bool & _arg)
  {
    this->control_z_rotation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__ChangeControlDimensions_Request
    std::shared_ptr<moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__ChangeControlDimensions_Request
    std::shared_ptr<moveit_msgs::srv::ChangeControlDimensions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeControlDimensions_Request_ & other) const
  {
    if (this->control_x_translation != other.control_x_translation) {
      return false;
    }
    if (this->control_y_translation != other.control_y_translation) {
      return false;
    }
    if (this->control_z_translation != other.control_z_translation) {
      return false;
    }
    if (this->control_x_rotation != other.control_x_rotation) {
      return false;
    }
    if (this->control_y_rotation != other.control_y_rotation) {
      return false;
    }
    if (this->control_z_rotation != other.control_z_rotation) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeControlDimensions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeControlDimensions_Request_

// alias to use template instance with default allocator
using ChangeControlDimensions_Request =
  moveit_msgs::srv::ChangeControlDimensions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__ChangeControlDimensions_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__ChangeControlDimensions_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeControlDimensions_Response_
{
  using Type = ChangeControlDimensions_Response_<ContainerAllocator>;

  explicit ChangeControlDimensions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ChangeControlDimensions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__ChangeControlDimensions_Response
    std::shared_ptr<moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__ChangeControlDimensions_Response
    std::shared_ptr<moveit_msgs::srv::ChangeControlDimensions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeControlDimensions_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeControlDimensions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeControlDimensions_Response_

// alias to use template instance with default allocator
using ChangeControlDimensions_Response =
  moveit_msgs::srv::ChangeControlDimensions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct ChangeControlDimensions
{
  using Request = moveit_msgs::srv::ChangeControlDimensions_Request;
  using Response = moveit_msgs::srv::ChangeControlDimensions_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__STRUCT_HPP_
