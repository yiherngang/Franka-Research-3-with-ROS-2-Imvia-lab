// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/GripperTranslation.idl
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
#include "moveit_msgs/msg/detail/gripper_translation__struct.h"
#include "moveit_msgs/msg/detail/gripper_translation__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__gripper_translation__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("moveit_msgs.msg._gripper_translation.GripperTranslation", full_classname_dest, 55) == 0);
  }
  moveit_msgs__msg__GripperTranslation * ros_message = _ros_message;
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3_stamped__convert_from_py(field, &ros_message->direction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // desired_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__gripper_translation__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GripperTranslation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._gripper_translation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GripperTranslation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__GripperTranslation * ros_message = (moveit_msgs__msg__GripperTranslation *)raw_ros_message;
  {  // direction
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3_stamped__convert_to_py(&ros_message->direction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
