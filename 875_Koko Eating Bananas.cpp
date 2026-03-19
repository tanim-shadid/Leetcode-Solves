class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {

        int l=1,r=*max_element(v.begin(),v.end());
        int ans=INT_MAX;
        while(l<=r)
         {
            int mid=(r+l)/2;
            long long cnt=0;
            for(int i=0;i<v.size();i++)
            {
               cnt+=ceil(double(v[i])/mid);
            }
            if(cnt<=h)
            {
                ans=min(ans,mid);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
         }
       return ans;
    }
};
