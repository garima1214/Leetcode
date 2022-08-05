class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
        
//         int l=0;
//         int high =nums.size()-1;
//         int mid=0;
//         while(l<h)
//         {
//             mid =(l+h)/2;
//             if(a[mid]==target&&a[mid-1]!=target&&a[mid+1]==target)
//             {
//             i=target;
//                 l=mid+1;
//             }
            
//             else
//                 if(a[mid]==target&&a[mid+1]!=target&&a[mid-1]!=target)
//                 {
//                     i=a[mid];
//                     j=a[mid];
//                 }
//             if(a[mid-1]==target&&a[mid+1]==target)
//             {
                 
//             }
                    
                
//         }
        int flag=0;
        int s=-1;
        int e=-1;
        if(nums.size()==1 && nums[0]==target)
        {
            s=0;
            e=0;
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && flag==0)
            {
              s=i;
                flag=1;
            }
            else
                if(flag==1 && nums[i]==target)
                {
                    e=i;
                }
            
        }
        
        if(e==-1)
            e=s;
        vector<int> result;
        result.push_back(s);
        result.push_back(e);
        return result;
    }
};