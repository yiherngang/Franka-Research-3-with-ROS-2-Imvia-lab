// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from moveit_msgs:msg/Grasp.idl
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
#include "moveit_msgs/msg/detail/grasp__struct.h"
#include "moveit_msgs/msg/detail/grasp__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool trajectory_msgs__msg__joint_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * trajectory_msgs__msg__joint_trajectory__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__gripper_translation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__gripper_translation__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__gripper_translation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__gripper_translation__convert_to_py(void * raw_ros_message);
bool moveit_msgs__msg__gripper_translation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * moveit_msgs__msg__gripper_translation__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool moveit_msgs__msg__grasp__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("moveit_msgs.msg._grasp.Grasp", full_classname_dest, 28) == 0);
  }
  moveit_msgs__msg__Grasp * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pre_grasp_posture
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_grasp_posture");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__joint_trajectory__convert_from_py(field, &ros_message->pre_grasp_posture)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // grasp_posture
    PyObject * field = PyObject_GetAttrString(_pymsg, "grasp_posture");
    if (!field) {
      return false;
    }
    if (!trajectory_msgs__msg__joint_trajectory__convert_from_py(field, &ros_message->grasp_posture)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // grasp_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "grasp_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->grasp_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // grasp_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "grasp_quality");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->grasp_quality = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pre_grasp_approach
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_grasp_approach");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__gripper_translation__convert_from_py(field, &ros_message->pre_grasp_approach)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // post_grasp_retreat
    PyObject * field = PyObject_GetAttrString(_pymsg, "post_grasp_retreat");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__gripper_translation__convert_from_py(field, &ros_message->post_grasp_retreat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // post_place_retreat
    PyObject * field = PyObject_GetAttrString(_pymsg, "post_place_retreat");
    if (!field) {
      return false;
    }
    if (!moveit_msgs__msg__gripper_translation__convert_from_py(field, &ros_message->post_place_retreat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // max_contact_force
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_contact_force");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_contact_force = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // allowed_touch_objects
    PyObject * field = PyObject_GetAttrString(_pymsg, "allowed_touch_objects");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'allowed_touch_objects'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->allowed_touch_objects), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->allowed_touch_objects.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * moveit_msgs__msg__grasp__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Grasp */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("moveit_msgs.msg._grasp");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Grasp");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  moveit_msgs__msg__Grasp * ros_message = (moveit_msgs__msg__Grasp *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_grasp_posture
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory__convert_to_py(&ros_message->pre_grasp_posture);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_grasp_posture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grasp_posture
    PyObject * field = NULL;
    field = trajectory_msgs__msg__joint_trajectory__convert_to_py(&ros_message->grasp_posture);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "grasp_posture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grasp_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->grasp_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "grasp_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grasp_quality
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->grasp_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grasp_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_grasp_approach
    PyObject * field = NULL;
    field = moveit_msgs__msg__gripper_translation__convert_to_py(&ros_message->pre_grasp_approach);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_grasp_approach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // post_grasp_retreat
    PyObject * field = NULL;
    field = moveit_msgs__msg__gripper_translation__convert_to_py(&ros_message->post_grasp_retreat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "post_grasp_retreat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // post_place_retreat
    PyObject * field = NULL;
    field = moveit_msgs__msg__gripper_translation__convert_to_py(&ros_message->post_place_retreat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "post_place_retreat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_contact_force
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_contact_force);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_contact_force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // allowed_touch_objects
    PyObject * field = NULL;
    size_t size = ros_message->allowed_touch_objects.size;
    rosidl_runtime_c__String * src = ros_message->allowed_touch_objects.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "allowed_touch_objects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
