#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Solution
{
public:
  string defangIPaddr(string address)
  {
    return regex_replace(address, (regex) "[.]", "[.]");
  }
};

int main()
{

  Solution *s = new Solution();

  string r = s->defangIPaddr("1.1.1.1");

  cout << "Result: " << r << endl; // "1[.]1[.]1[.]1"

  return 0;
}