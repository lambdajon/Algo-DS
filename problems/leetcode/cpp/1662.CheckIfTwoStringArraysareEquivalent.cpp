#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
  bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
  {
    string w1 = "", w2 = "";
    for (string s1 : word1)
    {
      w1 += s1;
    }
    for (string s2 : word2)
    {
      w2 += s2;
    }

    return w1 == w2;
  }
};

int main()
{
  vector<string> word1 = {"ab", "c"};
  vector<string> word2 = {"a", "bc"};
  Solution *s = new Solution();

  bool r = s->arrayStringsAreEqual(word1, word2);

  cout << "Result: " << r << endl;
  return 0;
}
