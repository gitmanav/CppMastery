//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b) {
        
        // Your code here
        if(a.length()!=b.length())
        {
            return false;
        }
        map<char,int> mp1;
        map<char,int> mp2;
        
        for(int i=0;i<a.length();i++)
        {
            mp1[a[i]]++;
            mp2[b[i]]++;
        }
        for(auto x:mp1)
        {
            if(mp2[x.first]!=x.second)
            {
                return false;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// } Driver Code Ends