// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
  void heapify(vector<int> &arr,int n,int i)
  {
      int l=2*i+1;
      int r=2*i+2;
      int largest=i;
      if(l<n && arr[l]>arr[i])
      {
          largest=l;
      }
      else
      {
          largest=i;
      }
      if(r<n && arr[r]>arr[largest])
      {
          largest=r;
      }
      if(largest!=i)
      {
          swap(arr[largest],arr[i]);
          heapify(arr,n,largest);
      }
  }
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=n/2-1;i>=0;i--)
        {
            heapify(arr,n,i);
        }
        for(int i=n-1;i>0;i--)
        {
            swap(arr[i],arr[0]);
            heapify(arr,i,0);
        }
    }
    
};