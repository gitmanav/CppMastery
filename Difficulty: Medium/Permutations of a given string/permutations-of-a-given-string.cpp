//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string S,unordered_set<string>&str, int start,int end)
	    {
	        if(start==end)
	        {
	            str.insert(S);
	        }
	        else
	        {
	            for(int i=start;i<=end;i++)
	            {
	                swap(S[start],S[i]);
	                
	                solve(S,str,start+1,end);
	                
	                swap(S[start],S[i]);
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    unordered_set<string>str;
		    vector<string> ans;
		    int start=0;
		    int end=S.length()-1;
		    solve(S,str,start,end);
		    for (auto& it : str) {
            ans.push_back(it);
            }
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends