class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>m;
        m[nums[0]]=0;
        for(int i=1;i<nums.size();i++){
            if(m.find(nums[i])!=m.end() && abs(i-m[nums[i]]) <= k)return true;
            m[nums[i]]=i;
        }
        return false;
    }
};