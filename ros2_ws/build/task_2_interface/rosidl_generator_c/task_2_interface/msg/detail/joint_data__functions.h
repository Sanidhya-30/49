// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from task_2_interface:msg/JointData.idl
// generated code does not contain a copyright notice

#ifndef TASK_2_INTERFACE__MSG__DETAIL__JOINT_DATA__FUNCTIONS_H_
#define TASK_2_INTERFACE__MSG__DETAIL__JOINT_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "task_2_interface/msg/rosidl_generator_c__visibility_control.h"

#include "task_2_interface/msg/detail/joint_data__struct.h"

/// Initialize msg/JointData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_2_interface__msg__JointData
 * )) before or use
 * task_2_interface__msg__JointData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
bool
task_2_interface__msg__JointData__init(task_2_interface__msg__JointData * msg);

/// Finalize msg/JointData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
void
task_2_interface__msg__JointData__fini(task_2_interface__msg__JointData * msg);

/// Create msg/JointData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_2_interface__msg__JointData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
task_2_interface__msg__JointData *
task_2_interface__msg__JointData__create();

/// Destroy msg/JointData message.
/**
 * It calls
 * task_2_interface__msg__JointData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
void
task_2_interface__msg__JointData__destroy(task_2_interface__msg__JointData * msg);

/// Check for msg/JointData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
bool
task_2_interface__msg__JointData__are_equal(const task_2_interface__msg__JointData * lhs, const task_2_interface__msg__JointData * rhs);

/// Copy a msg/JointData message.
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
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
bool
task_2_interface__msg__JointData__copy(
  const task_2_interface__msg__JointData * input,
  task_2_interface__msg__JointData * output);

/// Initialize array of msg/JointData messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_2_interface__msg__JointData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
bool
task_2_interface__msg__JointData__Sequence__init(task_2_interface__msg__JointData__Sequence * array, size_t size);

/// Finalize array of msg/JointData messages.
/**
 * It calls
 * task_2_interface__msg__JointData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
void
task_2_interface__msg__JointData__Sequence__fini(task_2_interface__msg__JointData__Sequence * array);

/// Create array of msg/JointData messages.
/**
 * It allocates the memory for the array and calls
 * task_2_interface__msg__JointData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
task_2_interface__msg__JointData__Sequence *
task_2_interface__msg__JointData__Sequence__create(size_t size);

/// Destroy array of msg/JointData messages.
/**
 * It calls
 * task_2_interface__msg__JointData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
void
task_2_interface__msg__JointData__Sequence__destroy(task_2_interface__msg__JointData__Sequence * array);

/// Check for msg/JointData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
bool
task_2_interface__msg__JointData__Sequence__are_equal(const task_2_interface__msg__JointData__Sequence * lhs, const task_2_interface__msg__JointData__Sequence * rhs);

/// Copy an array of msg/JointData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_task_2_interface
bool
task_2_interface__msg__JointData__Sequence__copy(
  const task_2_interface__msg__JointData__Sequence * input,
  task_2_interface__msg__JointData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TASK_2_INTERFACE__MSG__DETAIL__JOINT_DATA__FUNCTIONS_H_
