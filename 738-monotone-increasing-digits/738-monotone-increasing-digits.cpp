class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s =to_string(n);
        int x = s.size();
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i-1]>s[i])
            {
                x=i;
                s[i-1]=s[i-1]-1;
            }
            
            
        }
        
        for(int i=x;i<s.size();i++)
            s[i]='9';
        
        stringstream geek(s);
        geek>>x;
        return x;
        
    }
};