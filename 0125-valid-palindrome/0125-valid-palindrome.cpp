class Solution {
    private:
    bool valid(char ch)
    {
        if((ch>='A' && ch<= 'Z') || (ch>='a' && ch<= 'z') || (ch>='0' && ch<= '9'))
        {
            return 1;
        }
        return 0;
    }
    char tolowercase(char ch)
{
        if((ch>='a' && ch<='z' ) || (ch>='0' && ch<='9') ) 
        {
            return ch;
        }
        else{
            char temp=ch+32;
            return temp;
        }
}
bool checkpalindrome(string a)
{
    int s=0;
    int e=a.length()-1;

    while(s<=e)
    {
        if(a[s]!=a[e])
        return 0;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
public:

bool isPalindrome(string s) {
    string temp="";
    //Faltu Character Remove kro

    for(int j=0;j<s.length();j++)
    {
        if(valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    //Sabko small m change kro

    for(int j=0;j<temp.length();j++)
    {
        temp[j] = tolowercase(temp[j]);
    }
    return checkpalindrome(temp);

}

    
};