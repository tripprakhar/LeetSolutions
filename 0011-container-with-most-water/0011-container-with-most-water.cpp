class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),ans=0;
        vector<int>lh(n,0);
        lh[0]=height[0];
        vector<int>rh(n,height[n-1]);
        for(int i=1;i<n;i++){
            lh[i]=max(lh[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            rh[i]=max(rh[i+1],height[i]);
        }
        int i=0,j=n-1;
        int li=0,ri=n-1;
        while(j>i){
            ans=max(ans, (ri-li)*(min(lh[i],rh[j])));
            if(lh[i]>=rh[j]){
                j--;ri=j;
            }else{
                i++;li=i;
            }
        }
        return ans;
    }
};