//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int inSequence(int a, int b, int c) {
        // code here
        //Agr common difference zero h toh number dekhenge equal h ya nahi
        
        if(c==0 && a==b)
        {
            return 1;
        }
        
        double n=(double) (b-a)/c+1;
        
        if(n!=int(n))
        {
            return 0;
        }
        
        if(n>0)
        {
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;

        Solution ob;
        int ans = ob.inSequence(A, B, C);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends