class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int l=0,h=n-1;
        while(h>=l){
            int mid=(h+l)/2;
            if(nums[mid]==target)return mid;
            else if(mid>0 && nums[mid-1] < target && nums[mid]>target)return mid;
            else if(mid<n-1 && nums[mid+1] > target && nums[mid]<target)return mid+1;
            else if(nums[mid]>target)h=mid-1;
            else if(nums[mid]<target)l=mid+1;
        }
        return h+1;
    }
};