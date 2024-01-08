#ifndef WOONG137__MATH__UTILS__HPP
#define WOONG137__MATH__UTILS__HPP

namespace woong137::math {
// 사칙연산
// Add, Subtract, Multiply, Divide
auto Add(double lhs, double rhs) -> double;
auto Subtract(double lhs, double rhs) -> double;
auto Multiply(double lhs, double rhs) -> double;
auto Divide(double lhs, double rhs) -> double;

// 비교연산
// IsEqual
auto IsEqual(double lhs, double rhs) -> bool;

}  // namespace woong137::math

#endif
