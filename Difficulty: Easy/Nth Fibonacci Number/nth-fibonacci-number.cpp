//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int fibo(int n,vector<int> dp)
  {
      if(n<=1)
      {
          return n;
      }
      if(dp[n]!=-1)
      {
          return dp[n];
      }
      dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
      return dp[n];
  }
    int nthFibonacci(int n) {
        // code here
        vector<int> dp(n+1,-1);
        int ans=fibo(n,dp);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends