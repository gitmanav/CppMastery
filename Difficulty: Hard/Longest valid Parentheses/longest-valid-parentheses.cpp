//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string& S) {
        // code here
        int n = S.length();
        int open = 0, close = 0, ans = 0;

        // Left to Right
        for(int i = 0; i < n; i++){
            if(S[i] == '(')
                open++;
            else
                close++;

            if(open == close)
                ans = max(ans, open * 2);
            else if(close > open)
                open = close = 0;
        }

        // Right to Left
        open = close = 0;
        for(int i = n - 1; i >= 0; i--){
            if(S[i] == '(')
                open++;
            else
                close++;

            if(open == close)
                ans = max(ans, open * 2);
            else if(open > close)
                open = close = 0;
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends