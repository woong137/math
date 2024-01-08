#include "math/utils.hpp"

#include <cmath>

#include "gtest/gtest.h"

namespace woong137::math {
TEST(MathUtils, Add) {
  EXPECT_THROW(Add(0.0, std::nan("")), std::invalid_argument);
  EXPECT_THROW(Add(std::nan(""), 0.0), std::invalid_argument);
  EXPECT_THROW(Add(std::nan(""), std::nan("")), std::invalid_argument);
  EXPECT_THROW(Add(0.0, std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Add(std::numeric_limits<double>::infinity(), 0.0),
               std::invalid_argument);
  EXPECT_THROW(Add(std::numeric_limits<double>::infinity(),
                   std::numeric_limits<double>::infinity()),
               std::invalid_argument);

  // 같은 경우
  EXPECT_EQ(Add(0.0, 0.0), 0.0);
  EXPECT_EQ(Add(1.0, 0.0), 1.0);
  EXPECT_EQ(Add(0.0, 1.0), 1.0);
  EXPECT_EQ(Add(0.5, 0.5), 1.0);

  // 다른 경우
  EXPECT_NE(Add(0.0, 0.0), 1.0);
  EXPECT_NE(Add(1.0, 0.0), 0.0);
  EXPECT_NE(Add(0.0, 1.0), 0.0);
  EXPECT_NE(Add(0.5, 0.5), 0.0);
}

TEST(MathUtils, Subtract) {
  EXPECT_THROW(Subtract(0.0, std::nan("")), std::invalid_argument);
  EXPECT_THROW(Subtract(std::nan(""), 0.0), std::invalid_argument);
  EXPECT_THROW(Subtract(std::nan(""), std::nan("")), std::invalid_argument);
  EXPECT_THROW(Subtract(0.0, std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Subtract(std::numeric_limits<double>::infinity(), 0.0),
               std::invalid_argument);
  EXPECT_THROW(Subtract(std::numeric_limits<double>::infinity(),
                        std::numeric_limits<double>::infinity()),
               std::invalid_argument);

  // 같은 경우
  EXPECT_EQ(Subtract(0.0, 0.0), 0.0);
  EXPECT_EQ(Subtract(1.0, 0.0), 1.0);
  EXPECT_EQ(Subtract(0.0, 1.0), -1.0);
  EXPECT_EQ(Subtract(0.5, 0.5), 0.0);

  // 다른 경우
  EXPECT_NE(Subtract(0.0, 0.0), 1.0);
  EXPECT_NE(Subtract(1.0, 0.0), 0.0);
  EXPECT_NE(Subtract(0.0, 1.0), 0.0);
  EXPECT_NE(Subtract(0.5, 0.5), 1.0);
}

}  // namespace woong137::math
