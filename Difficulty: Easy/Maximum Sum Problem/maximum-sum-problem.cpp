//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            vector<int> dp(n+1,-1);
            if(n<12)
            {
                return n;
            }
            int sum=maxSum(n/2)+maxSum(n/3)+maxSum(n/4);
            return sum;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends