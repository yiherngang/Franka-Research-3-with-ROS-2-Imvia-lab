// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group_name'
// Member 'ik_link_name'
// Member 'ik_link_names'
#include "rosidl_runtime_c/string.h"
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"
// Member 'pose_stamped'
// Member 'pose_stamped_vector'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/PositionIKRequest in the package moveit_msgs.
/**
  * A Position IK request message
 */
typedef struct moveit_msgs__msg__PositionIKRequest
{
  /// The name of the group which will be used to compute IK
  /// e.g. "right_arm", or "arms" - see IK specification for multiple-groups below
  /// Information from the SRDF will be used to automatically determine which link
  /// to solve IK for, unless ik_link_name is also specified
  rosidl_runtime_c__String group_name;
  /// A RobotState consisting of hint/seed positions for the IK computation and positions
  /// for all the other joints in the robot. Additional state information provided here is
  /// used to specify starting positions for other joints/links on the robot.
  /// This state MUST contain state for all joints to be used by the IK solver
  /// to compute IK. The list of joints that the IK solver deals with can be
  /// found using the SRDF for the corresponding group
  moveit_msgs__msg__RobotState robot_state;
  /// A set of constraints that the IK must obey; by default, this set of constraints is empty
  moveit_msgs__msg__Constraints constraints;
  /// Find an IK solution that avoids collisions. By default, this is false
  bool avoid_collisions;
  /// (OPTIONAL) The name of the link for which we are computing IK
  /// If not specified, the link name will be inferred from a combination
  /// of the group name and the SRDF. If any values are specified for ik_link_names,
  /// this value is ignored
  rosidl_runtime_c__String ik_link_name;
  /// The stamped pose of the link, when the IK solver computes the joint values
  /// for all the joints in a group. This value is ignored if pose_stamped_vector
  /// has any elements specified.
  geometry_msgs__msg__PoseStamped pose_stamped;
  /// Multi-group parameters
  /// (OPTIONAL) The names of the links for which we are computing IK
  /// If not specified, the link name will be inferred from a combination
  /// of the group name and the SRDF
  rosidl_runtime_c__String__Sequence ik_link_names;
  /// (OPTIONAL) The (stamped) poses of the links we are computing IK for (when a group has more than one end effector)
  /// e.g. The "arms" group might consist of both the "right_arm" and the "left_arm"
  /// The order of the groups referred to is the same as the order setup in the SRDF
  geometry_msgs__msg__PoseStamped__Sequence pose_stamped_vector;
  /// Maximum allowed time for IK calculation
  builtin_interfaces__msg__Duration timeout;
} moveit_msgs__msg__PositionIKRequest;

// Struct for a sequence of moveit_msgs__msg__PositionIKRequest.
typedef struct moveit_msgs__msg__PositionIKRequest__Sequence
{
  moveit_msgs__msg__PositionIKRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PositionIKRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_H_
