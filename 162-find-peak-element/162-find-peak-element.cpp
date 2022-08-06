class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans =INT_MIN;
        int high =INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>ans)
               
            {
                high = i;
                ans = nums[i];
            }
            }
        if(nums.size()==1)
            return 0;
        return high;
    }
};