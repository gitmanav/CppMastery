//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        // int n=matrix.size();
        // int m=matrix[0].size();
        // int start_row=0;
        // int last_row=n-1;
        // int start_col=0;
        // int end_col=m-1;
        // int first_col=0;
        // vector<int> ans;
        // // cout<<n<<endl;
        // while(n)
        // {
        // for(int i=start_row;i<=end_col;i++)
        // {
        //     ans.push_back(matrix[start_row][i]);
        // }
        // start_row++;
        // for(int i=start_row;i<=end_col;i++)
        // {
        //     ans.push_back(matrix[i][end_col]);
        // }
        // end_col--;
        // for(int i=end_col;i>=first_col;i--)
        // {
        //     ans.push_back(matrix[last_row][i]);
        // }
        // last_row--;
        // for(int i=last_row;i>=start_row;i--)
        // {
        //     ans.push_back(matrix[i][first_col]);
        // }
        // first_col++;
        // --n;
        // }
        // return ans;
        //k==0 for right traversal
        //k==1 for down traversal
        //k==2 for left traversal
        //k==3 for up traversal
         int k = 0 ;
       int i = 0 ;            //    i ->  represent row 
       int j = 0 ;           //     j -> represent column
       int n = mat.size();
       int m = mat[0].size();
       int size = n*m ;
       vector< vector< int >> vis( n , vector< int >( m , -1 ) );
       vector< int >ans ;
       while(  k  < 4  )
       {
           // k = 0 for right traversal 
           // k = 1 for down traversal 
           // k = 2 for left traversal
           // k = 3 for up traversal 
           
           
          if( k == 0 && vis[i][j] == -1  )
              {   
                while( j < m && vis[i][j] == -1)
                {
                    ans.push_back( mat[i][j] );
                    vis[i][j] = 1 ;
                   j++ ;
                }
               j-- ;   // if j become outof bound then come into range 
                          // or if element is visited at this j so come back 
               i++ ;
               if( i >= n || i < 0 )   // check out of bound 
               {
                   break ;
               }
               k++ ;
               k = k % 5 ;
              }
           
            if( k == 1 && vis[i][j] == -1 )
            {
               while( i < n && vis[i][j] == -1 )
                {
                   ans.push_back( mat[i][j] );
                   vis[i][j] = 1 ;
                   i++ ;
                }
                
               i-- ;     // if i become outof bound then come into range 
                          // or if element is visited at this i so come back 
               j-- ;
               
              if( j >= m || j < 0 )    // check out of bound 
              {
                   break ;
               }
               
               k++ ;
               k = k % 5 ;
               
            }
           
            if( k == 2 && vis[i][j] == -1 )
            {
               while( j >=0 && vis[i][j] == -1 )
               {
                   ans.push_back( mat[i][j] );
                   vis[i][j] = 1 ;
                   j-- ;
               }
               
               j++ ;      // if j become outof bound then come into range 
                          // or if element is visited at this j so come back 
               i-- ;
               
               if( i >= n || i < 0 )       // check out of bound 
               {
                   break ;
               }
               k++ ;
               k = k % 5 ;
               
            }
           
            if( k == 3 && vis[i][j] == -1 )
            {
                while( i >= 0 && vis[i][j] == -1 )
                {
                
                  ans.push_back( mat[i][j] );
                  vis[i][j] = 1 ;
                   i-- ;
                }
               
                i++ ;     // if j become outof bound then come into range 
                          // or if element is visited at this j so come back 
                j++ ;
               
                if( j >= m || j < 0 )       // check out of bound 
                {
                   break ;
                }
               
                k++ ;
                k = k % 4 ;
     
            }
           
            if( ans.size() == size    )    // all elements are visited 
            {
                 break ;
            }

       }
       
       return ans ;
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends