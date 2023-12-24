class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        int l=0,h=n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if((mid == 0 && nums[mid] < nums[n-1]) || (mid>0 && nums[mid]<nums[mid-1])) return nums[mid];
            else if((nums[mid] > nums[h]))l=mid+1;
            else if (nums[mid] < nums[l])h=mid-1;
            else h=mid-1;
            
            
        }
        return -1;
    }
};