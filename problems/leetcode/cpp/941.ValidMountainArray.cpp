#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
  bool validMountainArray(vector<int> &arr)
  {
    int l = arr.size();

    if (l < 3)
    {
      return false;
    }
    int mid = 0;
    for (int i = 1; i < l; i++)
    {
      if ((i + 1) <= l - 1)
      {
        if (arr[i] == arr[i + 1] || arr[i] == arr[i - 1])
          return false;

        if (mid >= 0 && arr[i] > arr[i + 1])
        {
          if (arr[i - 1] < arr[i])
          {
            mid++;
          }
        }
        else
        {
          if (mid > 0)
          {
            return false;
          }
          else
          {
            if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
            {
              return false;
            }
          }
        }
      }
    }
    if (mid == 1)
      return true;
    return false;
  }
};