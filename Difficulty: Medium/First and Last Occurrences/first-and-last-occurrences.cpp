//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int start=0;
        int end=n-1;
        vector<int> ans(2,-1);
        
        int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            if(arr[mid]==x)
            {
                ans[0]=mid;
                end=mid-1;
            }
            else if(arr[mid]<=x)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        int right=0;
        start=0;
        end=n-1;
        while(start<=end)
        {
            if(arr[mid]==x)
            {
                ans[1]=mid;
                right=mid;
                start=mid+1;
            }
            else if(arr[mid]<=x)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        // cout<<right;
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends