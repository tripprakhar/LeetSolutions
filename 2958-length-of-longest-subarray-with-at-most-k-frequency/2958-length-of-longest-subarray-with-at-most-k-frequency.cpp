class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        //return dnc(nums, k, 0, nums.size());
        map<int,int>m;
        int s=0,e=0,n=nums.size(),ans=0;
        while(s<=e && e<n){
            m[nums[e]]++;
            while(m[nums[e]]>k){
                m[nums[s]]--;
                s++;
            }
            ans=max(ans,e-s+1);
            e++;
        }
        return ans;
    }

    // int dnc(vector<int> nums, int k, int s, int e){
    //     map<int,int>m;
    //     for(int i=s;i<e;i++){
    //         m[nums[i]]++;
    //     }
    //     if(m.size()==1){
    //         if(k>=e-s)return e-s;
    //         if(k<e-s)return k;
    //     }
    //     int ans = 0;
    //     for(int i=s;i<e;i++){
    //         if(m[nums[i]]>k){
    //             int l = dnc(nums,k,s,i);
    //             int r = dnc(nums,k,i+1,e);
    //             ans = max(l,max(r,ans));
    //         }
    //     }
    //     return ans==0?e-s:ans;
    // }
};