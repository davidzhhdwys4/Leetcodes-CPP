#include "Answer.h"
#include <gtest/gtest.h>

TEST(LengthOfLastWordTest, OneWord)
{
  Answer solution;
  EXPECT_EQ(solution.lengthOfLastWord("World"), 5);
}

TEST(LengthOfLastWordTest, TwoWords)
{
  Answer solution;
  EXPECT_EQ(solution.lengthOfLastWord("Hello World"), 5);
}

TEST(LengthOfLastWordTest, TrailingSpaces)
{
  Answer solution;
  EXPECT_EQ(solution.lengthOfLastWord("   fly me   to   the moon  "), 4);
}

TEST(LengthOfLastWordTest, FourWords)
{
  Answer solution;
  EXPECT_EQ(solution.lengthOfLastWord("luffy is still joyboy"), 6);
}