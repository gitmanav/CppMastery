class Solution {
public:
    void possible_pair(vector<int> &vec,vector<int> nums)
    {
        int start=0;
        int end=nums.size();
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j]))
                {
                    int xor1=nums[i]^nums[j];
                    vec.push_back(xor1);   
                }
            }
        }
    }
    int maximumStrongPairXor(vector<int>& nums) {
        vector<int> vec;
        possible_pair(vec,nums);
        int maxi=0;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]>maxi)
            {
                maxi=vec[i];
            }
        }
        return maxi;
    }
};