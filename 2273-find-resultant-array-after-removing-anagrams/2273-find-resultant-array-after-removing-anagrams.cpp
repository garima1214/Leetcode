class Solution {
public:
    vector<string> removeAnagrams(vector<string>& w) {
        vector<string> ans;
        int n = w.size();
        for(int i=0;i<n; )
        {
          int  j=i+1;
            while(j<n and isAnagram(w[i],w[j])) j++;
            ans.push_back(w[i]);
            
            i=j;
            
        }
        return ans ;
    }
     bool isAnagram(string s, string t) {
      unordered_map<char,int> p,q;
       if(s.size()!=t.size())
           return false;
        for(int i= 0;i<s.size();i++)
        {
            p[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            q[t[i]]++;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(q[s[i]]!=p[s[i]])
            {
                return false;
            }
        }
        return true;
    }
};