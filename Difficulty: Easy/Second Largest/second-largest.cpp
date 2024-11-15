//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest=arr[0];
        int sec_largest=-1;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(largest<arr[i])
            {
                sec_largest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>sec_largest)
            {
                sec_largest=arr[i];
            }
        }
        return sec_largest;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends