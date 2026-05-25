#include "Answer.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <vector>

class RemoveDupsFromListTest : public testing::Test
{
protected:
  static std::vector<int> ListToVector(const ListNode* const head)
  {
    std::vector<int> out;
    const ListNode* cur = head;
    while (cur != nullptr)
    {
      out.push_back(cur->val);
      cur = cur->next;
    }

    return out;
  }
};

TEST_F(RemoveDupsFromListTest, TestNull)
{
  ListNode* node = nullptr;
  Answer ans;
  
  ASSERT_EQ(nullptr, ans.deleteDuplicates(node));
}

TEST_F(RemoveDupsFromListTest, Test1)
{
  ListNode node0(1);

  std::vector<int> expVec = { 1 };

  Answer ans;
  ListNode* act = ans.deleteDuplicates(&node0);
  std::vector<int> actVec = ListToVector(act);

  ASSERT_THAT(actVec, testing::ContainerEq(expVec));
}

TEST_F(RemoveDupsFromListTest, Test11)
{
  ListNode node1(1);
  ListNode node0(1, &node1);

  std::vector<int> expVec = { 1 };

  Answer ans;
  ListNode* act = ans.deleteDuplicates(&node0);
  std::vector<int> actVec = ListToVector(act);

  ASSERT_THAT(actVec, testing::ContainerEq(expVec));
}

TEST_F(RemoveDupsFromListTest, Test111)
{
  ListNode node2(1);
  ListNode node1(1, &node2);
  ListNode node0(1, &node1);

  std::vector<int> expVec = { 1 };

  Answer ans;
  ListNode* act = ans.deleteDuplicates(&node0);
  std::vector<int> actVec = ListToVector(act);

  ASSERT_THAT(actVec, testing::ContainerEq(expVec));
}

TEST_F(RemoveDupsFromListTest, Test112)
{
  ListNode node2(2);
  ListNode node1(1, &node2);
  ListNode node0(1, &node1);

  std::vector<int> expVec = { 1, 2 };

  Answer ans;
  ListNode* act = ans.deleteDuplicates(&node0);
  std::vector<int> actVec = ListToVector(act);

  ASSERT_THAT(actVec, testing::ContainerEq(expVec));
}

TEST_F(RemoveDupsFromListTest, Test11233)
{
  ListNode node4(3);
  ListNode node3(3, &node4);
  ListNode node2(2, &node3);
  ListNode node1(1, &node2);
  ListNode node0(1, &node1);

  std::vector<int> expVec = { 1, 2, 3 };

  Answer ans;
  ListNode* act = ans.deleteDuplicates(&node0);
  std::vector<int> actVec = ListToVector(act);

  ASSERT_THAT(actVec, testing::ContainerEq(expVec));
}