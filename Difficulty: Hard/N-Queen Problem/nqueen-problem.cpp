//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool isSafe(int r,int c,vector<vector<int>> board,int n)
    {
        int row = r;
        int col = c;
        
        // For LeftUpper Most
        
        while(row>=0 && col>=0)
        {
            if(board[row][col] != 0)
            {
                return false;
            }
            
            row--;
            col--;
        }
        
        
        row = r;
        col = c;
        
        // left
        while(col>=0)
        {
            if(board[row][col] != 0)
            {
                return false;
            }
            col--;
        }
        
        row = r;
        col = c;
        
        
        // down left
        while(col >=0 && row<n)
        {
            if(board[row][col] !=0)
            {
                return false;
                
            }
            row++;
            col--;
        }
            
        return true;  
        
    }
    
    void addSolution(vector<vector<int>> board, vector<vector<int>> &solution,int n)
    {
        vector<int> temp;
       for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
               if(board[j][i])
                    temp.push_back(j+1);
            }
 
        }
        
        solution.push_back(temp);
    }
    void solve(int col,vector<vector<int>> &board, vector<vector<int>> &solution,int n)
    {
        if(col == n)
        {
            addSolution(board,solution,n);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col] = row+1;
                solve(col+1,board,solution,n);
                board[row][col] =0; //backtracking
            }
        }
        
    }

    vector<vector<int>> nQueen(int n) {
        
        
        vector<vector<int>> board(n,vector<int> (n,0));
        vector<vector<int>> solution;
        solve(0,board,solution,n);
        
        return solution;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends