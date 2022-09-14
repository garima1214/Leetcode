class Solution {
public:
    int evalRPN(vector<string>& t) {
       stack<int> s;
        int n = t.size();
        for(int i=0;i<n;i++)
        {
            if(t[i]=="+")
            {
                int p1= s.top();
                s.pop();
                int p2=s.top();
                s.pop();
                int q= p1+p2;
                 s.push(q);
            }    
            else
            if(t[i]=="-")
                            {
                int p1= s.top();
                s.pop();
                int p2=s.top();
                s.pop();
                int q= p2-p1;
                s.push(q);
            }        
            else
            if(t[i]=="*")
                            {
            long long    int p1= s.top();
                s.pop();
            long long    int p2=s.top();
                s.pop();
               
                s.push( p1*p2);
            }        
               else     
             if(t[i]=="/")
                             {
                int p1= s.top();
                s.pop();
                int p2=s.top();
                s.pop();
                int q= p2/p1;
                 s.push(q);
            }        
                else
                s.push(stoi(t[i]));
                }
        return s.top();
    }
};