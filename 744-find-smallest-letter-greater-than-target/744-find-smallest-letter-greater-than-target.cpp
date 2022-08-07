class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
       long long int l=0;
      long long  int h= letters.size();
       long long  int ans =0;
        

        while(l<=h)
        {
           int mid =(l+h)/2;    
            
            if(mid<letters.size()-1 && letters[mid]<= target && letters[mid+1]>target)   
                return letters[mid+1];
            
            else
                if(target<letters[mid])
                {
                    h=mid-1;
                  
                }
            else
                l=mid+1;
        }
        
        return letters[0];
    }
};