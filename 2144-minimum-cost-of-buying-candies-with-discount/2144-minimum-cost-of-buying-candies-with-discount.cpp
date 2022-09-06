class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(rbegin(cost),rend(cost));
        int ans=0;
        for(int i=0;i<cost.size();i++)
            
        {
            ans+= i%3==2 ? 0:cost[i];
        }
        return ans ;
    }
};