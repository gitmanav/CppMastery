//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  void reversesub(int start,int end, string &str)
  {
      while(start<end)
      {
          swap(str[start++],str[end--]);
        //   start++;
        //   end--;
      }
  }
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        int n=str.length();
        int start=0;
        
        for(int i=0;i<=n;i++)
        {
            if(i==n || str[i]=='.')
            {
                reversesub(start,i-1,str);
                start=i+1;
            }
        }
        reversesub(0,n-1,str);
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends