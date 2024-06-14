// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetStateValidity_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetStateValidity_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetStateValidity_Request_
{
  using Type = GetStateValidity_Request_<ContainerAllocator>;

  explicit GetStateValidity_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_state(_init),
    constraints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
    }
  }

  explicit GetStateValidity_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_state(_alloc, _init),
    group_name(_alloc),
    constraints(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
    }
  }

  // field types and members
  using _robot_state_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _robot_state_type robot_state;
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _constraints_type =
    moveit_msgs::msg::Constraints_<ContainerAllocator>;
  _constraints_type constraints;

  // setters for named parameter idiom
  Type & set__robot_state(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->robot_state = _arg;
    return *this;
  }
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__constraints(
    const moveit_msgs::msg::Constraints_<ContainerAllocator> & _arg)
  {
    this->constraints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetStateValidity_Request
    std::shared_ptr<moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetStateValidity_Request
    std::shared_ptr<moveit_msgs::srv::GetStateValidity_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStateValidity_Request_ & other) const
  {
    if (this->robot_state != other.robot_state) {
      return false;
    }
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->constraints != other.constraints) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStateValidity_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStateValidity_Request_

// alias to use template instance with default allocator
using GetStateValidity_Request =
  moveit_msgs::srv::GetStateValidity_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'contacts'
#include "moveit_msgs/msg/detail/contact_information__struct.hpp"
// Member 'cost_sources'
#include "moveit_msgs/msg/detail/cost_source__struct.hpp"
// Member 'constraint_result'
#include "moveit_msgs/msg/detail/constraint_eval_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetStateValidity_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetStateValidity_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetStateValidity_Response_
{
  using Type = GetStateValidity_Response_<ContainerAllocator>;

  explicit GetStateValidity_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
    }
  }

  explicit GetStateValidity_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
    }
  }

  // field types and members
  using _valid_type =
    bool;
  _valid_type valid;
  using _contacts_type =
    std::vector<moveit_msgs::msg::ContactInformation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::ContactInformation_<ContainerAllocator>>>;
  _contacts_type contacts;
  using _cost_sources_type =
    std::vector<moveit_msgs::msg::CostSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CostSource_<ContainerAllocator>>>;
  _cost_sources_type cost_sources;
  using _constraint_result_type =
    std::vector<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>>>;
  _constraint_result_type constraint_result;

  // setters for named parameter idiom
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__contacts(
    const std::vector<moveit_msgs::msg::ContactInformation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::ContactInformation_<ContainerAllocator>>> & _arg)
  {
    this->contacts = _arg;
    return *this;
  }
  Type & set__cost_sources(
    const std::vector<moveit_msgs::msg::CostSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::CostSource_<ContainerAllocator>>> & _arg)
  {
    this->cost_sources = _arg;
    return *this;
  }
  Type & set__constraint_result(
    const std::vector<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::ConstraintEvalResult_<ContainerAllocator>>> & _arg)
  {
    this->constraint_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetStateValidity_Response
    std::shared_ptr<moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetStateValidity_Response
    std::shared_ptr<moveit_msgs::srv::GetStateValidity_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetStateValidity_Response_ & other) const
  {
    if (this->valid != other.valid) {
      return false;
    }
    if (this->contacts != other.contacts) {
      return false;
    }
    if (this->cost_sources != other.cost_sources) {
      return false;
    }
    if (this->constraint_result != other.constraint_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetStateValidity_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetStateValidity_Response_

// alias to use template instance with default allocator
using GetStateValidity_Response =
  moveit_msgs::srv::GetStateValidity_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct GetStateValidity
{
  using Request = moveit_msgs::srv::GetStateValidity_Request;
  using Response = moveit_msgs::srv::GetStateValidity_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__STRUCT_HPP_
