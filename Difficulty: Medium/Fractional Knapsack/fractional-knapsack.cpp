class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<pair<double,int>> ratio;
        for(int i=0;i<n;i++)
        {
            double r=(double)val[i]/wt[i];
            ratio.push_back({r,i});
            // pw.push_back(val[i]/wt[i]);
        }
        sort(ratio.begin(),ratio.end(),[](pair<double,int>&a,pair<double,int>&b)
        {
            return a.first>b.first;
        });
        double ans=0.0;
        for(int i=0;i<n && capacity>0 ; i++)
        {
            int idx=ratio[i].second;
            if(wt[idx]<=capacity)
            {
                ans+=val[idx];
                capacity -= wt[idx];
            }
            else
            {
                ans+=val[idx]*(double)capacity/wt[idx];
                capacity=0;
            }
        }
        return ans;
    }
};
