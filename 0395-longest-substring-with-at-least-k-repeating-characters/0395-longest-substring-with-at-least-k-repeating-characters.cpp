class Solution {
public:
    int longestSubstring(string s, int k) {
       //return dnc(s,k,0,s.size());
       map<int, int>m;
       for(auto i:s)m[i-'a']++;
       int uni = m.size();
       int ans=0;
       for(int i=1;i<=uni;i++){
            m.clear();
            int st=0,e=0,kcount=0;
            int cur_uni = 0;
            while(e<s.size()){
                if(cur_uni <= i){
                    if(m.find(s[e]-'a')==m.end())cur_uni++;
                    m[s[e]-'a']++;
                    if(m[s[e]-'a']==k)kcount++;
                    e++;
                }else{
                    if(m[s[st]-'a'] == k)kcount--;
                        m[s[st]-'a']--;
                        if(m[s[st]-'a'] ==  0){
                            m.erase(s[st]-'a');
                            cur_uni--;
                        }
                        st++;
                    
                }
                if(i==cur_uni && cur_uni ==kcount)ans=max(ans,e-st);
            }
       }
       return ans;
    }

    // int dnc(string st, int k , int s, int e){
    //     if(e-s < k )return 0;
    //     vector<int>m(26,0);
    //     for(int i=s;i<e;i++)m[st[i]-'a']++;
    //     for(int i=s;i<e;i++){
    //         if(m[st[i] - 'a']<k){
    //             int l = dnc(st,k,s,i);
    //             int r = dnc(st,k,i+1,e);
    //             return max(l,r);
    //         }
    //     }
    //     return e-s;
    // }
};