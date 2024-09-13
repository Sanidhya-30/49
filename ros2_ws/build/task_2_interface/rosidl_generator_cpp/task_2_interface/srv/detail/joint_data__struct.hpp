// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_2_interface:srv/JointData.idl
// generated code does not contain a copyright notice

#ifndef TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__STRUCT_HPP_
#define TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__task_2_interface__srv__JointData_Request __attribute__((deprecated))
#else
# define DEPRECATED__task_2_interface__srv__JointData_Request __declspec(deprecated)
#endif

namespace task_2_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointData_Request_
{
  using Type = JointData_Request_<ContainerAllocator>;

  explicit JointData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit JointData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_2_interface::srv::JointData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_2_interface::srv::JointData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_2_interface::srv::JointData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_2_interface::srv::JointData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_2_interface::srv::JointData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_2_interface::srv::JointData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_2_interface::srv::JointData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_2_interface::srv::JointData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_2_interface::srv::JointData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_2_interface::srv::JointData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_2_interface__srv__JointData_Request
    std::shared_ptr<task_2_interface::srv::JointData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_2_interface__srv__JointData_Request
    std::shared_ptr<task_2_interface::srv::JointData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointData_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointData_Request_

// alias to use template instance with default allocator
using JointData_Request =
  task_2_interface::srv::JointData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task_2_interface


#ifndef _WIN32
# define DEPRECATED__task_2_interface__srv__JointData_Response __attribute__((deprecated))
#else
# define DEPRECATED__task_2_interface__srv__JointData_Response __declspec(deprecated)
#endif

namespace task_2_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointData_Response_
{
  using Type = JointData_Response_<ContainerAllocator>;

  explicit JointData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
    }
  }

  explicit JointData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
    }
  }

  // field types and members
  using _valid_type =
    bool;
  _valid_type valid;

  // setters for named parameter idiom
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_2_interface::srv::JointData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_2_interface::srv::JointData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_2_interface::srv::JointData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_2_interface::srv::JointData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_2_interface::srv::JointData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_2_interface::srv::JointData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_2_interface::srv::JointData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_2_interface::srv::JointData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_2_interface::srv::JointData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_2_interface::srv::JointData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_2_interface__srv__JointData_Response
    std::shared_ptr<task_2_interface::srv::JointData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_2_interface__srv__JointData_Response
    std::shared_ptr<task_2_interface::srv::JointData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointData_Response_ & other) const
  {
    if (this->valid != other.valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointData_Response_

// alias to use template instance with default allocator
using JointData_Response =
  task_2_interface::srv::JointData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task_2_interface

namespace task_2_interface
{

namespace srv
{

struct JointData
{
  using Request = task_2_interface::srv::JointData_Request;
  using Response = task_2_interface::srv::JointData_Response;
};

}  // namespace srv

}  // namespace task_2_interface

#endif  // TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__STRUCT_HPP_
