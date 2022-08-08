class Solution {
public:
    
    bool isit(vector<int>&p, int mid,int m)
    {   int n =p.size();
        int prev=p[0];
     int q=1;
        for(int i=1;i<n;i++)
        {
            if(p[i]-prev>=mid)
            {
                prev=p[i];
                q++;
                if(q==m)
                    return true;
            }
        }
     if(q<m) return false;
     
     return true;
    }
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n= position.size();
        int lo =0;
        int h = position[n-1];
        int ans=0;
        while(lo<=h)
        {
            int mid =(lo+h)/2;
            if(isit(position,mid,m))
            {
                ans = mid;
                lo=mid +1;
            }
            else
                h=mid-1;
            
            
        }
        return ans;
        
        
    }
};