//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  bool knows(int A,int B,vector<vector<int> >& mat,int n)
  {
      for(int i=0;i<n;i++)
      {
          if(mat[A][B]==1)
          {
              return true;
          }
      }
      return false;
  }
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        stack<int> st;
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        while(st.size()>1)
        {
            int A=st.top();
            st.pop();
            int B=st.top();
            st.pop();
            if(knows(A,B,mat,n))
            {
                st.push(B);
            }
            else
            {
                st.push(A);
            }
        }
        int candidate=st.top();
        bool rowCount=false;
        int zeroCount=0;
        for(int i=0;i<n;i++)
        {
            if(mat[candidate][i]==0)
            {
                zeroCount++;
            }
        }
        if(zeroCount==n)
        {
            rowCount=true;
        }
        bool colCount=false;
        int oneCount=0;
        for(int i=0;i<n;i++)
        {
            if(mat[i][candidate]==1)
            {
                oneCount++;
            }
        }
        if(oneCount==n-1)
        {
            colCount=true;
        }
        if(rowCount && colCount)
        {
            return candidate;
        }
        else
        {
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends