class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int currSum=0;
        unordered_map<int,int>prefSum;
        prefSum[0]=1;
        for(auto num:nums)
        {
            currSum+=num;
            int diff=currSum-k;
            ans+=prefSum[diff];
            prefSum[currSum]++;
        }
        return ans;

    }
};
