// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from person_mags:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MAGS__MSG__DETAIL__PERSON__BUILDER_HPP_
#define PERSON_MAGS__MSG__DETAIL__PERSON__BUILDER_HPP_

#include "person_mags/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace person_mags
{

namespace msg
{

namespace builder
{

class Init_Person_age
{
public:
  explicit Init_Person_age(::person_mags::msg::Person & msg)
  : msg_(msg)
  {}
  ::person_mags::msg::Person age(::person_mags::msg::Person::_age_type arg)
  {
    msg_.age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_mags::msg::Person msg_;
};

class Init_Person_name
{
public:
  Init_Person_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Person_age name(::person_mags::msg::Person::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Person_age(msg_);
  }

private:
  ::person_mags::msg::Person msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_mags::msg::Person>()
{
  return person_mags::msg::builder::Init_Person_name();
}

}  // namespace person_mags

#endif  // PERSON_MAGS__MSG__DETAIL__PERSON__BUILDER_HPP_
