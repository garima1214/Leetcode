class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
     map<int,int> nge;
       vector<int> p;
        stack<int> st;
        
        for(int i=n2.size()-1;i>=0;i--)
        {
           while(!st.empty() and st.top()<=n2[i])
                st.pop();
            if(st.empty())
                nge[n2[i]]=-1;
            if(!st.empty())
                nge[n2[i]]=st.top();
            
            st.push(n2[i]); 
        }
        
        for(int i=0;i<n1.size();i++)
        {
           
                p.push_back(nge[n1[i]]);
            
        }
            return p;
    }
};