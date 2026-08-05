class Solution {

public:
void backtrack(vector<int>&nums,int target,vector<vector<int>>&ans,vector<int>&sum,int i)
{
    if(i==nums.size())
    {
         if(target==0)
        {
          ans.push_back(sum);

        }
        return;
    }

    if(nums[i]<=target)
    {
        sum.push_back(nums[i]);
        backtrack(nums,target-nums[i],ans,sum,i);
        sum.pop_back();
    }
    backtrack(nums,target,ans,sum,i+1);
}
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>sum;
        backtrack(nums,target,ans,sum,0);
        return ans;
    }

};
