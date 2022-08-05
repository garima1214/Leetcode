class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
    vector<int> p;   
   int l=0;
        int res=-1;
   int e =a.size()-1;
        int mid=0;
        while(l<=e)
        {
            mid= (l+e)/2;
            if(a[mid]==target)
            {   res=mid;
              e=mid-1;
            }
            else
                if(target<a[mid])
                    e=mid-1;
            else
                l=mid+1;
        }
   p.push_back(res);
         l=0;
        res=-1;
    e =a.size()-1;
         mid=0;
        while(l<=e)
        {
            mid= (l+e)/2;
            if(a[mid]==target)
            {   res=mid;
              l=mid+1;
            }
            else
                if(target<a[mid])
                    e=mid-1;
            else
                l=mid+1;
        }
   p.push_back(res);
       
return p;
    }
};