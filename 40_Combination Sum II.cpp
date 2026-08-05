class Solution {
public:
void backtrack(vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&sum,int inx)
{
    if(target==0)
    {
       ans.push_back(sum);
       return;
    }

   for(int i=inx;i<candidates.size();i++)
   {
    if(i>inx && candidates[i]==candidates[i-1])continue;
    if(candidates[i]>target)break;
    sum.push_back(candidates[i]);
    backtrack(candidates,target-candidates[i],ans,sum,i+1);
    sum.pop_back();

   }

}

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>sum;
        backtrack(candidates,target,ans,sum,0);
        return ans;

    }
};
