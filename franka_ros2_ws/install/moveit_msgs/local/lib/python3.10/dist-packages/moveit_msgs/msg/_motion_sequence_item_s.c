// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/MotionSequenceItem.idl
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
#include "moveit_msgs/msg/detail/motion_sequence_item__struct.h"
#include "moveit_msgs/msg/detail/motion_sequence_item__functions.h"

bool moveit_msgs__msg__motion_plan_request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__motion_plan_request__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__motion_sequence_item__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("moveit_msgs.msg._motion_sequence_item.MotionSequenceItem", full_classname_dest, 56) == 0);
  }
  moveit_msgs__msg__MotionSequenceItem * ros_message = _ros_message;
  {  // req
    PyObject * field = PyObject_GetAttrString(_pymsg, "req");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__motion_plan_request__convert_from_py(field, &ros_message->req)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // blend_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "blend_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->blend_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__motion_sequence_item__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotionSequenceItem */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._motion_sequence_item");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotionSequenceItem");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__MotionSequenceItem * ros_message = (moveit_msgs__msg__MotionSequenceItem *)raw_ros_message;
  {  // req
    PyObject * field = NULL;
    field = moveit_msgs__msg__motion_plan_request__convert_to_py(&ros_message->req);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blend_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->blend_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blend_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
