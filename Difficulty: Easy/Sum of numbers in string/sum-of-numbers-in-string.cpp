class Solution {
  public:
    int findSum(string& s) {
        // code here
        int n=s.length();
        string str="";
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                str+=s[i];
            }
            else
            {
                if(!str.empty())
                {
                    sum+=stoi(str);
                    str="";
                }
            }
        }
        if(!str.empty())
        {
            sum+=stoi(str);
        }
        return sum;
    }
};