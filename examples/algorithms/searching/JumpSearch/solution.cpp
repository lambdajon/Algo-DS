#include<vector>
#include <math.h>  

using namespace std;

int JumpSearch(vector<int>& nums, int target){
    int n = nums.size();
    int jump = sqrt(n);
    int low =0;
    
    for(int i = 0; i < n; i+=jump){
        if(nums[i]==target){
            return i;
        }
        if(nums[i]< target) low = i;
        if(nums[i] > target) break;
    }

    for(int i= low; i < n; i++)
    {
        if(nums[i]== target) return i;
    }
    return -1;
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int res = JumpSearch(arr, 3);
    cout << "Target number index: "<<res << endl;
};