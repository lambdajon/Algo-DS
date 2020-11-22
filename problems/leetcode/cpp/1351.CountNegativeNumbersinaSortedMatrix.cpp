#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int countNegatives(vector<vector<int>> &grid)
  {
    if (grid.size() == 0)
    {
      return 0;
    }

    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
      int start = 0, end = grid[i].size() - 1, mid = 0, loc = -1;
      while (start <= end)
      {
        mid = start + (end - start) / 2;
        if (grid[i][mid] >= 0)
        {
          start = mid + 1;
        }
        else
        {
          loc = mid;
          end = mid - 1;
        }
      }
      if (loc != -1)
      {
        count += (grid[0].size() - loc);
      }
    }
    return count;
  }
};