// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:srv/SetFullCollisionBehavior.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__STRUCT_HPP_
#define FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__franka_msgs__srv__SetFullCollisionBehavior_Request __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__srv__SetFullCollisionBehavior_Request __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetFullCollisionBehavior_Request_
{
  using Type = SetFullCollisionBehavior_Request_<ContainerAllocator>;

  explicit SetFullCollisionBehavior_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->lower_torque_thresholds_acceleration.begin(), this->lower_torque_thresholds_acceleration.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->upper_torque_thresholds_acceleration.begin(), this->upper_torque_thresholds_acceleration.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->lower_torque_thresholds_nominal.begin(), this->lower_torque_thresholds_nominal.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->upper_torque_thresholds_nominal.begin(), this->upper_torque_thresholds_nominal.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->lower_force_thresholds_acceleration.begin(), this->lower_force_thresholds_acceleration.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->upper_force_thresholds_acceleration.begin(), this->upper_force_thresholds_acceleration.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->lower_force_thresholds_nominal.begin(), this->lower_force_thresholds_nominal.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->upper_force_thresholds_nominal.begin(), this->upper_force_thresholds_nominal.end(), 0.0);
    }
  }

  explicit SetFullCollisionBehavior_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lower_torque_thresholds_acceleration(_alloc),
    upper_torque_thresholds_acceleration(_alloc),
    lower_torque_thresholds_nominal(_alloc),
    upper_torque_thresholds_nominal(_alloc),
    lower_force_thresholds_acceleration(_alloc),
    upper_force_thresholds_acceleration(_alloc),
    lower_force_thresholds_nominal(_alloc),
    upper_force_thresholds_nominal(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->lower_torque_thresholds_acceleration.begin(), this->lower_torque_thresholds_acceleration.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->upper_torque_thresholds_acceleration.begin(), this->upper_torque_thresholds_acceleration.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->lower_torque_thresholds_nominal.begin(), this->lower_torque_thresholds_nominal.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->upper_torque_thresholds_nominal.begin(), this->upper_torque_thresholds_nominal.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->lower_force_thresholds_acceleration.begin(), this->lower_force_thresholds_acceleration.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->upper_force_thresholds_acceleration.begin(), this->upper_force_thresholds_acceleration.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->lower_force_thresholds_nominal.begin(), this->lower_force_thresholds_nominal.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->upper_force_thresholds_nominal.begin(), this->upper_force_thresholds_nominal.end(), 0.0);
    }
  }

  // field types and members
  using _lower_torque_thresholds_acceleration_type =
    std::array<double, 7>;
  _lower_torque_thresholds_acceleration_type lower_torque_thresholds_acceleration;
  using _upper_torque_thresholds_acceleration_type =
    std::array<double, 7>;
  _upper_torque_thresholds_acceleration_type upper_torque_thresholds_acceleration;
  using _lower_torque_thresholds_nominal_type =
    std::array<double, 7>;
  _lower_torque_thresholds_nominal_type lower_torque_thresholds_nominal;
  using _upper_torque_thresholds_nominal_type =
    std::array<double, 7>;
  _upper_torque_thresholds_nominal_type upper_torque_thresholds_nominal;
  using _lower_force_thresholds_acceleration_type =
    std::array<double, 6>;
  _lower_force_thresholds_acceleration_type lower_force_thresholds_acceleration;
  using _upper_force_thresholds_acceleration_type =
    std::array<double, 6>;
  _upper_force_thresholds_acceleration_type upper_force_thresholds_acceleration;
  using _lower_force_thresholds_nominal_type =
    std::array<double, 6>;
  _lower_force_thresholds_nominal_type lower_force_thresholds_nominal;
  using _upper_force_thresholds_nominal_type =
    std::array<double, 6>;
  _upper_force_thresholds_nominal_type upper_force_thresholds_nominal;

  // setters for named parameter idiom
  Type & set__lower_torque_thresholds_acceleration(
    const std::array<double, 7> & _arg)
  {
    this->lower_torque_thresholds_acceleration = _arg;
    return *this;
  }
  Type & set__upper_torque_thresholds_acceleration(
    const std::array<double, 7> & _arg)
  {
    this->upper_torque_thresholds_acceleration = _arg;
    return *this;
  }
  Type & set__lower_torque_thresholds_nominal(
    const std::array<double, 7> & _arg)
  {
    this->lower_torque_thresholds_nominal = _arg;
    return *this;
  }
  Type & set__upper_torque_thresholds_nominal(
    const std::array<double, 7> & _arg)
  {
    this->upper_torque_thresholds_nominal = _arg;
    return *this;
  }
  Type & set__lower_force_thresholds_acceleration(
    const std::array<double, 6> & _arg)
  {
    this->lower_force_thresholds_acceleration = _arg;
    return *this;
  }
  Type & set__upper_force_thresholds_acceleration(
    const std::array<double, 6> & _arg)
  {
    this->upper_force_thresholds_acceleration = _arg;
    return *this;
  }
  Type & set__lower_force_thresholds_nominal(
    const std::array<double, 6> & _arg)
  {
    this->lower_force_thresholds_nominal = _arg;
    return *this;
  }
  Type & set__upper_force_thresholds_nominal(
    const std::array<double, 6> & _arg)
  {
    this->upper_force_thresholds_nominal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__srv__SetFullCollisionBehavior_Request
    std::shared_ptr<franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__srv__SetFullCollisionBehavior_Request
    std::shared_ptr<franka_msgs::srv::SetFullCollisionBehavior_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetFullCollisionBehavior_Request_ & other) const
  {
    if (this->lower_torque_thresholds_acceleration != other.lower_torque_thresholds_acceleration) {
      return false;
    }
    if (this->upper_torque_thresholds_acceleration != other.upper_torque_thresholds_acceleration) {
      return false;
    }
    if (this->lower_torque_thresholds_nominal != other.lower_torque_thresholds_nominal) {
      return false;
    }
    if (this->upper_torque_thresholds_nominal != other.upper_torque_thresholds_nominal) {
      return false;
    }
    if (this->lower_force_thresholds_acceleration != other.lower_force_thresholds_acceleration) {
      return false;
    }
    if (this->upper_force_thresholds_acceleration != other.upper_force_thresholds_acceleration) {
      return false;
    }
    if (this->lower_force_thresholds_nominal != other.lower_force_thresholds_nominal) {
      return false;
    }
    if (this->upper_force_thresholds_nominal != other.upper_force_thresholds_nominal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetFullCollisionBehavior_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetFullCollisionBehavior_Request_

// alias to use template instance with default allocator
using SetFullCollisionBehavior_Request =
  franka_msgs::srv::SetFullCollisionBehavior_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_msgs


#ifndef _WIN32
# define DEPRECATED__franka_msgs__srv__SetFullCollisionBehavior_Response __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__srv__SetFullCollisionBehavior_Response __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetFullCollisionBehavior_Response_
{
  using Type = SetFullCollisionBehavior_Response_<ContainerAllocator>;

  explicit SetFullCollisionBehavior_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  explicit SetFullCollisionBehavior_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__srv__SetFullCollisionBehavior_Response
    std::shared_ptr<franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__srv__SetFullCollisionBehavior_Response
    std::shared_ptr<franka_msgs::srv::SetFullCollisionBehavior_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetFullCollisionBehavior_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetFullCollisionBehavior_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetFullCollisionBehavior_Response_

// alias to use template instance with default allocator
using SetFullCollisionBehavior_Response =
  franka_msgs::srv::SetFullCollisionBehavior_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace franka_msgs

namespace franka_msgs
{

namespace srv
{

struct SetFullCollisionBehavior
{
  using Request = franka_msgs::srv::SetFullCollisionBehavior_Request;
  using Response = franka_msgs::srv::SetFullCollisionBehavior_Response;
};

}  // namespace srv

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__SRV__DETAIL__SET_FULL_COLLISION_BEHAVIOR__STRUCT_HPP_
