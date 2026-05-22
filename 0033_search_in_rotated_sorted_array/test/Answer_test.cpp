#include "../src/Answer.h"
#include <gtest/gtest.h>

TEST(SearchInRotatedSortedArrayTest, TargetFoundInRotatedSegment)
{
  Answer solution;
  std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  EXPECT_EQ(solution.search(nums, 0), 4);
}

TEST(SearchInRotatedSortedArrayTest, TargetFoundInUnRotatedSegment)
{
  Answer solution;
  std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  EXPECT_EQ(solution.search(nums, 6), 2);
}

TEST(SearchInRotatedSortedArrayTest, TargetNotFound)
{
  Answer solution;
  std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  EXPECT_EQ(solution.search(nums, 3), -1);
}

TEST(SearchInRotatedSortedArrayTest, SingleElementNotFound)
{
  Answer solution;
  std::vector<int> nums = {1};
  EXPECT_EQ(solution.search(nums, 0), -1);
}
