class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix[0].size()-1;
        int n=matrix.size();
        while(i<n && j>=0)
        {
            if(matrix[i][j]<target)
            {
                i++;
            }
            else if(matrix[i][j]>target)
            {
                j--;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    
};