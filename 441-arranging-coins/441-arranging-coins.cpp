class Solution {
public:
    int arrangeCoins(int n) {
      int i=0;
        if(n==1)
            return 1;
        while(n>0)
      {
          
            n=n-i-1;
            if(n<0)
                break;
            i++;
      }
        return i;
    }
};