// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pan_tilt_msgs:msg/PanTiltCmdDeg.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__FUNCTIONS_H_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pan_tilt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_deg__struct.h"

/// Initialize msg/PanTiltCmdDeg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pan_tilt_msgs__msg__PanTiltCmdDeg
 * )) before or use
 * pan_tilt_msgs__msg__PanTiltCmdDeg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanTiltCmdDeg__init(pan_tilt_msgs__msg__PanTiltCmdDeg * msg);

/// Finalize msg/PanTiltCmdDeg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
void
pan_tilt_msgs__msg__PanTiltCmdDeg__fini(pan_tilt_msgs__msg__PanTiltCmdDeg * msg);

/// Create msg/PanTiltCmdDeg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pan_tilt_msgs__msg__PanTiltCmdDeg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
pan_tilt_msgs__msg__PanTiltCmdDeg *
pan_tilt_msgs__msg__PanTiltCmdDeg__create();

/// Destroy msg/PanTiltCmdDeg message.
/**
 * It calls
 * pan_tilt_msgs__msg__PanTiltCmdDeg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
void
pan_tilt_msgs__msg__PanTiltCmdDeg__destroy(pan_tilt_msgs__msg__PanTiltCmdDeg * msg);

/// Check for msg/PanTiltCmdDeg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanTiltCmdDeg__are_equal(const pan_tilt_msgs__msg__PanTiltCmdDeg * lhs, const pan_tilt_msgs__msg__PanTiltCmdDeg * rhs);

/// Copy a msg/PanTiltCmdDeg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanTiltCmdDeg__copy(
  const pan_tilt_msgs__msg__PanTiltCmdDeg * input,
  pan_tilt_msgs__msg__PanTiltCmdDeg * output);

/// Initialize array of msg/PanTiltCmdDeg messages.
/**
 * It allocates the memory for the number of elements and calls
 * pan_tilt_msgs__msg__PanTiltCmdDeg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence__init(pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence * array, size_t size);

/// Finalize array of msg/PanTiltCmdDeg messages.
/**
 * It calls
 * pan_tilt_msgs__msg__PanTiltCmdDeg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
void
pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence__fini(pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence * array);

/// Create array of msg/PanTiltCmdDeg messages.
/**
 * It allocates the memory for the array and calls
 * pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence *
pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence__create(size_t size);

/// Destroy array of msg/PanTiltCmdDeg messages.
/**
 * It calls
 * pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
void
pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence__destroy(pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence * array);

/// Check for msg/PanTiltCmdDeg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence__are_equal(const pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence * lhs, const pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence * rhs);

/// Copy an array of msg/PanTiltCmdDeg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence__copy(
  const pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence * input,
  pan_tilt_msgs__msg__PanTiltCmdDeg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__FUNCTIONS_H_
