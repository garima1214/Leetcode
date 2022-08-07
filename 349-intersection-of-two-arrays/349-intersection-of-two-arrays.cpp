class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     int n = nums1.size();
        int m = nums2.size();
        unordered_map<int,int> mp;
       vector<int> res;
        
        for(int i=0;i<n;i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(mp.find(nums2[i])!=mp.end())
            {
                if(mp[nums2[i]]!=0)
                { res.push_back(nums2[i]);
                    mp[nums2[i]]=0;
                }
                
            }
        }
        
        return res;
    }
};