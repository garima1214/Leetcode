class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       int n = indices.size();
       string p;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {     
            if(indices[j]==i)
            p+=s[j];
            }
        }
        return p;
    }
};