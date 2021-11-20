#include<vector>

using namespace std;

int BinarySearch(vector<int>& nums, int start, int end, int target){
    
    if (start <= end) {
        int mid = (end + start) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] > target)
            return BinarySearch(nums, start, mid - 1, target);
        return BinarySearch(nums, mid + 1, end, target);
    }
    return -1;
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int res = BinarySearch(arr, 0, arr.size(), 3);
    cout << "Target number index: "<<res << endl;
};