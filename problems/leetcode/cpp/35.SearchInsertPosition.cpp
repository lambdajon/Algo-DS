#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int mid = 0;
    int left = 0;
    int right = nums.size() - 1;

    if (nums[right] < target)
    {
      return right + 1;
    }
    while (left <= right)
    {
      mid = left + (right - left) / 2;
      if (nums[mid] == target)
      {
        return mid;
      }
      if ((nums[mid] < target && nums[mid + 1] > target))
      {
        cout << mid << endl;

        return mid + 1;
      }
      else if (nums[mid] < target)
      {
        left = mid + 1;
      }
      else
        right = mid - 1;
    }
    return mid;
  }
};