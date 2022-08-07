class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h= nums.size()-1;
        int ans=0;
        while(l<=h)
        {
           int mid=(l+h)/2;
            if(nums[mid]== target)
                return mid;
            
            
             
            else
                if(target<nums[mid])
                {
                    h=mid-1;
            
                }
            else 
            { l=mid+1;
               
            }
        }
    
     return l;
    }
};