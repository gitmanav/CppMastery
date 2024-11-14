//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int sum) {
        // code here
        vector<int> res;
        int curr=0;
        int s=0;
        int e=0;
        for(int i=0;i<arr.size();i++)
        {
            curr+=arr[i];
             if (curr >= sum) {
            e = i;

            // While current sum is more
            // remove, starting elements of
            // current window
            while (curr > sum && s < e) {
                curr -= arr[s];
                ++s;
            }

            // If we found a subraay
            if (curr == sum) {
                res.push_back(s + 1);
                res.push_back(e + 1);
                return res;
            }
        }
            
        }
        res.push_back(-1);
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends