class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int num1=(int)target;
        for(int i=0;i<letters.size();i++)
        {
            int num2=(int)letters[i];
            if(num2>num1)
            {
                return letters[i];
            }
        }
        return letters[0];
    }
};