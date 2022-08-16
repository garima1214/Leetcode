class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> p;
        for(int i=0;i<nums.size();i++)
        {
            int count =0;
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j and nums[j]<nums[i])
                    count++;
            }
            
            p.push_back(count);
        }
        return p;
    }
};