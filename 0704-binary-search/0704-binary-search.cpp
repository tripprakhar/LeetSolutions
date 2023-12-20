class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1 && nums[0]==target)return 0;
        int l=0,h=nums.size()-1;
        while(h>=l){
            int mid=(h+l)/2;
            if(nums[mid]==target)return mid;
            else if (nums[mid]>target)h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};