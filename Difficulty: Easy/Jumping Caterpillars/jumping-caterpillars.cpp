//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int uneatenLeaves(vector<int>& arr, int n) {
        vector<int> ans(n+1,0);
        for(int i=0;i<arr.size();i++)
        {
            int val=arr[i];
            while(val<=n)
            {
                if(ans[val]!=1)
                    ans[val]=1;
                val+=arr[i];
            }
        }
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(ans[i] == 0)
            {
                count++;
            }
        }        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.uneatenLeaves(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends