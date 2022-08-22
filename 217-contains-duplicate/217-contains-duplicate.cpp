class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto i= mp.begin();i!=mp.end();i++)
        {
            if(i->second >=2)
                return true;
        }
        
        return false;
    }
};