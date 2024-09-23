//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
         int n = arr.size();
        vector<int> ans(2);

        // Rearrange the elements to place each element at its correct index
        for (int i = 0; i < n; i++) {
            while (arr[i] != arr[arr[i] - 1]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }

        // After rearranging, find the missing and repeating elements
        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                ans[0] = arr[i];  // Repeating element
                ans[1] = i + 1;   // Missing element
            }
        }

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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends