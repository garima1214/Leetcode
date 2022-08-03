class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        int x0 =rec1[0];
        int x1=rec1[2];
        int x2=rec2[0];
        int x3= rec2[2];
       int y0=rec1[1];
        int y1=rec1[3];
        int y2 = rec2[1];
        int y3=rec2[3];
        if(x2>=x1||x0>=x3||y2>=y1||y0>=y3)
            return false;
        
        return true;
        
    }
};