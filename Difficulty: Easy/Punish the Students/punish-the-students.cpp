//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int bubbleSort(int arr[], int n)
    {
    int i, j;
    bool swapped;
    int swaps=0;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                swaps++;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
    return swaps;
}
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
        // your code here
        int swaps=bubbleSort(roll,n);
        int mark=0;
        for(int i=0;i<n;i++)
        {
            mark+=marks[i];
        }
        mark-=swaps;
        float avg1=mark/n;
        if(avg1>avg)
        {
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}

// } Driver Code Ends