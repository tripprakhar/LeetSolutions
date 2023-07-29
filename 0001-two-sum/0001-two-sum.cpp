class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> rec;
        rec[nums[0]]=0;
        for(int i=1;i<nums.size();i++){
            int f = target - nums[i];
            if(rec.find(f)!=rec.end()){
                vector<int> ans {rec[f],i};
                return ans;
            }else{
                rec[nums[i]]=i;
            }
        }
        return vector<int>();
    }
};