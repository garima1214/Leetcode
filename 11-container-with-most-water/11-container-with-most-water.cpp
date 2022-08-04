class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int lh=0;
        int hh=height.size()-1;
   int area=0;        
        
        while(lh<hh)
        {
            
          int  minh= min(height[lh],height[hh]);
          int  width= hh-lh;
           int  ans =minh*width;
            area = max(area,ans);
            if(height[lh]<height[hh])
                lh++;
            else
            hh--;
        }
        return area;
    }
};