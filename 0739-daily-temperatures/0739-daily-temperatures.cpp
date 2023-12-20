class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        int n = temp.size();
        vector<int>ans(n,0);
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            int x=0;
            while(!st.empty() && temp[i]>=temp[st.top()]){
                st.pop();
                x++;
            }
            if(!st.empty() && temp[i]<temp[st.top()])ans[i]=st.top() - i ;
            st.push(i);
        }
        return ans;
    }
};