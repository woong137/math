#include "math/utils.hpp"

#include <cmath>
#include <limits>
#include <stdexcept>

namespace woong137::math {
auto Add(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs)) {
    throw std::invalid_argument("lhs or rhs is NaN");
  }
  if (std::isinf(lhs) || std::isinf(rhs)) {
    throw std::invalid_argument("lhs or rhs is Inf");
  }
  return lhs + rhs;
}

auto IsEqual(double lhs, double rhs) -> bool {
  return std::fabs(lhs - rhs) < std::numeric_limits<double>::epsilon();
}
}  // namespace woong137::math