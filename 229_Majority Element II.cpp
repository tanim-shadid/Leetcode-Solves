class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt=nums.size()/3;
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        vector<int>ans;
        for(auto it:mp)
        {
            if(it.second>cnt)ans.push_back(it.first);
        }
        return ans;
    }
};
