// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_2_interface:srv/JointData.idl
// generated code does not contain a copyright notice

#ifndef TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__STRUCT_H_
#define TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/JointData in the package task_2_interface.
typedef struct task_2_interface__srv__JointData_Request
{
  float x;
  float y;
  float z;
} task_2_interface__srv__JointData_Request;

// Struct for a sequence of task_2_interface__srv__JointData_Request.
typedef struct task_2_interface__srv__JointData_Request__Sequence
{
  task_2_interface__srv__JointData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_2_interface__srv__JointData_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/JointData in the package task_2_interface.
typedef struct task_2_interface__srv__JointData_Response
{
  bool valid;
} task_2_interface__srv__JointData_Response;

// Struct for a sequence of task_2_interface__srv__JointData_Response.
typedef struct task_2_interface__srv__JointData_Response__Sequence
{
  task_2_interface__srv__JointData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_2_interface__srv__JointData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__STRUCT_H_
