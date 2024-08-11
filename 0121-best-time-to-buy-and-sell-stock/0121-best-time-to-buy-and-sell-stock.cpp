class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxprofit=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            mini=min(mini,prices[i]);
            
            maxprofit=max(abs(mini-prices[i]),maxprofit);
        }
        return maxprofit;
    }
};