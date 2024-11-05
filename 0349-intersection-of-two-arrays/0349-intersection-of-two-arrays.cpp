class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //Approach 2
        //SC --> O(N)+O(M)
        //TC --> O(N)   
        unordered_set<int> set_1(begin(nums1),end(nums1));
        vector<int> res;
        for(auto it:nums2)
        {
            if(set_1.find(it) != set_1.end())
            {
                res.push_back(it);
                set_1.erase(it);
            }
        }
        return res;
    }
};