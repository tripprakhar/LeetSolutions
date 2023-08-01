class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=prices[0],high=prices[0];
        int ans =0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<low){
                low = prices[i];
                high = prices[i];
            }
            else{
                high = max(high,prices[i]);
            }          
            ans = max(ans,high-low);
        }
        return ans;
    }
};