class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<vector<int>,int>m;
        for(int i=0;i<strs.size();i++){
            vector<int>st(26,0);
            for(int j=0;j<strs[i].size();j++){
                st[strs[i][j]-'a']++;
            }
            if(m.find(st)!=m.end()){
                ans[m[st]].push_back(strs[i]);
            }else{
                ans.push_back({strs[i]});
                m[st]=ans.size()-1;
            }
        }
        return ans;
        }
};