int guess(int num);

class Solution
{
public:
  int guessNumber(int n)
  {
    int left = 1;
    int right = n;
    if (guess(n) == 0)
      return n;
    while (left <= right)
    {
      int middle = (right - left) / 2 + left;

      int gs = guess(middle);

      if (gs == 0)
      {
        return middle;
      }
      else if (gs == 1)
      {
        left = middle + 1;
      }
      else
      {
        right = middle - 1;
      }
    }

    return left;
  }
};