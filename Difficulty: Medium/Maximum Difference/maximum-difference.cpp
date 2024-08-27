//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    vector<int> leftSmaller(vector<int>&arr){
      
      stack<int>st;
      vector<int>ans;
      for(int i=0;i<arr.size();i++){
          while(st.empty()==false && arr[st.top()]>=arr[i])
          st.pop();
          if(st.empty())
          ans.push_back(0);
          else
          ans.push_back(arr[st.top()]);
          st.push(i);
      }
      return ans;
  }
  vector<int> rightSmaller(vector<int>&arr){
      stack<int>st;
      vector<int>ans;
      for(int i=arr.size()-1;i>=0;i--){
          while(st.empty()==false && arr[st.top()]>=arr[i])
          st.pop();
          if(st.empty())
          ans.push_back(0);
          else
          ans.push_back(arr[st.top()]);
          st.push(i);
      }
      reverse(ans.begin(),ans.end());
      return ans;
  }
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        
        vector<int>left=leftSmaller(arr);
        vector<int>right=rightSmaller(arr);
        int ans=0;
        for(int i=0;i<left.size();i++){
        ans=max(ans,abs(left[i]-right[i]));
            // cout<<left[i]<<" "<<right[i]<<endl;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends