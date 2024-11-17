//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long a, long long b) {
        // code here
        long long x=a;
        long long y=b;
        long long gcd=0;
        while(a>0 && b>0)
        {
            if(a>b)
            {
                a=a%b;
            }
            else
            {
                b=b%a;
            }
            if(a==0)
            {
                gcd=b;
            }
            else
            {
                gcd=a;
            }
        }
        long long lcm=(x*y)/gcd;
        return {lcm,gcd};
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;

        cin >> A >> B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends