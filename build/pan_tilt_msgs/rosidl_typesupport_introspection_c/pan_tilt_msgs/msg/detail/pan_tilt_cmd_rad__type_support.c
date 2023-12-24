// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pan_tilt_msgs:msg/PanTiltCmdRad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_rad__rosidl_typesupport_introspection_c.h"
#include "pan_tilt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_rad__functions.h"
#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_rad__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pan_tilt_msgs__msg__PanTiltCmdRad__init(message_memory);
}

void pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_fini_function(void * message_memory)
{
  pan_tilt_msgs__msg__PanTiltCmdRad__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_message_member_array[3] = {
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pan_tilt_msgs__msg__PanTiltCmdRad, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pan_tilt_msgs__msg__PanTiltCmdRad, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pan_tilt_msgs__msg__PanTiltCmdRad, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_message_members = {
  "pan_tilt_msgs__msg",  // message namespace
  "PanTiltCmdRad",  // message name
  3,  // number of fields
  sizeof(pan_tilt_msgs__msg__PanTiltCmdRad),
  pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_message_member_array,  // message members
  pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_init_function,  // function to initialize message memory (memory has to be allocated)
  pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_message_type_support_handle = {
  0,
  &pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pan_tilt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pan_tilt_msgs, msg, PanTiltCmdRad)() {
  if (!pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_message_type_support_handle.typesupport_identifier) {
    pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pan_tilt_msgs__msg__PanTiltCmdRad__rosidl_typesupport_introspection_c__PanTiltCmdRad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
