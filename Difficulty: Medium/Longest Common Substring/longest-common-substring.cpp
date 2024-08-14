//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int finalans = INT_MIN;
    int solve(string &str1, string &str2 , int i , int j , 
    vector<vector<int>> &dp){
        
        if(i>= str1.size() || j>=str2.size()){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int ans = 0;
        if(str1[i] == str2[j]){
            
            ans = 1 + solve(str1,str2,i+1,j+1,dp);
            finalans = max(ans,finalans);
            
        }
        
        solve(str1,str2,i,j+1,dp);
        solve(str1,str2,i+1,j,dp);
           
       
        
        return dp[i][j] = ans;
        
    }
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        int i= 0;
        int j = 0;
        
        vector<vector<int>> dp(str1.size()+1 , vector<int> (str2.size()+1 , -1));
        
         solve(str1,str2,i,j,dp);
         return finalans == INT_MIN ? 0 : finalans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends