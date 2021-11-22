class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count=0;
        k=k % nums.size();
        for(int i=0;i<nums.size();i++){
            if(i+k<nums.size()){
                count++;
               
            }
            else break;
        }
        reverse(nums.begin(),nums.begin()+count);
        reverse(nums.begin()+count,nums.end());
        
        int i=0;
        int j=nums.size()-1;
        
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};