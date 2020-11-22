#include <iostream>
#include <vector>

using namespace std;
int main()
{
  vector<int> nums = {0, 1, 2, 3, 4};
  vector<int> index = {0, 1, 2, 2, 1};
  vector<int> r;

  for (int i = 0; i < nums.size(); i++)
  {
    r.insert(r.begin() + index[i], nums[i]);
  }
}