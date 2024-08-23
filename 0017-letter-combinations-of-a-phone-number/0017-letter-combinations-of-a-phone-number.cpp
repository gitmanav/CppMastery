class Solution {
    private:
    void solve(string digits,int index,vector<string>& ans,string output,string mapping[])
    {
        //base case
        if(index>=digits.length())
        {
            if(output.length()>0)
            {
                ans.push_back(output);
                return;
            }
        }
        int number=digits[index]-'0'; //Here we subtract the zero because it will gives the                                             integer value.
        string value=mapping[number];
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,index+1,ans,output,mapping);
            output.pop_back(); //Backtrack because we does not need single characters.
        }
        
   }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
        {
            return ans;
        }
        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,ans,output,mapping);
        return ans;
    }
};