#include "Answer.h"
#include <gtest/gtest.h>

TEST(PalindromeNumberTest, PositivePalindrome)
{
  Solution solution;
  EXPECT_TRUE(solution.isPalindrome(121));
  EXPECT_TRUE(solution.isPalindromeInt(121));
}

TEST(PalindromeNumberTest, NegativePalindrome)
{
  Solution solution;
  EXPECT_FALSE(solution.isPalindrome(-121));
  EXPECT_FALSE(solution.isPalindromeInt(-121));
}

TEST(PalindromeNumberTest, NotPalindrome)
{
  Solution solution;
  EXPECT_FALSE(solution.isPalindrome(10));
  EXPECT_FALSE(solution.isPalindromeInt(10));
}

TEST(PalindromeNumberTest, Zero)
{
  Solution solution;
  EXPECT_TRUE(solution.isPalindrome(0));
  EXPECT_TRUE(solution.isPalindromeInt(0));
}