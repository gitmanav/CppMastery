class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        if(b.size()>a.size())
        {
            return false;
        }
        unordered_map<int,int> freq;
        
        for(int x:a)
        {
            freq[x]++;
        }
        for(int y: b)
        {
            if(freq[y]==0)
            {
                return false;
            }
            else
            {
                freq[y]--;
            }
        }
        return true;
    }
};