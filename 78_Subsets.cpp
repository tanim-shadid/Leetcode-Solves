class Solution {
  public:
    void Subset(vector<int>& nums,vector<int>&sub, vector<vector<int>>&ans ,int i)
    {
       if(i>=nums.size())
       {
         ans.push_back(sub);
         return;
       }
       sub.push_back(nums[i]);
       Subset(nums,sub,ans,i+1);
       sub.pop_back();
       Subset(nums,sub,ans,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        Subset(nums,sub,ans,0);
        return ans;


    }
};
