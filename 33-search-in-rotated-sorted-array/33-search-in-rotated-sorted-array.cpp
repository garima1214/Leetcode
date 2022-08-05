class Solution {
public:
    int search(vector<int>& nums, int target) {
          int l=0;
        int h=nums.size()-1;
        int res=0;
        while(l<=h)
        {
          int  mid =(l+h)/2;
            if(nums[mid]==target)
            {res=mid;
            return res;
            }
            else  if(nums[l]<=nums[mid])
                {
                    if(target>=nums[l]&&target<=nums[mid])
                        h=mid-1;
                    else
                        l=mid+1;
                }
            
            else
                if(nums[mid]<=nums[h])
                {
                    if(target>=nums[mid]&&target<=nums[h])
                        l=mid+1;
                    else
                        h=mid-1;
                }
        }
        return -1;
    }
};