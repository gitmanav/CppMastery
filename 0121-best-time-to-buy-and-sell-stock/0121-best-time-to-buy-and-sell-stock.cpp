class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> right(n);
        right[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],prices[i]);
        }
        int maxprofit=0;
        for(int i=0;i<n;i++)
        {
            maxprofit=max(right[i]-prices[i],maxprofit);
        }
        return maxprofit;
    }
};