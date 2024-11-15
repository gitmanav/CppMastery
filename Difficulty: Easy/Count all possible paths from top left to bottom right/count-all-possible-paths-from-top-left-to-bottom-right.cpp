//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod=1000000007;
  long long int solve(vector<vector<int>> &dp,int m,int n)
  {
      if(m==1 || n==1)
      {
          return 1;
      }
      if(dp[m][n]!=-1)
      {
          return dp[m][n];
      }
      return dp[m][n]=(solve(dp,m,n-1)%mod+solve(dp,m-1,n)%mod)%mod;
  }
    long long int numberOfPaths(int m, int n){
        // code here
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(dp,m,n);
        // return numberOfPaths(m,n-1)+numberOfPaths(m-1,n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends