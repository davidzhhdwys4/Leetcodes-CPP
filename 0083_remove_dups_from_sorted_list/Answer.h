#pragma once

/// @brief Definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Answer
{
public:
  ListNode* deleteDuplicates(ListNode* const head)
  {
    ListNode* curnode = head;
    while (curnode != nullptr)
    {
      ListNode* nextnode = curnode->next;
      while (nextnode != nullptr && curnode->val == nextnode->val)
      {
        nextnode = nextnode->next;
      }
      
      curnode->next = nextnode;
      curnode = curnode->next;
    }

    return head;
  };
};