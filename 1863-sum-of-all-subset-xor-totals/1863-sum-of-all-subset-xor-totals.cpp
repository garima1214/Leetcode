class Solution {
public:
    int count(vector<int> &n,int level,int curr)
    {
        if(level==n.size())
            return curr;
        
        int include=count(n,level+1,curr^n[level]);
        int exclude=count(n,level+1,curr);
        
        return include + exclude;
    }
    
    int subsetXORSum(vector<int>& nums) {
        return count(nums,0,0);
    }
};