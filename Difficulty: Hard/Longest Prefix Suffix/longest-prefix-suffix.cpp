//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int n = str.length();
        
        // Create an LPS array of size n initialized to 0.
        vector<int> lps(n, 0);
        
        int i = 1;    // Pointer to traverse the string
        int len = 0;  // Length of the longest prefix that is also a suffix
        
        // Start building the LPS array
        while (i < n) {
            // Case 1: If characters at i and len match
            if (str[i] == str[len]) {
                // Increment len and assign it to lps[i]
                lps[i] = ++len;
                ++i;
            }
            // Case 2: If they don't match
            else {
                // If len is greater than 0, backtrack to the previous LPS value
                if (len > 0) {
                    len = lps[len - 1];
                } 
                // If len is 0, just move forward and set lps[i] to 0
                else {
                    lps[i] = 0;
                    ++i;
                }
            }
        }
        
        // The value at lps[n-1] contains the length of the longest prefix
        // that is also a suffix
        return lps[n-1];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends