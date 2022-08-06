class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
          int ans =INT_MIN;
        int high =INT_MIN;
        
        for(int i=1;i<arr.size()-1;i++)
        {
            if(arr[i]>ans)
               
            {
                high = i;
                ans = arr[i];
            }
            }
        if(arr.size()<3)
            return 0;
        return high;
    }
};