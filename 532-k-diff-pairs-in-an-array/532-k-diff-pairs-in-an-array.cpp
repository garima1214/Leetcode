class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        for(auto x :nums)
        {
            a[x]++;
        }
        int ans=0;
        for(auto i: a)
        {
            if(k==0)
               {
                if(i.second>1)
                    ans++;
                   
               }
            else
                if((a.find(i.first+k)!=a.end()))
                   {
                       ans++;
                   }
        }
        return ans;
    }
};