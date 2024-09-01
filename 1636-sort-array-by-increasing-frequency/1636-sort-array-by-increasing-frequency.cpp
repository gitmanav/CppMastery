class Solution {
public:
    static bool comp(pair<int,int> a,pair<int,int>b)
    {
        if(a.second==b.second)
        {
            return a.first>b.first;
        }
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        vector<int> ans;
        vector<pair<int,int>>p;
        
        for(auto it:freq)
        {
            p.push_back({it.first,it.second});
        }
        sort(p.begin(),p.end(),comp);
        for(auto it:p)
        {
            int count=it.second;
            while(count--)
            {
                ans.push_back(it.first);
            }
        }
        // reverse(ans.begin(),ans.end());
        return ans;
    }
};