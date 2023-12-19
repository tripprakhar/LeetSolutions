class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        int l=height[0],r=height[n-1];
        int ans=0;
        for(int i=0;i<n;i++){
            l=max(l,height[i]);
            left[i]=l;
            r=max(r,height[n-1-i]);
            right[n-1-i]=r;
        }
        for(int i=0;i<n;i++){
            ans+=(min(left[i],right[i]) - height[i]);
        }
        return ans;
    }
};