class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size(),n = s2.size();
        if(m>n)return false;
        vector<int>vm(26,0);vector<int>vn(26,0);
        for(int i=0;i<m;i++){
            vm[s1[i]-'a']++;
            vn[s2[i]-'a']++;
        }
        if(vm == vn)return true;
        for(int i=m;i<n;i++){
            vn[s2[i]-'a']++;
            vn[s2[i-m]-'a']--;
            if(vm == vn)return true;            
        }
        return false;
    }
};