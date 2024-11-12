//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int addition(int A, int B){
        // code here 
        while(B!=0)
        {
            int temp=(A&B)<<1;
            A=A^B;
            B=temp;
        }
        return A;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addition(A,B) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends