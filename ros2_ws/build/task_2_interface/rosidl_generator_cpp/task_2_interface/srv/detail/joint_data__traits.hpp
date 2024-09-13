// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_2_interface:srv/JointData.idl
// generated code does not contain a copyright notice

#ifndef TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__TRAITS_HPP_
#define TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task_2_interface/srv/detail/joint_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace task_2_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointData_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace task_2_interface

namespace rosidl_generator_traits
{

[[deprecated("use task_2_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_2_interface::srv::JointData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_2_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_2_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const task_2_interface::srv::JointData_Request & msg)
{
  return task_2_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task_2_interface::srv::JointData_Request>()
{
  return "task_2_interface::srv::JointData_Request";
}

template<>
inline const char * name<task_2_interface::srv::JointData_Request>()
{
  return "task_2_interface/srv/JointData_Request";
}

template<>
struct has_fixed_size<task_2_interface::srv::JointData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<task_2_interface::srv::JointData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<task_2_interface::srv::JointData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace task_2_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointData_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace task_2_interface

namespace rosidl_generator_traits
{

[[deprecated("use task_2_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_2_interface::srv::JointData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_2_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_2_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const task_2_interface::srv::JointData_Response & msg)
{
  return task_2_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task_2_interface::srv::JointData_Response>()
{
  return "task_2_interface::srv::JointData_Response";
}

template<>
inline const char * name<task_2_interface::srv::JointData_Response>()
{
  return "task_2_interface/srv/JointData_Response";
}

template<>
struct has_fixed_size<task_2_interface::srv::JointData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<task_2_interface::srv::JointData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<task_2_interface::srv::JointData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task_2_interface::srv::JointData>()
{
  return "task_2_interface::srv::JointData";
}

template<>
inline const char * name<task_2_interface::srv::JointData>()
{
  return "task_2_interface/srv/JointData";
}

template<>
struct has_fixed_size<task_2_interface::srv::JointData>
  : std::integral_constant<
    bool,
    has_fixed_size<task_2_interface::srv::JointData_Request>::value &&
    has_fixed_size<task_2_interface::srv::JointData_Response>::value
  >
{
};

template<>
struct has_bounded_size<task_2_interface::srv::JointData>
  : std::integral_constant<
    bool,
    has_bounded_size<task_2_interface::srv::JointData_Request>::value &&
    has_bounded_size<task_2_interface::srv::JointData_Response>::value
  >
{
};

template<>
struct is_service<task_2_interface::srv::JointData>
  : std::true_type
{
};

template<>
struct is_service_request<task_2_interface::srv::JointData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<task_2_interface::srv::JointData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TASK_2_INTERFACE__SRV__DETAIL__JOINT_DATA__TRAITS_HPP_
