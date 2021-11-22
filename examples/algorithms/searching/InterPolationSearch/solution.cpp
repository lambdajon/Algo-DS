#include<vector>

using namespace std;

int interpolationSearch(vector<int>& nums, int low, int hight, int target){

    int position = 0;

    // Since array is sorted, an element present
    // in array must be in range defined by corner
    
    if (low <= hight && target >= nums[low] && target <= nums[hight]) {

        // Probing the position with keeping
        // uniform distribution in mind.
        position = low + ((hight - low) / (nums[hight] - nums[low])) * (target - nums[low]);;

        // Condition of target found
        if (nums[position] == target) {
            return position;
        }

        // If target is larger, target is in right sub array
        if (nums[position] < target) {
            return interpolationSearch(nums, position + 1, hight, target);
        }

        // If target is smaller, target is in left sub array
        if (nums[position] > target) {
            return interpolationSearch(nums, low, position - 1, target);
        }
    }
    return -1;
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int res = interpolationSearch(arr, 0, arr.size() - 1, 6);
    cout << "Target number index: "<<res << endl;
};