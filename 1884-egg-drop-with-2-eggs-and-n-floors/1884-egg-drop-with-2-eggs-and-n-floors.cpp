class Solution {
public:
    int twoEggDrop(int n) {
        int res=0;
        int i=n;
        while(i>0)
        {
            res++;
            i=i-res;
        }
        
        return res;
    }
};