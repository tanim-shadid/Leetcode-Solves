class Solution {
public:
    int search(vector<int>& nums, int target) {
        long long l=0,hi=nums.size()-1;
        while(l<=hi)
        {
            int mid=l+(hi-l)/2;
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
        return -1;
    }
};
