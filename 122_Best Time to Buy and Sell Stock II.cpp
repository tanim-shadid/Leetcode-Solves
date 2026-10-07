class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int profit=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]-buy>0)
            {
                profit+=prices[i]-buy;
                buy=INT_MAX;
            }
            if(prices[i]<buy)
            {
                buy=prices[i];
            }

        }
        return profit;

    }

};
