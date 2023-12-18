class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>arr(26,0);
        int chh =0, l=0,h=0,n=s.size(),ans=0;
        char ch=s[0];
        while(l<n && h<n){
            arr[s[h]-'A']++;
            chh = max(chh,arr[s[h]-'A']);
            if((h-l+1)-chh>k){
                arr[s[l]-'A']--;l++;
                ans=max(ans,h-l+1);
            }else{
                ans=max(ans,h-l+1);
            }
            h++;
//             if(h-l-chh < k){
//                 arr[s[h]-'A']++;
//                 if(arr[s[h]-'A'] > chh){
//                     chh = arr[s[h]-'A'];
//                     ch = s[h];
//                 }
//                 ans = max(ans,h-l+1);
//                 h++;
//                 cout<<"01"<<" ";
//             }else if(h-l-chh == k && s[h]==ch){
//                 arr[s[h]-'A']++;
//                 ans = max(ans,h-l+1);
//                 h++;chh++;
//                 cout<<"02"<<" ";
//             }else{
//                 arr[s[l]-'A']--;
//                 if(s[l]==ch){
//                     chh--;
//                     if(chh==0){
//                         ch=s[l+1];
//                     }
//                     for(int j=0;j<26;j++){
//                         if(arr[j]>chh){chh=arr[j];ch='A'+j;cout<<" "<<ch<<" ";}
                        
//                     }
//                 }
//                 l++;
//                 cout<<"03"<<" ";
//             }
        }
        cout<<endl;
        return ans;
    }
};