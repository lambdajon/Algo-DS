#include <vector>

using namespace std;

class MinStack
{
private:
  int min = 0;
  vector<int> s;

public:
  /** initialize your data structure here. */
  MinStack()
  {
  }

  void push(int val)
  {
    if (this->s.size() == 0)
    {
      this->min = val;
      this->s.push_back(val);
    }
    else
    {
      if (this->min >= val)
      {
        this->min = val;
      }
      this->s.push_back(val);
    }
  }

  void pop()
  {
    this->s.pop_back();
    this->min = this->s[0];

    for (int i = 0; i < this->s.size(); i++)
    {
      if (this->min > this->s[i])
      {
        this->min = this->s[i];
      }
    }
  }

  int top()
  {
    return this->s[this->s.size() - 1];
  }

  int getMin()
  {
    return this->min;
  }
};