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
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
        //  int mid=l+(r-l)/2;
         int len1=m-l+1;
         int len2=r-m;
         
         int *first=new int[len1];
         int *second=new int[len2];
         
         int k=l;
         for(int i=0;i<len1;i++)
         {
             first[i]=arr[k++];
         }
         
         k=m+1;
         for(int i=0;i<len2;i++)
         {
             second[i]=arr[k++];
         }
         //merge 2 sorted array
         int ind1=0;
         int ind2=0;
         k=l;
         
         while(ind1<len1 && ind2<len2)
         {
             if(first[ind1]<second[ind2])
             {
                 arr[k++]=first[ind1++];
             }
             else
             {
                 arr[k++]=second[ind2++];
             }
         }
         while(ind1<len1)
         {
             arr[k++]=first[ind1++];
         }
         while(ind2<len2)
         {
             arr[k++]=second[ind2++];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
        {
            return;
        }
        int mid=l+(r-l)/2;
        
        //left part solve kro
        mergeSort(arr,l,mid);
        
        //right part solve kro
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends