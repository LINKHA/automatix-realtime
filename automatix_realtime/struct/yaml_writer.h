#pragma once
#include <iguana/yaml_writer.hpp>

namespace amx {
template <typename Stream, typename T>
inline void to_yaml(T &&t, Stream &s, size_t min_spaces = 0) {
  iguana::to_yaml(std::forward<T>(t), s, min_spaces);
}
}