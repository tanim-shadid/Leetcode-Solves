class Solution {
public:
void permutation(vector<int>&nums,vector<vector<int>>&ans,int inx)
{
    if(inx==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i=inx;i<nums.size();i++)
    {
       swap(nums[inx],nums[i]);
       permutation(nums,ans,inx+1);
       swap(nums[inx],nums[i]);
    }

}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;

        permutation(nums,ans,0);
        return ans;
    }
};
