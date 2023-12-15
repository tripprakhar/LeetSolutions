class Solution {
public:
    int partitionString(string s) {
        int n = s.size(),ans=0;
        map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            if(m[s[i]]>1){m.clear();m[s[i]]++;ans++;}
        }
        return ans+1;
    }
};