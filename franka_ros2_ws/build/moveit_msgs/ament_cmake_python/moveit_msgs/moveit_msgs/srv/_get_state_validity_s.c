// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:srv/GetStateValidity.idl
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
#include "moveit_msgs/srv/detail/get_state_validity__struct.h"
#include "moveit_msgs/srv/detail/get_state_validity__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool moveit_msgs__msg__robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__robot_state__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__constraints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__constraints__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__get_state_validity__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("moveit_msgs.srv._get_state_validity.GetStateValidity_Request", full_classname_dest, 60) == 0);
  }
  moveit_msgs__srv__GetStateValidity_Request * ros_message = _ros_message;
  {  // robot_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_state");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__robot_state__convert_from_py(field, &ros_message->robot_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // group_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "group_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->group_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // constraints
    PyObject * field = PyObject_GetAttrString(_pymsg, "constraints");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__constraints__convert_from_py(field, &ros_message->constraints)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__srv__get_state_validity__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetStateValidity_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._get_state_validity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetStateValidity_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__GetStateValidity_Request * ros_message = (moveit_msgs__srv__GetStateValidity_Request *)raw_ros_message;
  {  // robot_state
    PyObject * field = NULL;
    field = moveit_msgs__msg__robot_state__convert_to_py(&ros_message->robot_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->group_name.data,
      strlen(ros_message->group_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "group_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // constraints
    PyObject * field = NULL;
    field = moveit_msgs__msg__constraints__convert_to_py(&ros_message->constraints);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "constraints", field);
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
// #include "moveit_msgs/srv/detail/get_state_validity__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_state_validity__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "moveit_msgs/msg/detail/constraint_eval_result__functions.h"
#include "moveit_msgs/msg/detail/contact_information__functions.h"
#include "moveit_msgs/msg/detail/cost_source__functions.h"
// end nested array functions include
bool moveit_msgs__msg__contact_information__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__contact_information__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__cost_source__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__cost_source__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__constraint_eval_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__constraint_eval_result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__srv__get_state_validity__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("moveit_msgs.srv._get_state_validity.GetStateValidity_Response", full_classname_dest, 61) == 0);
  }
  moveit_msgs__srv__GetStateValidity_Response * ros_message = _ros_message;
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // contacts
    PyObject * field = PyObject_GetAttrString(_pymsg, "contacts");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'contacts'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!moveit_msgs__msg__ContactInformation__Sequence__init(&(ros_message->contacts), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__ContactInformation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__ContactInformation * dest = ros_message->contacts.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__contact_information__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cost_sources
    PyObject * field = PyObject_GetAttrString(_pymsg, "cost_sources");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cost_sources'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!moveit_msgs__msg__CostSource__Sequence__init(&(ros_message->cost_sources), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__CostSource__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__CostSource * dest = ros_message->cost_sources.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__cost_source__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // constraint_result
    PyObject * field = PyObject_GetAttrString(_pymsg, "constraint_result");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'constraint_result'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!moveit_msgs__msg__ConstraintEvalResult__Sequence__init(&(ros_message->constraint_result), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create moveit_msgs__msg__ConstraintEvalResult__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    moveit_msgs__msg__ConstraintEvalResult * dest = ros_message->constraint_result.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!moveit_msgs__msg__constraint_eval_result__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__srv__get_state_validity__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetStateValidity_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.srv._get_state_validity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetStateValidity_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__srv__GetStateValidity_Response * ros_message = (moveit_msgs__srv__GetStateValidity_Response *)raw_ros_message;
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contacts
    PyObject * field = NULL;
    size_t size = ros_message->contacts.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__ContactInformation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->contacts.data[i]);
      PyObject * pyitem = moveit_msgs__msg__contact_information__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "contacts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cost_sources
    PyObject * field = NULL;
    size_t size = ros_message->cost_sources.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__CostSource * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cost_sources.data[i]);
      PyObject * pyitem = moveit_msgs__msg__cost_source__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cost_sources", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // constraint_result
    PyObject * field = NULL;
    size_t size = ros_message->constraint_result.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    moveit_msgs__msg__ConstraintEvalResult * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->constraint_result.data[i]);
      PyObject * pyitem = moveit_msgs__msg__constraint_eval_result__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "constraint_result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
