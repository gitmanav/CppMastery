class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        
        vector<int> pre(n,0);
        pre[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            pre[i]=nums[i]+pre[i-1];
        }
        
        unordered_map<int,int> map;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(pre[i]==k)
            {
                count++;
            }
            int diff=pre[i]-k;
            
            if(map.find(diff) != map.end())
            {
                count+=map[diff];
            }
            map[pre[i]]++;
        }
        
        return count;
    }
};