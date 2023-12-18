class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,h=0,n=s.size(),ans=0;
        map<int,int>m;
        while(l<n && h<n){
            m[s[h]-'a']++;
            while(m[s[h]-'a']>1){
                m[s[l]-'a']--;
                l++;
            }
            ans=max(ans,h-l+1);
            h++;
        }
        return ans;
    }
};