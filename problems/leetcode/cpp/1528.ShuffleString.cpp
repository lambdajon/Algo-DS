#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
  string restoreString(string s, vector<int> &indices)
  {
    string tempStr = s;
    for (int i = 0; i < s.length(); i++)
    {
      tempStr[indices[i]] = s[i];
    }
    return tempStr;
  }
};