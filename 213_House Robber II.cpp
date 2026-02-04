class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
      int x=helper(vector<int>(nums.begin(),nums.end()-1));
      int y=helper(vector<int>(nums.begin()+1,nums.end()));
      return max(x,y);
    }
    int helper(vector<int>nums)
    {
         int n=nums.size();
        if(n==0)return 0;
        if(n==1)return (nums[0]);
        vector<int> dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            int pick=nums[i]+dp[i-2];
            int notpick=dp[i-1];
            dp[i]=max(pick,notpick);
        }
        return dp.back();

    }
};
