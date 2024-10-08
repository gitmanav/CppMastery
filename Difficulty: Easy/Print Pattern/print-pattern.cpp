//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(int N,vector<int>& ans)
    {
        if(N<=0)
        {
            return;
        }
        ans.push_back(N);
        return solve(N-5,ans);
    }
    void solve1(int N,vector<int>& ans)
    {
        if(N<=0)
        {
            ans.push_back(N);
            return;
        }
        solve1(N-5,ans);
        ans.push_back(N);
    }
    vector<int> pattern(int N){
        // code here
        vector<int> ans;
        solve(N,ans);
        solve1(N,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends