class Solution {
public:
    int countPoints(string rings) {
        bool arr[10][3]={};int ans=0;
        for(int i=1;i<rings.size();i+=2){
            if(rings[i-1]=='R')
            arr[rings[i]-'0'][0]=true;
            if(rings[i-1]=='G')
            arr[rings[i]-'0'][1]=true;
            if(rings[i-1]=='B')
            arr[rings[i]-'0'][2]=true;
        }
        for(int i=0;i<10;i++)
            ans+=arr[i][0]&&arr[i][1]&&arr[i][2];
        return ans;
    }
};