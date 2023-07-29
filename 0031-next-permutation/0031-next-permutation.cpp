class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                for(int j = nums.size()-1;j>i-1;j--){
                    if(nums[j]>nums[i-1]){
                        swap(nums[j],nums[i-1]);
                        break;
                    }
                }
                for(int j = 0; j<(nums.size() - i)/2;j++ ){
                    swap(nums[i+j],nums[nums.size()-1 - j]);
                }
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};