class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=INT_MIN;
        int sell=0;
        int prev_sell=0;

        for(int i=0;i<n;i++)
        {
            int prev_buy=buy;
            buy=max(prev_sell-prices[i],buy);
            prev_sell=sell;
            sell=max(prev_buy+prices[i],sell);

        }
        return sell;



    }
};
