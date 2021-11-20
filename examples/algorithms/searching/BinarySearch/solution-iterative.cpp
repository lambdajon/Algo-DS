#include<vector>

using namespace std;

int BinarySearch(vector<int>& nums, int target){
    
    int low = 0;
    int hight = nums.size() - 1;
    while(low<=hight){
        int mid = (low+hight) / 2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] > target) hight = mid -1;
        if(nums[mid] < target) low = mid + 1;
    }
    return -1;
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int res = BinarySearch(arr, 3);
    cout << "Target number index: "<< res << endl;
};