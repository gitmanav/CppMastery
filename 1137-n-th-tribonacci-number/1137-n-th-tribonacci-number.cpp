class Solution {
public:
    int rec(vector<int>&dp,int n)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1 || n==2)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=rec(dp,n-1)+rec(dp,n-2)+rec(dp,n-3);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return rec(dp,n);
    }
};