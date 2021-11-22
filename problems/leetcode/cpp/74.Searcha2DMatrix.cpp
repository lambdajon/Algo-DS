#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int leftx = 0;
        int rightx = matrix.size();
        int midx = (leftx + rightx) / 2;
        while (leftx < rightx) { 
            if (matrix[midx].back() >= target && matrix[midx][0] <= target) {
                int lefty = 0, righty = matrix[midx].size();
                int midy = (lefty + righty) / 2;
                while (lefty < righty) { 
                    if (matrix[midx][midy] == target) {
                        return true;
                    }
                    if (matrix[midx][midy] < target) {
                        lefty = midy + 1;
                    } else {
                        righty = midy;
                    }
                    midy = (lefty + righty) / 2;
                }
                return false;
            }
            if (matrix[midx].back() < target) {
                leftx = midx + 1;
            } else if (matrix[midx][0] > target) {
                rightx = midx;
            }
            midx = (leftx + rightx) / 2;
        }
        return false;
    }
};