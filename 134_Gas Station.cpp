class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        int sum_gas = accumulate(gas.begin(), gas.end(), 0);
        int sum_cost = accumulate(cost.begin(), cost.end(), 0);
        if (sum_gas < sum_cost)
            return -1;
            int inx=0;
            int tt = 0;
        for (int i = 0; i < n; i++)
        {

            tt+=gas[i]-cost[i];
            if(tt<0)
            {
               tt=0;
               inx=i+1;
            }

        }
        return inx;


    }
};
