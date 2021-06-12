bool isBadVersion(int version);

class Solution
{
public:
  int firstBadVersion(int n)
  {
    int left = 0;
    int mid = 0;
    int right = n;
    int fbv = -1;
    while (left <= right)
    {
      mid = left + (right - left) / 2;
      if (isBadVersion(mid))
      {
        if (fbv < 0)
        {
          fbv = mid;
        }
        fbv = mid;
        right = mid - 1;
      }
      else
      {
        left = mid + 1;
      }
    }
    if (fbv > 0)
    {
      return fbv;
    }
    return mid;
  }
};