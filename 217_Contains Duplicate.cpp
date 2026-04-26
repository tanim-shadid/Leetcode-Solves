class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          unordered_set<int>sa;
   for(int i=0;i<nums.size();i++)
   {
    if(sa.find(nums[i])!=sa.end())
    return true;
    sa.insert(nums[i]);

   }
   return false;
    }
};
