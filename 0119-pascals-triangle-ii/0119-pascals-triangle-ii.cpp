class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>> r(n+1);
        for(int i=0;i<n+1;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++)
            {
                r[i][j]=r[i-1][j]+r[i-1][j-1];
            }
        }
        return r[n];
    }
};