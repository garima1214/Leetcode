class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> p;
        
        for(int i=0;i<nums.size();i++)
        {
            int n= nums[nums[i]];
            p.push_back(n);
        }
        return p;
    }
};