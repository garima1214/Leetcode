class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     unordered_map <int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        set<int> ans;
        for(auto x = mp.begin();x!=mp.end();x++)
        {
            ans.insert(x->second);
        }
        
        if(mp.size()==ans.size())
            return true;
        
        else
            return false;
        }
    
};