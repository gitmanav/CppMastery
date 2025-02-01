//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
        int candidate=-1;
        int votes=0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(votes==0)
            {
                candidate=arr[i];
                votes=1;
            }
            else
            {
                if(arr[i]==candidate)
                {
                    votes++;
                }
                else
                {
                    votes--;
                }
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==candidate)
            {
                count++;
            }
        }
        if(count>arr.size()/2)
        {
            return candidate;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends