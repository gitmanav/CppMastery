//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {

        // your code here
        if(n<=1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }
        return (countWays(n-1)+countWays(n-2)+countWays(n-3))%1000000007;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    // taking testcases
    int t;
    cin >> t;

    while (t--) {
        // taking number of steps in stair
        int n;
        cin >> n;
        Solution ob;
        // calling function countWays()
        cout << ob.countWays(n) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends