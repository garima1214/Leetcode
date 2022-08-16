class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        
        int n = image[0].size();
        
        int m  = image.size();  
        vector<vector<int>> p(m,vector<int>(n,0));
        for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[0].size();j++)
            {
                p[i][n-j-1]= image[i][j];
            }
        }
        
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(p[i][j]==0)
                   p[i][j]=1;
               else
                   p[i][j]=0;
           }
       }
        return p;
    }
};