class Solution {
public:
    int numJewelsInStones(string j, string st) {
        unordered_map<char,int> s;
        for(int i=0;i<j.length();i++)
        {
            char ch = j[i];
            s[ch]=0;
        }
        for(int i=0;i<st.size();i++)
        {
            char ch =st[i];
            if(s.find(ch)!=s.end())
            {
                s[ch]++;
                
            }
        }
        int sum=0;
        for(auto i :s)
        {
            sum = sum+i.second;
        }
        return sum;
    }
};