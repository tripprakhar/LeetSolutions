class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zero =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)prod*=nums[i];
            else zero++;
        }
        if(zero>1)return vector<int>(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0 && zero!=1)nums[i]=prod/nums[i];
            else if(nums[i]!=0 && zero==1)nums[i]=0;
            else if(nums[i]==0 && zero ==1)nums[i]=prod;
        }
        return nums;
    }
};