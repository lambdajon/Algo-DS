#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int n = nums.size();
    int cnt, i;
    cnt = 1;
    i = 0;
    if (nums.empty())
    {
      return 0;
    }
    for (int j = 0; j < n; j++)
    {

      if (nums[j] != nums[i])
      {
        nums[i + 1] = nums[j];
        i++;
        cnt++;
      }
    }
    return cnt;
  }
};