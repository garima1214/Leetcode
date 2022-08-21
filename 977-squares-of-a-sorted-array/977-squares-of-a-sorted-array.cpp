class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> p;
        for(int i=0;i<nums.size();i++)
        {
            int n = nums[i]*nums[i];
            p.push_back(n);
        }
        
      sort(p.begin(),p.end());
        return p;
        
    }
};