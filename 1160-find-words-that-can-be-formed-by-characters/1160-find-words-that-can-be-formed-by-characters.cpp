class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        vector<int> charfre(26,0);
        bool c=true;
        int count =0;
        for(char &ch :chars)
        {
            charfre[ch-'a']++;
        }
        for(auto & word:words)
        {
        vector<int> wordfreq(26,0);
            
        for(char &ch :word)
        {
            wordfreq[ch-'a']++;
        }
            
        
        for(int i=0;i<charfre.size();i++)
        {
            if(wordfreq[i]>charfre[i])
            {
                c=false;
                break;
            }
            else
                c=true;
        }
            if(c)
                count+=word.length();
        }
        return count;
        
    }
};