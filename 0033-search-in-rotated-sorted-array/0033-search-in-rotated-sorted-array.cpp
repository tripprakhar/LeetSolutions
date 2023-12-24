class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(),l=0,h=n-1;
        while(h>=l){
            int mid = (l+h)/2;
            if(nums[mid]==target)return mid;
            if(nums[h]==target)return h;
            if(nums[l]==target)return l;
            else if(nums[mid] > nums[h] && nums[mid] < target )l=mid+1;
            else if(nums[mid] > nums[h] && nums[h] < target )h=mid-1;
            else if(nums[mid] > nums[h] && nums[h] > target )l=mid+1;
            else if(nums[mid] < nums[l] && nums[l] < target )h=mid-1;
            else if(nums[mid] < nums[l] && nums[l] > target && target<nums[mid] )h=mid-1;
            else if(nums[mid] < nums[l] && nums[l] > target && target>nums[mid] )l=mid+1;
            else if(nums[mid]>target)h=mid-1;
            else l=mid+1;

        }
        return -1;
    }
};