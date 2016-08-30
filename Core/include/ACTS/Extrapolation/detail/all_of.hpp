#ifndef ACTS_ALL_OF_HPP
#define ACTS_ALL_OF_HPP 1

#include <type_traits>

namespace Acts {

namespace detail {

  // clang-format off
  template <bool... values>
  struct all_of : std::true_type  {};

  template <bool... others>
  struct all_of<false, others...> : public std::false_type {};

  template <bool... others>
  struct all_of<true, others...> : public all_of<others...> {};
  // clang-format on
}  // namespace detail

}  // namespace Acts
#endif  // ACTS_ALL_OF_HPP
