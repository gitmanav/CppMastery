class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxSum=INT_MIN;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxSum=max(maxSum,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxSum;
    }
};