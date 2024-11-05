class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //Approach 1
        unordered_set<int> set_1(begin(nums1),end(nums1));
        unordered_set<int> set_2;     
        
        for(auto it:nums2)
        {
            if(set_1.find(it) != set_1.end())
            {
                set_2.insert(it);
            }
        }
        vector<int> res(begin(set_2),end(set_2));
        return res;
    }
};