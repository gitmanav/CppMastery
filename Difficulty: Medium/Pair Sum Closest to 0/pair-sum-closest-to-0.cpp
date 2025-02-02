//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            int pos = INT_MAX;
            int neg = INT_MIN;
            
            sort(arr,arr+n);
            
            int i=0, j=(n-1);
            while(i<j){
                if(arr[i]+arr[j]<0){
                    neg=max(neg,(arr[i]+arr[j]));
                    i++;
                } else {
                    pos=min(pos,(arr[i]+arr[j]));
                    j--;
                }
            }
            
            
            if(pos==INT_MAX){
                return neg;
            } else if(neg==INT_MIN){
                return pos;
            } else if(neg!=INT_MIN && pos!=INT_MAX){
                if(abs(neg)<pos){
                    return neg;
                } else {
                    return pos;
                }
            }
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends