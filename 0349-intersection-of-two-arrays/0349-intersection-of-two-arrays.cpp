class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Approach 4   
        // TC --> O(NLOGN) + O(N)
        // SC --> O(N) 
        sort(begin(nums1),end(nums1));
        sort(begin(nums2),end(nums2));
        
        int i=0;
        int j=0;
        vector<int> res;
        int m=nums1.size();
        int n=nums2.size();
        while(i<m && j<n)
        {
            if(nums1[i]==nums2[j])
            {
                res.push_back(nums1[i]);
                //Handle the duplicate elements
                while(i<m-1 && nums1[i]==nums1[i+1])
                {
                    i++;
                }
                while(j<n-1 && nums2[j]==nums2[j+1])
                {
                    j++;
                }
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return res;
    }
    
};