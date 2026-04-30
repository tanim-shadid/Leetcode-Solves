class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int>m;
      vector<int>v;
      for(int i=0;i<nums.size();i++)
      {
          int tem=nums[i];
          int need=target-nums[i];
          if(m.find(need) !=m.end())
          {
              return {m[need],i};
              //v.push_back(m[need]);
               //v.push_back(i);
              // break;
          }
          m[tem]=i;
      }
        //return v;
        return {-1,-1};
    }
};
