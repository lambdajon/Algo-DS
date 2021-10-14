#include <map>

using namespace std;

class Solution
{
public:
  int romanToInt(string s)
  {

    map<char, int> mp;

    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['I'] = 1;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int sz = s.size();
    int ans = 0;
    if (sz == 0)
      return ans;
    ans = ans + mp[s[sz - 1]];
    for (int i = sz - 2; i >= 0; i--)
    {
      if (mp[s[i]] < mp[s[i + 1]])
        ans = ans - mp[s[i]];
      else
        ans = ans + mp[s[i]];
    }
    return ans;
  }
};