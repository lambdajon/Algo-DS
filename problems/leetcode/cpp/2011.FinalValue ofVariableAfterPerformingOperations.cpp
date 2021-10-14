#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
  int finalValueAfterOperations(vector<string> &operations)
  {
    int x = 0;
    for (auto operation : operations)
    {
      if (operation == "--X" || operation == "X--")
      {
        x--;
      }
      if (operation == "++X" || operation == "X++")
      {
        x++;
      }
    }
    return x;
  }
};