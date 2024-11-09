class Solution {
public:
    int checkValue(char ch)
    {
        if(ch=='M')
        {
            return 1000;
        }
        else if(ch=='D')
        {
            return 500;
        }
        else if(ch=='C')
        {
            return 100;
        }
        else if(ch=='L')
        {
            return 50;
        }
        else if(ch=='X')
        {
            return 10;
        }
        else if(ch=='V')
        {
            return 5;
        }
        else
        {
            return 1;
        }
    }
    
        int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(checkValue(s[i]) < checkValue(s[i+1]))
            {
                ans=ans+(checkValue(s[i+1])-checkValue(s[i]));
                i++;
            }
            else
            {
                ans=ans+checkValue(s[i]);                 
            }
            
        }
        return ans;
        
    }
};