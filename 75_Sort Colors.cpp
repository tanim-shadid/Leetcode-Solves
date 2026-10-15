class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>freq(4,0);
        for(auto it:nums)
        {
            freq[it]++;
        }
        int inx=0;
        for(int i=0;i<=3;i++)
        {
            while(freq[i]>0)
            {
                nums[inx]=i;
                inx++;
                freq[i]--;
            }
        }
    }
};
