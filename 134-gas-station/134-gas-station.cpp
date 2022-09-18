class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int tank=0;
        int total=0;
        int pos=0;
        for(int i=0;i<gas.size();i++)
     {
         tank = tank + gas[i]-cost[i];
            
            if(tank<0)
            {   total =total +tank;
                pos=i+1;
                tank=0;
            }
     }
        total =total +tank;
        
        return total>=0 ? pos:-1;
    }
};