class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int f=INT_MIN,s=INT_MIN;
        for(int val:arr)
        {
            if(val>f && val>s)
            {
                s=f;
                f=val;
            }
            else if(val<f && val>s)
            {
                s=val;
            }
        }
        return (s==INT_MIN ? -1: s);
    }
};