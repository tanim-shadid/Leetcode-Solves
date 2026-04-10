class Solution {
public:
    int minElement(vector<int>& nums) {

        for(int i=0;i<nums.size();i++)
        {   int sum=0;
            int tem=nums[i];
            while (tem != 0) {
            sum = sum + tem % 10;
            tem = tem / 10;
        }
            nums[i]=sum;
        }
        int ans=*min_element(nums.begin(),nums.end());
        return ans;
    }
};
