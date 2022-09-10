class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(auto & ch: sentences)
        {
            int count=0;
         for(int i=0;i<ch.length();i++)
            {
                if(ch[i]==' ')
                    count++;
            }           
            ans = max(ans,count);
        }
        return ans+1;
    }
};