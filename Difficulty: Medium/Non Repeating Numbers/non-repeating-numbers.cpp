//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> singleNumber(vector<int>& arr) {
        // Code here.
        int xxor=0;
        for(auto it:arr)
        {
            xxor=xxor^it;
        }
        int num=xxor & -xxor;
        int x=0;
        int y=0;
        for(auto it:arr)
        {
            if(it&num)
            {
                x=x^it;
            }
            else
            {
                y=y^it;
            }
        }
        arr.clear();
        if(x>y)
        {
            arr.push_back(y);
            arr.push_back(x);
            return arr;
        }
        else
        {
            arr.push_back(x);
            arr.push_back(y);
            return arr;
        }
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

        Solution ob;
        vector<int> ans = ob.singleNumber(arr);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends