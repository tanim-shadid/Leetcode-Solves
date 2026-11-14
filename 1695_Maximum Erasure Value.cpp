class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>st;
        int ans=0;
        int sum=0;
        int inx=0;
        for(int i=0;i<nums.size();i++)
        {
            while(st.find(nums[i])!=st.end())
            {
                st.erase(nums[inx]);
                sum-=nums[inx];
                inx++;
            }
            sum+=nums[i];
            st.insert(nums[i]);
            ans=max(ans,sum);
        }
        return ans;
    }
};
