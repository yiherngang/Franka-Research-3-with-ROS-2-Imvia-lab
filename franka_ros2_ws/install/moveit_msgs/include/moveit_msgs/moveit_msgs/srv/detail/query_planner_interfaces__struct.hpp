// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/QueryPlannerInterfaces.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__QueryPlannerInterfaces_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__QueryPlannerInterfaces_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryPlannerInterfaces_Request_
{
  using Type = QueryPlannerInterfaces_Request_<ContainerAllocator>;

  explicit QueryPlannerInterfaces_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit QueryPlannerInterfaces_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__QueryPlannerInterfaces_Request
    std::shared_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__QueryPlannerInterfaces_Request
    std::shared_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryPlannerInterfaces_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryPlannerInterfaces_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryPlannerInterfaces_Request_

// alias to use template instance with default allocator
using QueryPlannerInterfaces_Request =
  moveit_msgs::srv::QueryPlannerInterfaces_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'planner_interfaces'
#include "moveit_msgs/msg/detail/planner_interface_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__QueryPlannerInterfaces_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__QueryPlannerInterfaces_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryPlannerInterfaces_Response_
{
  using Type = QueryPlannerInterfaces_Response_<ContainerAllocator>;

  explicit QueryPlannerInterfaces_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit QueryPlannerInterfaces_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _planner_interfaces_type =
    std::vector<moveit_msgs::msg::PlannerInterfaceDescription_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::PlannerInterfaceDescription_<ContainerAllocator>>>;
  _planner_interfaces_type planner_interfaces;

  // setters for named parameter idiom
  Type & set__planner_interfaces(
    const std::vector<moveit_msgs::msg::PlannerInterfaceDescription_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::PlannerInterfaceDescription_<ContainerAllocator>>> & _arg)
  {
    this->planner_interfaces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__QueryPlannerInterfaces_Response
    std::shared_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__QueryPlannerInterfaces_Response
    std::shared_ptr<moveit_msgs::srv::QueryPlannerInterfaces_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryPlannerInterfaces_Response_ & other) const
  {
    if (this->planner_interfaces != other.planner_interfaces) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryPlannerInterfaces_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryPlannerInterfaces_Response_

// alias to use template instance with default allocator
using QueryPlannerInterfaces_Response =
  moveit_msgs::srv::QueryPlannerInterfaces_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct QueryPlannerInterfaces
{
  using Request = moveit_msgs::srv::QueryPlannerInterfaces_Request;
  using Response = moveit_msgs::srv::QueryPlannerInterfaces_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__STRUCT_HPP_
