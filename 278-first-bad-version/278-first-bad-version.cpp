// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long long int l=0;
       long long  int h=n;
        int res=0;
        while(l<=h)
        {
          long long   int mid = (l+h)/2;
            if(isBadVersion(mid))
            {
                res=mid;
                h=mid-1;
            }
            else
                if(!isBadVersion(mid))
                l=mid+1;
            
            else
              h=mid-1;
        }
        return res;
    }
};