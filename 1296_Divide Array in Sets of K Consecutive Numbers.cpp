class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        sort(nums.begin(),nums.end());
        for(int it:nums)
        {
            m[it]++;
        }
        for(int it:nums)
        {
            if(m[it]>0)
            {
                for(int j=it;j<=it+k-1;j++)
                {
                    if(m[j]==0)return false;
                     m[j]--;
                }
            }
        }
        return true;
    }
};
