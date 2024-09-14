//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> first(n);
        vector<int> second(n);
        int j=0,k=0;
        int pos=0,neg=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                first[j++]=arr[i];
                pos++;
            }
            else
            {
                second[k++]=arr[i];
                neg++;
            }
        }
        j=0;
        k=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && pos!=0)
            {
                arr[i]=first[j++];
                pos--;
            }
            else if(i%2!=0 && neg!=0)
            {
                arr[i]=second[k++];
                neg--;
            }
            else if(neg!=0)
            {
                arr[i]=second[k++];
                neg--;
            }
            else
            {
                arr[i]=first[j++];
                pos--;
            }
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends