//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int solveTab(int capacity,vector<int> weight,vector<int>value,int index,int n)
    {
        //moving from right to left
        //if only one item to steal, then just compare the its weight with the knapsack. 
        vector<vector<int>> dp(n,vector<int>(capacity+1,0));
        
        
        for(int w=weight[0];w<=capacity;w++)
        {
            if(weight[0]<=capacity)
            {
                dp[0][w]=value[0];
            }
            else
            {
                dp[0][w]=0;
            }
        }
        for(int index=1;index<n;index++)
        {
            for(int w=0;w<=capacity;w++)
            {
                int include=0;
                if(weight[index]<=w)
                {
                    include=value[index]+dp[index-1][w-weight[index]];
                }
                int exclude=0+dp[index-1][w];
                
                dp[index][w]=max(exclude,include);
                
            }
        }
        return dp[n-1][capacity];
    }
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n=wt.size();
        return solveTab(W,wt,val,n-1,n);
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends