// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from person_mags:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MAGS__MSG__DETAIL__PERSON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PERSON_MAGS__MSG__DETAIL__PERSON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "person_mags/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "person_mags/msg/detail/person__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace person_mags
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_mags
cdr_serialize(
  const person_mags::msg::Person & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_mags
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  person_mags::msg::Person & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_mags
get_serialized_size(
  const person_mags::msg::Person & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_mags
max_serialized_size_Person(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace person_mags

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_mags
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, person_mags, msg, Person)();

#ifdef __cplusplus
}
#endif

#endif  // PERSON_MAGS__MSG__DETAIL__PERSON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
