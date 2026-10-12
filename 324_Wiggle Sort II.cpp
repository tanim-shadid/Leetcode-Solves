class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>v(nums.size());
        int i=1;
        int j=n-1;
        while(j>=0)
        {
            if(i>=n)
            {
                i=0;
            }
            v[i]=nums[j];
            i+=2;
            j--;

        }
        for(int i=0;i<n;i++)
        {
            nums[i]=v[i];
        }

    }
};
