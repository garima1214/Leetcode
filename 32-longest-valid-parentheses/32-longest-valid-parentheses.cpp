class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> t;
        t.push(-1);
       int maxc=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                t.push(i);
            else
            {
                t.pop();
                if(t.empty())
                    t.push(i);
                else
               maxc=max(maxc,i-t.top());     
            }
        }
        return maxc;
    }
};