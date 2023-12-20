class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>st;
        int n = temp.size();
        vector<int>ans(n,0);
        st.push({temp[n-1],n-1});
        for(int i=n-2;i>=0;i--){
            int x=0;
            while(!st.empty() && temp[i]>=st.top().first){
                st.pop();
                x++;
            }
            if(!st.empty() && temp[i]<st.top().first)ans[i]=st.top().second - i ;
            st.push({temp[i],i});
        }
        return ans;
    }
};