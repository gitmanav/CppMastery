class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int start=0,x=-1,y=-1;
        int n=fruits.size();
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<n;i++){
            if(mp.find(fruits[i])==mp.end() && mp.size()>=2){
                start=mp[x]+1;
                mp.erase(mp.find(x));
                x=fruits[i];
            }
            else if(mp.find(fruits[i])==mp.end()){
                if(x==-1) x=fruits[i];
                else y=fruits[i];
            }
            mp[fruits[i]]=i;
            if(mp.size()==2){
                if(mp[x]>mp[y])
                    swap(x,y);
            }
            ans=max(ans,i-start+1);
        }
        return ans; 
    }
};