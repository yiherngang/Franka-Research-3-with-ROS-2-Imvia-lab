// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:srv/ChangeDriftDimensions.idl
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
#include "moveit_msgs/srv/detail/change_drift_dimensions__struct.h"
#include "moveit_msgs/srv/detail/change_drift_dimensions__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__transform__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__transform__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__change_drift_dimensions__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("moveit_msgs.srv._change_drift_dimensions.ChangeDriftDimensions_Request", full_classname_dest, 70) == 0);
  }
  moveit_msgs__srv__ChangeDriftDimensions_Request * ros_message = _ros_message;
  {  // drift_x_translation
    PyObject * field = PyObject_GetAttrString(_pymsg, "drift_x_translation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drift_x_translation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // drift_y_translation
    PyObject * field = PyObject_GetAttrString(_pymsg, "drift_y_translation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drift_y_translation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // drift_z_translation
    PyObject * field = PyObject_GetAttrString(_pymsg, "drift_z_translation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drift_z_translation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // drift_x_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "drift_x_rotation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drift_x_rotation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // drift_y_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "drift_y_rotation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drift_y_rotation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // drift_z_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "drift_z_rotation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drift_z_rotation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // transform_jog_frame_to_drift_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "transform_jog_frame_to_drift_frame");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__transform__convert_from_py(field, &ros_message->transform_jog_frame_to_drift_frame)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__srv__change_drift_dimensions__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChangeDriftDimensions_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._change_drift_dimensions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChangeDriftDimensions_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__ChangeDriftDimensions_Request * ros_message = (moveit_msgs__srv__ChangeDriftDimensions_Request *)raw_ros_message;
  {  // drift_x_translation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drift_x_translation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drift_x_translation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drift_y_translation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drift_y_translation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drift_y_translation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drift_z_translation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drift_z_translation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drift_z_translation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drift_x_rotation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drift_x_rotation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drift_x_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drift_y_rotation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drift_y_rotation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drift_y_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drift_z_rotation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drift_z_rotation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drift_z_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transform_jog_frame_to_drift_frame
    PyObject * field = NULL;
    field = geometry_msgs__msg__transform__convert_to_py(&ros_message->transform_jog_frame_to_drift_frame);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "transform_jog_frame_to_drift_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/change_drift_dimensions__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/change_drift_dimensions__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__change_drift_dimensions__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("moveit_msgs.srv._change_drift_dimensions.ChangeDriftDimensions_Response", full_classname_dest, 71) == 0);
  }
  moveit_msgs__srv__ChangeDriftDimensions_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__srv__change_drift_dimensions__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChangeDriftDimensions_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._change_drift_dimensions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChangeDriftDimensions_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__ChangeDriftDimensions_Response * ros_message = (moveit_msgs__srv__ChangeDriftDimensions_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
