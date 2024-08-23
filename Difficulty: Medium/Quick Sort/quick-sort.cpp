//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high)
        {
            return;
        }
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int cnt=0;
       int pivot=arr[low];
       
       //count krenge kitne elements chote h pivot element se 
       for(int i=low+1;i<=high;i++)
       {
           if(arr[i]<=pivot)
           {
               cnt++;
           }
       }
       int pivotIndex=low+cnt;
       swap(arr[pivotIndex],arr[low]);
       //left and right vala part sambhal lete h 
       int i=low;
       int j=high;
       while(i<pivotIndex && j>pivotIndex)
       {
           while(arr[i]<=pivot)
           {
               i++;
           }
           while(arr[j]>pivot)
           {
               j--;
           }
           if(i<pivotIndex && j>pivotIndex)
           {
               swap(arr[i++],arr[j--]);
           }
       }
       return pivotIndex;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends