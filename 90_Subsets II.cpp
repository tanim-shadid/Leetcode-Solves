class Solution {
public:
void backtrack(vector<int>&nums,vector<vector<int>>&ans,vector<int>&sub,int start)
{
    ans.push_back(sub);
    for(int i=start;i<nums.size();i++)
    {
        if(i>start &&nums[i]==nums[i-1])continue;

         sub.push_back(nums[i]);
        backtrack(nums,ans,sub,i+1);
        sub.pop_back();
    }
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        sort(nums.begin(),nums.end());
        backtrack(nums,ans,sub,0);
        return ans;
    }
};
