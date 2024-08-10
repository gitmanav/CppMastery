//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    char toLower(char &ch)
    {
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        {
            return ch;
        }
        else
        {
            char temp=ch+32;
            return temp;
        }
    }
    int sameChar(string A, string B)
    {
        // code here
        int j=0;
        int count=0;
        for(int i=0;i<A.length();i++)
        {
            if(toLower(A[i]) == toLower(B[i]))
            {
                count++;
                j++;
            }
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
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends