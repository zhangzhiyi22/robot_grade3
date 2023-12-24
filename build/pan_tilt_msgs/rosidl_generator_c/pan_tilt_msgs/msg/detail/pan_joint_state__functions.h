// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pan_tilt_msgs:msg/PanJointState.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__FUNCTIONS_H_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pan_tilt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pan_tilt_msgs/msg/detail/pan_joint_state__struct.h"

/// Initialize msg/PanJointState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pan_tilt_msgs__msg__PanJointState
 * )) before or use
 * pan_tilt_msgs__msg__PanJointState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanJointState__init(pan_tilt_msgs__msg__PanJointState * msg);

/// Finalize msg/PanJointState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
void
pan_tilt_msgs__msg__PanJointState__fini(pan_tilt_msgs__msg__PanJointState * msg);

/// Create msg/PanJointState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pan_tilt_msgs__msg__PanJointState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
pan_tilt_msgs__msg__PanJointState *
pan_tilt_msgs__msg__PanJointState__create();

/// Destroy msg/PanJointState message.
/**
 * It calls
 * pan_tilt_msgs__msg__PanJointState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
void
pan_tilt_msgs__msg__PanJointState__destroy(pan_tilt_msgs__msg__PanJointState * msg);

/// Check for msg/PanJointState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanJointState__are_equal(const pan_tilt_msgs__msg__PanJointState * lhs, const pan_tilt_msgs__msg__PanJointState * rhs);

/// Copy a msg/PanJointState message.
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
pan_tilt_msgs__msg__PanJointState__copy(
  const pan_tilt_msgs__msg__PanJointState * input,
  pan_tilt_msgs__msg__PanJointState * output);

/// Initialize array of msg/PanJointState messages.
/**
 * It allocates the memory for the number of elements and calls
 * pan_tilt_msgs__msg__PanJointState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanJointState__Sequence__init(pan_tilt_msgs__msg__PanJointState__Sequence * array, size_t size);

/// Finalize array of msg/PanJointState messages.
/**
 * It calls
 * pan_tilt_msgs__msg__PanJointState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
void
pan_tilt_msgs__msg__PanJointState__Sequence__fini(pan_tilt_msgs__msg__PanJointState__Sequence * array);

/// Create array of msg/PanJointState messages.
/**
 * It allocates the memory for the array and calls
 * pan_tilt_msgs__msg__PanJointState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
pan_tilt_msgs__msg__PanJointState__Sequence *
pan_tilt_msgs__msg__PanJointState__Sequence__create(size_t size);

/// Destroy array of msg/PanJointState messages.
/**
 * It calls
 * pan_tilt_msgs__msg__PanJointState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
void
pan_tilt_msgs__msg__PanJointState__Sequence__destroy(pan_tilt_msgs__msg__PanJointState__Sequence * array);

/// Check for msg/PanJointState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pan_tilt_msgs
bool
pan_tilt_msgs__msg__PanJointState__Sequence__are_equal(const pan_tilt_msgs__msg__PanJointState__Sequence * lhs, const pan_tilt_msgs__msg__PanJointState__Sequence * rhs);

/// Copy an array of msg/PanJointState messages.
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
pan_tilt_msgs__msg__PanJointState__Sequence__copy(
  const pan_tilt_msgs__msg__PanJointState__Sequence * input,
  pan_tilt_msgs__msg__PanJointState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__FUNCTIONS_H_
