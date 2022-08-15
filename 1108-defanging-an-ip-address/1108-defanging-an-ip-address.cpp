class Solution {
public:
    string defangIPaddr(string ad) {
        string p;
          int j=0;
        for(auto c : ad)
        {
           if (c=='.')
               p+="[.]";
            
            else
            {
              p+=c;
            }
        }
        return p;
    }
};