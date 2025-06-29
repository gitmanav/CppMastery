class Solution {
  public:
    int rec_knapsack(int W, vector<int> &val, vector<int> &wt,int n,vector<vector<int>> &dp)
    {
        if(n==0 || W==0)
        {
            return 0;
        }
        if(dp[n][W]!=-1)
        {
            return dp[n][W];
        }
        int pick=0;
        if(wt[n-1]<=W)
        {
            pick=val[n-1]+rec_knapsack(W-wt[n-1],val,wt,n-1,dp);
        }
        int notpick=rec_knapsack(W,val,wt,n-1,dp);
        return dp[n][W]=max(pick,notpick);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
        return rec_knapsack(W,val,wt,n,dp);
    }
};