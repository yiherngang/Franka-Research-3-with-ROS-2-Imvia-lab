// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "franka_msgs/msg/detail/errors__struct.h"
#include "franka_msgs/msg/detail/errors__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool franka_msgs__msg__errors__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("franka_msgs.msg._errors.Errors", full_classname_dest, 30) == 0);
  }
  franka_msgs__msg__Errors * ros_message = _ros_message;
  {  // joint_position_limits_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_position_limits_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_position_limits_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_position_limits_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_position_limits_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_position_limits_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // self_collision_avoidance_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "self_collision_avoidance_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->self_collision_avoidance_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint_velocity_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_velocity_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_velocity_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_velocity_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_velocity_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_velocity_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // force_control_safety_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_control_safety_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_control_safety_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint_reflex
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_reflex");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_reflex = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_reflex
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_reflex");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_reflex = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_goal_pose_deviation_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_goal_pose_deviation_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->max_goal_pose_deviation_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_path_pose_deviation_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_path_pose_deviation_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->max_path_pose_deviation_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_velocity_profile_safety_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_velocity_profile_safety_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_velocity_profile_safety_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint_position_motion_generator_start_pose_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_position_motion_generator_start_pose_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_position_motion_generator_start_pose_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint_motion_generator_position_limits_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_motion_generator_position_limits_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_motion_generator_position_limits_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint_motion_generator_velocity_limits_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_motion_generator_velocity_limits_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_motion_generator_velocity_limits_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint_motion_generator_velocity_discontinuity
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_motion_generator_velocity_discontinuity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_motion_generator_velocity_discontinuity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint_motion_generator_acceleration_discontinuity
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_motion_generator_acceleration_discontinuity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_motion_generator_acceleration_discontinuity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_position_motion_generator_start_pose_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_position_motion_generator_start_pose_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_position_motion_generator_start_pose_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_elbow_limit_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_elbow_limit_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_elbow_limit_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_velocity_limits_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_velocity_limits_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_velocity_limits_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_velocity_discontinuity
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_velocity_discontinuity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_velocity_discontinuity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_acceleration_discontinuity
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_acceleration_discontinuity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_acceleration_discontinuity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_elbow_sign_inconsistent
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_elbow_sign_inconsistent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_elbow_sign_inconsistent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_start_elbow_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_start_elbow_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_start_elbow_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_joint_position_limits_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_joint_position_limits_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_joint_position_limits_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_joint_velocity_limits_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_joint_velocity_limits_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_joint_velocity_limits_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_joint_velocity_discontinuity
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_joint_velocity_discontinuity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_joint_velocity_discontinuity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_motion_generator_joint_acceleration_discontinuity
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_motion_generator_joint_acceleration_discontinuity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_motion_generator_joint_acceleration_discontinuity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cartesian_position_motion_generator_invalid_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "cartesian_position_motion_generator_invalid_frame");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cartesian_position_motion_generator_invalid_frame = (Py_True == field);
    Py_DECREF(field);
  }
  {  // force_controller_desired_force_tolerance_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_controller_desired_force_tolerance_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_controller_desired_force_tolerance_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // controller_torque_discontinuity
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_torque_discontinuity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->controller_torque_discontinuity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // start_elbow_sign_inconsistent
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_elbow_sign_inconsistent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->start_elbow_sign_inconsistent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // communication_constraints_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "communication_constraints_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->communication_constraints_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_limit_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_limit_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_limit_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint_p2p_insufficient_torque_for_planning
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_p2p_insufficient_torque_for_planning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->joint_p2p_insufficient_torque_for_planning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tau_j_range_violation
    PyObject * field = PyObject_GetAttrString(_pymsg, "tau_j_range_violation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tau_j_range_violation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // instability_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "instability_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->instability_detected = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * franka_msgs__msg__errors__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Errors */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("franka_msgs.msg._errors");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Errors");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  franka_msgs__msg__Errors * ros_message = (franka_msgs__msg__Errors *)raw_ros_message;
  {  // joint_position_limits_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_position_limits_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_position_limits_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_position_limits_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_position_limits_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_position_limits_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // self_collision_avoidance_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->self_collision_avoidance_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "self_collision_avoidance_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_velocity_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_velocity_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_velocity_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_velocity_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_velocity_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_velocity_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_control_safety_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_control_safety_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_control_safety_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_reflex
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_reflex ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_reflex", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_reflex
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_reflex ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_reflex", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_goal_pose_deviation_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->max_goal_pose_deviation_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_goal_pose_deviation_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_path_pose_deviation_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->max_path_pose_deviation_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_path_pose_deviation_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_velocity_profile_safety_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_velocity_profile_safety_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_velocity_profile_safety_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_position_motion_generator_start_pose_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_position_motion_generator_start_pose_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_position_motion_generator_start_pose_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_motion_generator_position_limits_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_motion_generator_position_limits_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_motion_generator_position_limits_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_motion_generator_velocity_limits_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_motion_generator_velocity_limits_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_motion_generator_velocity_limits_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_motion_generator_velocity_discontinuity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_motion_generator_velocity_discontinuity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_motion_generator_velocity_discontinuity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_motion_generator_acceleration_discontinuity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_motion_generator_acceleration_discontinuity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_motion_generator_acceleration_discontinuity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_position_motion_generator_start_pose_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_position_motion_generator_start_pose_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_position_motion_generator_start_pose_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_elbow_limit_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_elbow_limit_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_elbow_limit_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_velocity_limits_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_velocity_limits_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_velocity_limits_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_velocity_discontinuity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_velocity_discontinuity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_velocity_discontinuity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_acceleration_discontinuity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_acceleration_discontinuity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_acceleration_discontinuity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_elbow_sign_inconsistent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_elbow_sign_inconsistent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_elbow_sign_inconsistent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_start_elbow_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_start_elbow_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_start_elbow_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_joint_position_limits_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_joint_position_limits_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_joint_position_limits_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_joint_velocity_limits_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_joint_velocity_limits_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_joint_velocity_limits_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_joint_velocity_discontinuity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_joint_velocity_discontinuity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_joint_velocity_discontinuity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_motion_generator_joint_acceleration_discontinuity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_motion_generator_joint_acceleration_discontinuity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_motion_generator_joint_acceleration_discontinuity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cartesian_position_motion_generator_invalid_frame
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cartesian_position_motion_generator_invalid_frame ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cartesian_position_motion_generator_invalid_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_controller_desired_force_tolerance_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_controller_desired_force_tolerance_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_controller_desired_force_tolerance_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_torque_discontinuity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->controller_torque_discontinuity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_torque_discontinuity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_elbow_sign_inconsistent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->start_elbow_sign_inconsistent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_elbow_sign_inconsistent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // communication_constraints_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->communication_constraints_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "communication_constraints_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_limit_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_limit_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_limit_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_p2p_insufficient_torque_for_planning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->joint_p2p_insufficient_torque_for_planning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_p2p_insufficient_torque_for_planning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tau_j_range_violation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tau_j_range_violation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tau_j_range_violation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // instability_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->instability_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instability_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
