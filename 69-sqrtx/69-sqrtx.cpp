class Solution {
public:
    int mySqrt(int x) {
     long long  int l=0 ,e=x,ans=0;
        while(l<=e)
        {
         long long  int mid =(l+e)/2;
            if(mid*mid==x)
                return mid;
            if(mid*mid<x)
            { l=mid+1;
                ans =mid;
            }
            else
                e=mid-1;
           }
        return ans;
    }
};