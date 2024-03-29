class Solution {
public:
    int divide(int dividend, int divisor) {
      long start =0;
      long end = abs(dividend);
      long ans =0;
      if(dividend== INT_MIN && divisor ==-1)
      {
          return INT_MAX;
      }  
      while(start<=end)
      {
          long mid = (start+end)/2;
          if(abs(mid*divisor)==abs(dividend))
          {
              ans = mid;
              break;
          } 
          if(abs(mid*divisor)>abs(dividend))
          {
              end = mid-1;
          }
          else
          {
              ans = mid;
              start=mid+1;
          }
      }
      if((divisor>0 && dividend > 0) || (divisor<0 && dividend <0) )
          return int(ans);
      else
      {
          return int(-ans);
      }
    }
};