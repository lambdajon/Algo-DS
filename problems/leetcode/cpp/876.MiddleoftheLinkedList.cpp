
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    int i = 1;

    ListNode *first = head;
    while (first != nullptr && first->next != nullptr)
    {
      first = first->next;
      i++;
    }
    int mid = floor((i / 2));

    cout << mid << endl;
    while (mid > 0)
    {
      mid--;
      head = head->next;
    }
    return head;
  }
};
