class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid]==target){
                int a=mid,b=mid;
                while(a>=0 && nums[a]==target){a--;}
                while(b<nums.size() && nums[b]==target){b++;}
                return {a+1,b-1};
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return {-1,-1};
    }
};