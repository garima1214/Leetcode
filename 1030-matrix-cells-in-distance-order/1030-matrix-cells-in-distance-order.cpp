class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> ans ;
        map<int,vector<vector<int>>> mp;
          int dist =0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                dist = abs(i-rCenter)+abs(j-cCenter);
                mp[dist].push_back({i,j});
            }
        }
        
        for(auto j:mp)
        {
            for(auto q:j.second)
            {
                ans.push_back(q);
            }
        }
        
        return ans ;
    }
};