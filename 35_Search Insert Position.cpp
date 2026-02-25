class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int hi=n-1;
        while(l<=hi)
        {
            int mid=l+(hi-l)/2;
            //if(l==hi)break;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        return l;
    }
};
