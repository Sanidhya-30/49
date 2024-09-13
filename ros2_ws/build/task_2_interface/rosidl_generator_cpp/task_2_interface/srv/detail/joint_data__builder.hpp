// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_2_interface:srv/JointData.idl
// generated code does not contain a copyright notice

#ifndef TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__BUILDER_HPP_
#define TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_2_interface/srv/detail/joint_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_2_interface
{

namespace srv
{

namespace builder
{

class Init_JointData_Request_z
{
public:
  explicit Init_JointData_Request_z(::task_2_interface::srv::JointData_Request & msg)
  : msg_(msg)
  {}
  ::task_2_interface::srv::JointData_Request z(::task_2_interface::srv::JointData_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_2_interface::srv::JointData_Request msg_;
};

class Init_JointData_Request_y
{
public:
  explicit Init_JointData_Request_y(::task_2_interface::srv::JointData_Request & msg)
  : msg_(msg)
  {}
  Init_JointData_Request_z y(::task_2_interface::srv::JointData_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_JointData_Request_z(msg_);
  }

private:
  ::task_2_interface::srv::JointData_Request msg_;
};

class Init_JointData_Request_x
{
public:
  Init_JointData_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointData_Request_y x(::task_2_interface::srv::JointData_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_JointData_Request_y(msg_);
  }

private:
  ::task_2_interface::srv::JointData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_2_interface::srv::JointData_Request>()
{
  return task_2_interface::srv::builder::Init_JointData_Request_x();
}

}  // namespace task_2_interface


namespace task_2_interface
{

namespace srv
{

namespace builder
{

class Init_JointData_Response_valid
{
public:
  Init_JointData_Response_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_2_interface::srv::JointData_Response valid(::task_2_interface::srv::JointData_Response::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_2_interface::srv::JointData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_2_interface::srv::JointData_Response>()
{
  return task_2_interface::srv::builder::Init_JointData_Response_valid();
}

}  // namespace task_2_interface

#endif  // TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__BUILDER_HPP_
