class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int m[26]={0},ans=0;
        for(auto &x : allowed)
        {
            m[x-'a']++;
        }
        
        for(auto &word : words)
        {bool isright=true;
            for(auto &ch :word)
            {
                if(m[ch-'a']==0)
                {      isright=false;
                break;
                }
            }
            if(isright)
            ans++;
        }
        return ans;
    }
};