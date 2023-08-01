class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0, l=prices[0],h = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<h){ 
                ans+=max( h-l,0);
                l=prices[i];
                h=prices[i];
            }else if(i == prices.size() -1 ){
                h=prices[i];
                ans+=max( h-l,0);
            }
            else{
                h=max(prices[i],h);
            }
            cout<<l <<" "<<h<<"\n";
        }
        return ans;
    }
};