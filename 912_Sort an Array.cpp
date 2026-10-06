class Solution {
private:

   void Merge(vector<int>&v, int low, int mid, int high)
{
    int left=low;
    int right=mid+1;
    vector<int>ans;
    while(left<=mid && right<=high)
    {
        if(v[left]<=v[right])
        {
            ans.push_back(v[left]);
            left++;
        }
        else
        {
            ans.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        ans.push_back(v[left]);
        left++;

    }
     while(right<=high)
    {
        ans.push_back(v[right]);
        right++;

    }
    for(int i=low;i<=high;i++)
    {
        v[i]=ans[i-low];
    }
}



void MergeSort(vector<int>&v, int low, int high)
{
    if(low>=high)return;
    int mid=(low+high)/2;
    MergeSort(v,low,mid);
    MergeSort(v,mid+1,high);
    Merge(v,low,mid,high);

}
public:
    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums,0,nums.size()-1);
        return nums;
    }
};
