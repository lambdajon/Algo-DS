#include<vector>

using namespace std;

int LinearSearch(vector<int>& nums, int target){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int res = LinearSearch(arr, 3);
    cout << "Target number index: "<<res << endl;
};