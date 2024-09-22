//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int>mp;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]]++;
        }
        int maxi=INT_MIN;
        char ch;
        for(auto x:mp)
        {
            if(x.second>maxi)
            {
                maxi=x.second;
                ch=x.first;
            }
        }
        return ch;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends