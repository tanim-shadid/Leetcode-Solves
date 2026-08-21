class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //observation
        //1-> If all are positive then ans is product of all nums
        //2-> If the count of neg num is even then ans is product of all nums;
        //3-> If the count of nug num is odd then we need to check the max product portion
        int pref=1;
        int suff=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(pref==0)pref=1;
            if(suff==0)suff=1;

            pref=pref*nums[i];
            suff=suff*nums[nums.size()-i-1];
            ans=max(ans,max(pref,suff));
        }
        return ans;

    }
};
