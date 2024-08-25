//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isSafe(int x,int y,vector<vector<int>> &mat,vector<vector<int>> &visited)
    {
        if((x>=0 && x<mat.size()) && (y>=0 && y<mat.size()) && visited[x][y]==0 && mat[x][y]==1)
        {
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>> &mat,int n,vector<string> &ans,string path,int srcx,int srcy,vector<vector<int>> &visited)
    {
        //Base case
        if(srcx==n-1 && srcy==n-1)
        {
            ans.push_back(path);
            return;
        }
        
        visited[srcx][srcy]=1;
        //Down
        int new_x=srcx+1;
        int new_y=srcy;
        if(isSafe(new_x,new_y,mat,visited))
        {
            path.push_back('D');
            solve(mat,n,ans,path,new_x,new_y,visited);
            path.pop_back();
        }
        //Up
        new_x=srcx-1;
        new_y=srcy;
        if(isSafe(new_x,new_y,mat,visited))
        {
            path.push_back('U');
            solve(mat,n,ans,path,new_x,new_y,visited);
            path.pop_back();
        }
        //Left
        new_x=srcx;
        new_y=srcy-1;
        if(isSafe(new_x,new_y,mat,visited))
        {
            path.push_back('L');
            solve(mat,n,ans,path,new_x,new_y,visited);
            path.pop_back();
        }
        //Right
        new_x=srcx;
        new_y=srcy+1;
        if(isSafe(new_x,new_y,mat,visited))
        {
            path.push_back('R');
            solve(mat,n,ans,path,new_x,new_y,visited);
            path.pop_back();
        }
        visited[srcx][srcy]=0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> ans;
        string path="";
        int srcx=0;
        int n=mat.size();
        int srcy=0;
        vector<vector<int>>visited=mat;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                visited[i][j]=0;
            }
        }
        if(mat[0][0]==0)
        {
            return ans;
        }
        
        solve(mat,n,ans,path,srcx,srcy,visited);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends