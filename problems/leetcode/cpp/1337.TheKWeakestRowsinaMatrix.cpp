#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

class Solution
{
public:
  vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
  {
    vector<int> r;

    map<int, set<int>> map;

    for (int i = 0; i < mat.size(); i++)
    {
      int cr = 0;

      int start = 0, end = mat[i].size() - 1, mid = 0;
      while (start <= end)
      {
        mid = start + (end - start) / 2;

        if (mat[i][mid] > 0)
        {
          start = mid + 1;
        }
        else
        {
          end = mid - 1;
        }
      }
      map[start].insert(i);
    }
    for (auto m : map)
    {
      if (r.size() == k)
        break;
      for (auto y : m.second)
      {
        if (r.size() != k)
          r.push_back(y);
        else
          break;
      }
    }
    return r;
  }
};