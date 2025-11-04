class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int num=n;
        int temp=0;
        while(num!=0)
        {
            int digit=num%10;
            temp*=10;
            temp+=digit;
            num/=10;
        }
        if(temp==n)
        {
            return true;
        }
        return false;
    }
};