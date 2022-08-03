class Solution {
public:
    int trailingZeroes(int n) {
               // Counting trailing zeros
        int c=0;
        while(n){
            c+=n/5;
            n=n/5;
        }
        return c;
    
    }
};