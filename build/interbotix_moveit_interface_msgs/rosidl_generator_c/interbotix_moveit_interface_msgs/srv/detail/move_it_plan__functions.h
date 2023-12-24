// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interbotix_moveit_interface_msgs:srv/MoveItPlan.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__FUNCTIONS_H_
#define INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interbotix_moveit_interface_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__struct.h"

/// Initialize srv/MoveItPlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Request
 * )) before or use
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__init(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * msg);

/// Finalize srv/MoveItPlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * msg);

/// Create srv/MoveItPlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request *
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__create();

/// Destroy srv/MoveItPlan message.
/**
 * It calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__destroy(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * msg);

/// Check for srv/MoveItPlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__are_equal(const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * lhs, const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * rhs);

/// Copy a srv/MoveItPlan message.
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
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__copy(
  const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * input,
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request * output);

/// Initialize array of srv/MoveItPlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__init(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * array, size_t size);

/// Finalize array of srv/MoveItPlan messages.
/**
 * It calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__fini(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * array);

/// Create array of srv/MoveItPlan messages.
/**
 * It allocates the memory for the array and calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence *
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__create(size_t size);

/// Destroy array of srv/MoveItPlan messages.
/**
 * It calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__destroy(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * array);

/// Check for srv/MoveItPlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__are_equal(const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * lhs, const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * rhs);

/// Copy an array of srv/MoveItPlan messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence__copy(
  const interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * input,
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__Sequence * output);

/// Initialize srv/MoveItPlan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Response
 * )) before or use
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__init(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * msg);

/// Finalize srv/MoveItPlan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * msg);

/// Create srv/MoveItPlan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response *
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__create();

/// Destroy srv/MoveItPlan message.
/**
 * It calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__destroy(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * msg);

/// Check for srv/MoveItPlan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__are_equal(const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * lhs, const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * rhs);

/// Copy a srv/MoveItPlan message.
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
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__copy(
  const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * input,
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response * output);

/// Initialize array of srv/MoveItPlan messages.
/**
 * It allocates the memory for the number of elements and calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__init(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * array, size_t size);

/// Finalize array of srv/MoveItPlan messages.
/**
 * It calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__fini(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * array);

/// Create array of srv/MoveItPlan messages.
/**
 * It allocates the memory for the array and calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence *
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__create(size_t size);

/// Destroy array of srv/MoveItPlan messages.
/**
 * It calls
 * interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
void
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__destroy(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * array);

/// Check for srv/MoveItPlan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__are_equal(const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * lhs, const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * rhs);

/// Copy an array of srv/MoveItPlan messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interbotix_moveit_interface_msgs
bool
interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence__copy(
  const interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * input,
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__FUNCTIONS_H_
