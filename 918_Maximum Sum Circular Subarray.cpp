class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curMax=0;
        int curMin=0;
        int maxi=nums[0];
        int mini=nums[0];
        int total=0;

        for (auto num:nums)
        {
            curMax=max(curMax,0)+num;
            maxi=max(maxi,curMax);
            curMin=min(curMin,0)+num;
            mini=min(mini,curMin);
            total+=num;
        }

        if (total==mini)return maxi;
        return max(maxi,total-mini);
    }
};
