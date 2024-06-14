// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/UpdatePointcloudOctomap.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__UPDATE_POINTCLOUD_OCTOMAP__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__UPDATE_POINTCLOUD_OCTOMAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__UpdatePointcloudOctomap_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__UpdatePointcloudOctomap_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdatePointcloudOctomap_Request_
{
  using Type = UpdatePointcloudOctomap_Request_<ContainerAllocator>;

  explicit UpdatePointcloudOctomap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cloud(_init)
  {
    (void)_init;
  }

  explicit UpdatePointcloudOctomap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cloud(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_type cloud;

  // setters for named parameter idiom
  Type & set__cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__UpdatePointcloudOctomap_Request
    std::shared_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__UpdatePointcloudOctomap_Request
    std::shared_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdatePointcloudOctomap_Request_ & other) const
  {
    if (this->cloud != other.cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdatePointcloudOctomap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdatePointcloudOctomap_Request_

// alias to use template instance with default allocator
using UpdatePointcloudOctomap_Request =
  moveit_msgs::srv::UpdatePointcloudOctomap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__UpdatePointcloudOctomap_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__UpdatePointcloudOctomap_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdatePointcloudOctomap_Response_
{
  using Type = UpdatePointcloudOctomap_Response_<ContainerAllocator>;

  explicit UpdatePointcloudOctomap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit UpdatePointcloudOctomap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__UpdatePointcloudOctomap_Response
    std::shared_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__UpdatePointcloudOctomap_Response
    std::shared_ptr<moveit_msgs::srv::UpdatePointcloudOctomap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdatePointcloudOctomap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdatePointcloudOctomap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdatePointcloudOctomap_Response_

// alias to use template instance with default allocator
using UpdatePointcloudOctomap_Response =
  moveit_msgs::srv::UpdatePointcloudOctomap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct UpdatePointcloudOctomap
{
  using Request = moveit_msgs::srv::UpdatePointcloudOctomap_Request;
  using Response = moveit_msgs::srv::UpdatePointcloudOctomap_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__UPDATE_POINTCLOUD_OCTOMAP__STRUCT_HPP_
