#include <stdio.h>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Solution
{
public:
  bool isSubsequence(string s, string t)
  {
    queue<char> q;
    for (int i = 0; i < s.length(); i++)
    {
      q.push(s.at(i));
    }
    for (int j = 0; j < t.length(); j++)
    {
      if (q.empty())
      {
        return true;
      }
      if (t.at(j) == q.front())
      {
        q.pop();
      }
    }
    return q.empty();
  }
};