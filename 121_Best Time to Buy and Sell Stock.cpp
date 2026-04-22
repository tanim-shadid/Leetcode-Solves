class Solution {
public:
    int maxProfit(vector<int>& prices) {
          //int n=prices.size();
        int ans=0;
        int i=0;
        int j=0;
        while( j<prices.size())
        {
            if(prices[j]>prices[i])
            {
                  ans=max(ans,prices[j]-prices[i]);

               // ans=0;
            }
            else
            {
              i=j;

            }
            j++;
        }
        return ans;
    }
};
