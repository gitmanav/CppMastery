class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int start=1;
        while(start<=n)
        {
            if(start%3==0 && start%5==0)
            {
                ans.push_back("FizzBuzz");
            }
            else if(start%3==0)
            {
                ans.push_back("Fizz");
            }
            else if(start%5==0)
            {
                ans.push_back("Buzz");
            }
            else
            {
                string ch=to_string(start);
                ans.push_back(ch);
            }
            start++;
        }
        return ans;
    }
};