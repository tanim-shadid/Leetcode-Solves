class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(),maximumHeight.end());
        long long ans=0;
        long long last=INT_MAX;
        for(int i=maximumHeight.size()-1;i>=0;i--)
        {
            if(maximumHeight[i]<last)
            {
                last=maximumHeight[i];
                ans+=maximumHeight[i];
            }
            else
            {
                ans+=last-1;
                last=last-1;

            }
            if(last==0)return -1;
        }
        return ans;
    }
};
