class Solution {
public:
    int countn(int n)
    {
        int count=0;
        while(n>0)
        {
            n&=(n-1);
            count++;
        }
        return count;
    }
    int minBitFlips(int start, int goal) {
        return countn(start^goal);
    }
};