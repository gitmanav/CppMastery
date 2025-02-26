//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int first_occ(vector<int>& arr,int x)
  {
      int l=0;
      int r=arr.size()-1;
      int mid,first=-1;
      while(l<=r)
      {
          mid=l+(r-l)/2;
          if(arr[mid]==x)
          {
              first=mid;
              r=mid-1;
          }
          else if(arr[mid]<=x)
          {
              l=mid+1;
          }
          else
          {
              r=mid-1;
          }
      }
      return first;
  }
  int last_occ(vector<int>& arr,int x)
  {
      int l=0;
      int r=arr.size()-1;
      int mid,last=-1;
      while(l<=r)
      {
          mid=l+(r-l)/2;
          if(arr[mid]==x)
          {
              last=mid;
              l=mid+1;
          }
          else if(arr[mid]<=x)
          {
              l=mid+1;
          }
          else
          {
              r=mid-1;
          }
      }
      return last;
  }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int> ans={-1,-1};
        ans[0]=first_occ(arr,x);
        ans[1]=last_occ(arr,x);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends