class Solution {
public:
    bool isPerfectSquare(int num) {
      long long int n = num;
     long long   int l=1;
        while(l<=n)
        {
         long long  int mid =(l+n)/2;
            if(mid*mid ==num)
                return true;
            else
                if(mid*mid<num)
                {
                    l=mid+1;
                }
            else
                n=mid-1;
                }
        return false;
    }
};