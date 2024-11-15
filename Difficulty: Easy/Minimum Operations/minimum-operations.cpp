//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int count=0;
        int op=n;
        
        while(op>0)
        {
            if(op%2==0)
            {
                op=op/2;
            }
            else
            {
                op=op-1;
            }
            count++;
        }
        return count;
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
	        cout<<ob.minOperation(n)<<endl;
	    
cout << "~" << "\n";
}
}
// } Driver Code Ends