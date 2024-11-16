//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int mod=1000000007;
  int solve(vector<int> &dp,int n)
  {
      if(n<=2)
      {
          return 1;
      }
      if(dp[n]!=-1)
      {
          return dp[n];
      }
      return dp[n]=(solve(dp,n-2)%mod+solve(dp,n-3)%mod)%mod;
  }
    int padovanSequence(int n) {
        // code here.
        vector<int> dp(n+1,-1);
        return solve(dp,n);
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
        cout << ob.padovanSequence(n) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends