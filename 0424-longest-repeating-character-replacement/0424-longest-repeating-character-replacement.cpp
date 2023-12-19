class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>arr(26,0);
        int chh =0, l=0,h=0,n=s.size(),ans=0;
        char ch=s[0];
        while(l<n && h<n){
            arr[s[h]-'A']++;
            chh = max(chh,arr[s[h]-'A']);
            while((h-l+1)-chh>k){
                arr[s[l]-'A']--;l++;
            }
             ans=max(ans,h-l+1);
            h++;
        }
        return ans;
    }
};