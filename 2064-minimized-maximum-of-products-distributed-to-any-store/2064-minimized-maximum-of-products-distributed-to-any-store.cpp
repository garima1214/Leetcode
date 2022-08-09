class Solution {
public:
    int minimizedMaximum(int n, vector<int>& q) {
        if(q.size()==1)
            return q[0];
      int mx=-1;
       long long int ans=0;
        for(int i=0;i<q.size();i++)
        {
            mx=max(mx,q[i]);
        }
        
      long long int l=1;
      long long int h=mx;
        
        while(l<=h)
        {
long long  int mid=(l+h)/2;
            int cur=0;
            for(int i=0;i<q.size();i++)
            {
                if(q[i]%mid!=0) cur++;
                cur+= (q[i]/mid);
                
            }
            
            if(cur<=n)
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        
        }
        return ans;
    }
};