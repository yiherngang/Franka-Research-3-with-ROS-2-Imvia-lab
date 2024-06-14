// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/JointLimits.idl
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
#include "moveit_msgs/msg/detail/joint_limits__struct.h"
#include "moveit_msgs/msg/detail/joint_limits__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__joint_limits__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("moveit_msgs.msg._joint_limits.JointLimits", full_classname_dest, 41) == 0);
  }
  moveit_msgs__msg__JointLimits * ros_message = _ros_message;
  {  // joint_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->joint_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // has_position_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_position_limits");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_position_limits = (Py_True == field);
    Py_DECREF(field);
  }
  {  // min_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // has_velocity_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_velocity_limits");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_velocity_limits = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // has_acceleration_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_acceleration_limits");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_acceleration_limits = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // has_jerk_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_jerk_limits");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_jerk_limits = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__joint_limits__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointLimits */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._joint_limits");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointLimits");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__JointLimits * ros_message = (moveit_msgs__msg__JointLimits *)raw_ros_message;
  {  // joint_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->joint_name.data,
      strlen(ros_message->joint_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_position_limits
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_position_limits ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_position_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_velocity_limits
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_velocity_limits ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_velocity_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_acceleration_limits
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_acceleration_limits ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_acceleration_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_jerk_limits
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_jerk_limits ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_jerk_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
