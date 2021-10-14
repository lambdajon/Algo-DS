#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  int firstUniqChar(string s)
  {
    unordered_map<char, int> dic;
    for (int i = 0; i < s.length(); i++)
    {
      if (!dic[s[i]])
      {
        dic[s[i]] = 1;
      }
      else
      {
        dic[s[i]] = dic[s[i]] + 1;
      }
    }
    
    return 2;
  }
};