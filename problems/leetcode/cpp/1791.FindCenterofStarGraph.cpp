#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int findCenter(vector<vector<int>> &edges)
  {
    int edge = -1;
    bool f = false;
    for (int i = 0; i < edges.size(); i++)
    {
      if (!f)
      {
        if (edges[i][0] == edges[i + 1][0] || edges[i][0] == edges[i + 1][1])
        {
          edge = edges[i][0];
        }
        if (edges[i][1] == edges[i + 1][1] || edges[i][1] == edges[i + 1][0])
        {
          edge = edges[i][1];
        }
        f = true;
      }
    }
    return edge;
  }
};