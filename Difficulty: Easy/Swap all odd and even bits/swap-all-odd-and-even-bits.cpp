//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	int t1=(n&0b01010101010101010101010101010101)<<1;
    	unsigned int t2=(n&0b10101010101010101010101010101010)>>1;
    	
    	n=t1|t2;
    	return n;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends