// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
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
#include "moveit_msgs/msg/detail/visibility_constraint__struct.h"
#include "moveit_msgs/msg/detail/visibility_constraint__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__visibility_constraint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("moveit_msgs.msg._visibility_constraint.VisibilityConstraint", full_classname_dest, 59) == 0);
  }
  moveit_msgs__msg__VisibilityConstraint * ros_message = _ros_message;
  {  // target_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->target_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cone_sides
    PyObject * field = PyObject_GetAttrString(_pymsg, "cone_sides");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cone_sides = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sensor_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->sensor_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // max_view_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_view_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_view_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_range_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_range_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_range_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sensor_view_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_view_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_view_direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "weight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->weight = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__visibility_constraint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VisibilityConstraint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._visibility_constraint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VisibilityConstraint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__VisibilityConstraint * ros_message = (moveit_msgs__msg__VisibilityConstraint *)raw_ros_message;
  {  // target_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->target_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cone_sides
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cone_sides);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cone_sides", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->sensor_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_view_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_view_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_view_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_range_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_range_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_range_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_view_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_view_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_view_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->weight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
