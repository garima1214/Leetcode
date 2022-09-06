class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        stack<pair<int,int>> st;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++)
        {
            if(st.empty())
            {
                st.push({arr[i],arr[i+1]});
                continue;
            }
            int x = arr[i+1]-arr[i];
            int diff = st.top().second-st.top().first;
            if(x>diff)
                continue;
            if(x==diff)
            {   st.push({arr[i],arr[i+1]});
               continue;
            }
             if(x<diff)
            {
                while(!st.empty())
                {
                    st.pop();
                }
                st.push({arr[i],arr[i+1]});
            }
        }
        vector<vector<int>> v;
        while(!st.empty())
        {
            v.push_back({st.top().first,st.top().second});
            st.pop();
        }
        
        reverse(v.begin(),v.end());
        return v;
    }
};