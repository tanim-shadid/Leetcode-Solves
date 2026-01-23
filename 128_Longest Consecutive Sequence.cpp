class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        int cnt=1;
        int ans=0;
        for(auto it:s)
        {
            if(s.find(it-1)==s.end())
            {
                int cnt=1;
                while(s.find(it+cnt)!=s.end())cnt++;
                ans=max(ans,cnt);
            }
        }

        return ans;
    }
};
