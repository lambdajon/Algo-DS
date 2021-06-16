#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int cp = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != 0)
      {
        nums[cp] = nums[i];
        cp++;
      }
    }
    for (int i = cp; i < nums.size(); i++)
    {
      nums[i] = 0;
    }
  }
};