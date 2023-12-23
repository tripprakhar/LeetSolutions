class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int count=0,nu=-1;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)m[nums[i]]++;
            if(m[nums[i]]>count){
                count = m[nums[i]];
                nu = nums[i];
            }
            else if(m[nums[i]]==count){
                nu = min(nu,nums[i]);
            }
        }
        return nu;
    }
};