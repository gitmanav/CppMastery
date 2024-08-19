//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    int *first=new int[n];
	    int *second=new int[n];
	    int j=0,h=0,pos=0,neg=0;
	    for(int i=0;i<n;i++)
	    {
	       if(arr[i]>=0){
	            first[j++]=arr[i];
	            pos++;
	       }
	       else{
	            second[h++]=arr[i];
	            neg++;
	       }
	    }
	    j=0,h=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0 && pos!=0)
	        {
	            arr[i]=first[j++];
	            pos--;
	        }
	        else if(i%2!=0 && neg!=0)
	        {
	            arr[i]=second[h++];
	            neg--;
	        }
	        else if(neg!=0)
	        {
	            arr[i]=second[h++];
	            neg--;
	        }
	        else
	        {
	            arr[i]=first[j++];
	            pos--;
	        }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends