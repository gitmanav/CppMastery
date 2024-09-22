//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isGoodorBad(string S) {
        // code here
        int vow_count=0;
        int cons_count=0;
        
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
            {
                vow_count++;
                cons_count=0;
                if(vow_count>5)
                {
                    return 0;
                }
            }
            else if(S[i]=='?')
            {
                vow_count++;
                cons_count++;
                if(vow_count>5 || cons_count>3)
                {
                    return 0;
                }
            }
            else
            {
                vow_count=0;
                cons_count++;
                if(cons_count>3)
                {
                    return 0;
                }
            }
           
        }
         if(vow_count>5 || cons_count>3)
            {
                return 0;
            }
            else
            {
                return 1;
            }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends