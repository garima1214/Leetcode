class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        if(nums.size()==1)
            return 1;
        sort(nums.begin(),nums.end());
        int count =1;
        int ans =0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
                count++;
            
            if(nums[i]-nums[i-1]>1 || i==nums.size()-1 )
            {
                ans = max(ans,count);
                count=1;
            }
        }
        return ans ;
    }
};