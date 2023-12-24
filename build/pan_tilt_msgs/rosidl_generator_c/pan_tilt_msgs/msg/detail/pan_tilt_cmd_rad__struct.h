// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pan_tilt_msgs:msg/PanTiltCmdRad.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__STRUCT_H_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PanTiltCmdRad in the package pan_tilt_msgs.
/**
  * pan tilt control msg
  * pan tilt yaw angle :rad
 */
typedef struct pan_tilt_msgs__msg__PanTiltCmdRad
{
  double yaw;
  /// pan tilt pitch angle :rad
  double pitch;
  /// pan tilt speed :rad/s
  double speed;
} pan_tilt_msgs__msg__PanTiltCmdRad;

// Struct for a sequence of pan_tilt_msgs__msg__PanTiltCmdRad.
typedef struct pan_tilt_msgs__msg__PanTiltCmdRad__Sequence
{
  pan_tilt_msgs__msg__PanTiltCmdRad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pan_tilt_msgs__msg__PanTiltCmdRad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__STRUCT_H_
