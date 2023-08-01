class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0, max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            if(ans>max)max=ans;
            if(ans<0)ans=0;
        }
        return max;
    }
};