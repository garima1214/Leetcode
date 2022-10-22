class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int flag=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second>n/2)
                flag= i->first;
        }
        return flag;
    }
};