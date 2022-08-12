class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> p;
        set<pair<int,int>> s;
        for(auto i=0;i<mat.size();i++)
        {
            auto count = accumulate(mat[i].begin(),mat[i].end(),0);
            s.insert(make_pair(count,i));
        }
        for(auto i = s.begin();i!=s.end(),k>0;k--,i++)
        {
            p.push_back(i->second);
        }
      
            
        return p;
        
        
        
    }
};