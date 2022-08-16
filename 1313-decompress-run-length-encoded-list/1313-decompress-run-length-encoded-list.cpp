class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> p;
        for(int i=0;i<nums.size();i++)
        {
            int f= nums[i];
            int v = nums[i+1];
            
            while(f!=0)
            {
                p.push_back(v);
                f--;
            }
            i++;
        }
        
        return p;
        
    }
};