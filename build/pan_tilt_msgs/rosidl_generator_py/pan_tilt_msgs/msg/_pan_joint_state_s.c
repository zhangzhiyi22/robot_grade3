// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pan_tilt_msgs:msg/PanJointState.idl
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
#include "pan_tilt_msgs/msg/detail/pan_joint_state__struct.h"
#include "pan_tilt_msgs/msg/detail/pan_joint_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pan_tilt_msgs__msg__pan_joint_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("pan_tilt_msgs.msg._pan_joint_state.PanJointState", full_classname_dest, 48) == 0);
  }
  pan_tilt_msgs__msg__PanJointState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // name1
    PyObject * field = PyObject_GetAttrString(_pymsg, "name1");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name1, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // position1
    PyObject * field = PyObject_GetAttrString(_pymsg, "position1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity1
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // effort1
    PyObject * field = PyObject_GetAttrString(_pymsg, "effort1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->effort1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // name2
    PyObject * field = PyObject_GetAttrString(_pymsg, "name2");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name2, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // position2
    PyObject * field = PyObject_GetAttrString(_pymsg, "position2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity2
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // effort2
    PyObject * field = PyObject_GetAttrString(_pymsg, "effort2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->effort2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pan_tilt_msgs__msg__pan_joint_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PanJointState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pan_tilt_msgs.msg._pan_joint_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PanJointState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pan_tilt_msgs__msg__PanJointState * ros_message = (pan_tilt_msgs__msg__PanJointState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name1
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name1.data,
      strlen(ros_message->name1.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // effort1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->effort1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "effort1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name2
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name2.data,
      strlen(ros_message->name2.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // effort2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->effort2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "effort2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
