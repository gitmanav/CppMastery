class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool check(string& s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    bool isPalindrome(string& s) {
        // code here
        return check(s,0,s.length()-1);
    }
};