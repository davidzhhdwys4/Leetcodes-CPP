#include "Answer.h"
#include <gtest/gtest.h>

class SqrtXTest : public testing::TestWithParam<std::pair<int, int>>
{
};

TEST_P(SqrtXTest, PositiveInts)
{
  Answer solution;

  auto& in_out = GetParam();
  EXPECT_EQ(solution.mySqrt(in_out.first), in_out.second);
}

INSTANTIATE_TEST_SUITE_P(SqrtXTest,
  SqrtXTest,
  testing::Values(
    std::make_pair<int, int>(0, 0),
    std::make_pair<int, int>(1, 1),
    std::make_pair<int, int>(3, 1),
    std::make_pair<int, int>(4, 2),
    std::make_pair<int, int>(5, 2),
    std::make_pair<int, int>(8, 2),
    std::make_pair<int, int>(9, 3),
    std::make_pair<int, int>(10, 3),
    std::make_pair<int, int>(15, 3),
    std::make_pair<int, int>(16, 4),
    std::make_pair<int, int>(17, 4),
    std::make_pair<int, int>(24, 4),
    std::make_pair<int, int>(25, 5),
    std::make_pair<int, int>(26, 5)
  ));