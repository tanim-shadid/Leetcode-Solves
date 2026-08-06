class Solution {
public:
void permutation(vector<int>&nums,vector<vector<int>>&ans,vector<int>&tem,vector<bool>&used)
{
    if(tem.size()==nums.size())
    {
        ans.push_back(tem);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
       if(used[i])continue;
       if(i>0 && nums[i]==nums[i-1] && !used[i-1])continue;
       used[i]=true;
       tem.push_back(nums[i]);
       permutation(nums,ans,tem,used);
       tem.pop_back();
       used[i]=false;
    }

}
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>tem;
        vector<bool>used(nums.size(),false);
        sort(nums.begin(),nums.end());
        permutation(nums,ans,tem,used);
        return ans;
    }
};
