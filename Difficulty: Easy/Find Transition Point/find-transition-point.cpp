//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int zero=0;
        int one=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if(zero>0 && one==0)
        {
            return -1;
        }
        else if(one>0 && zero==0)
        {
            return 0;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                {
                    return i;
                }
            }
        }
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
        cout << ob.transitionPoint(arr) << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends