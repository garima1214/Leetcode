class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        char current ='N';
        int x=0,y=0;
        for(int i=0;i<instructions.size();i++)
        {
            if(instructions[i]=='G')
            {
                y+= current=='N'? 1:0;
                y+=current=='S'?-1:0;
                x+=current=='E'?1:0;
                x+=current=='W'?-1:0;
            }
            else
            {
                char ch = instructions[i];
                if(current=='N')
                    current =ch=='L'?'W':'E';
                    else
                         if(current=='S')
                    current =ch=='L'?'E':'W';
                else
                     if(current=='E')
                    current =ch=='L'?'N':'S';
                else
                     if(current=='W')
                    current =ch=='L'?'S':'N';
            }
        }
            
            if((x==0 && y==0) or current !='N')
                   return true;
            
            return false;
             }
    
};