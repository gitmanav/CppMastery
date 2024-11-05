class Solution {
public:
    bool binarySearch(vector<int> &num,int x)
    {
        int start=0;
        int end= num.size()-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(num[mid]==x)
            {
                return 1;
            }
            else if(num[mid]<x)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return 0;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Approach 3
        // TC --> O(NLOGN) + O(N)
        // SC --> O(N) 
        sort(begin(nums1),end(nums1));
        
        unordered_set<int> st;
        
        for(auto it:nums2)
        {
            if(binarySearch(nums1,it))
            st.insert(it);
        }
        vector<int> res(begin(st),end(st));
        return res;
    }
    
};