#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int mid = 0;
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
      mid = left + (right - left) / 2;
      if (nums[mid] == target)
      {
        return mid;
      };
      if (target < nums[mid])
      {
        right = mid - 1;
      }
      else
      {
        left = mid + 1;
      };
    }
    return -1;
  }
};