class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        set<int>st(nums.begin(),nums.end());
        set<int>::iterator itr;
        int l,ans=0,anst=0;
        for(itr=st.begin();itr!=st.end();itr++){
            if(itr==st.begin())l=*itr;
            else if(*itr == l+1){
                l=*itr;anst++;
            }else{
                l = *itr;
                anst=0;
            }
            ans=max(ans,anst);
        }
        return ans+1;
    }
};