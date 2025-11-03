class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int> ans;
        stack<int> st;
        int n=arr.size();
        for(int i=n-1;i>=0;i--)
        {
            int curr=arr[i];
            if(st.empty())
            {
                ans.push_back(-1);
            }
            else if(!st.empty() && st.top()>curr)
            {
                ans.push_back(st.top());
            }
            else if(!st.empty() && st.top()<=curr)
            {
                while(!st.empty() && st.top()<=curr)
                {
                    st.pop();
                }
                if(!st.empty())
                {
                    ans.push_back(st.top());
                }
                else
                {
                    ans.push_back(-1);
                }
            }
            st.push(curr);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};