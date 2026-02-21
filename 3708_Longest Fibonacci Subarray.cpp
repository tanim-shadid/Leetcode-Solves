class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int n=v.size();
    reverse(v.begin(),v.end());
    int cnt=0;
    int ans=0;
    for(int i=0;i<n-2;i++)
    {
        if(v[i]==v[i+1]+v[i+2])
            {
                cnt++;
                ans=max(ans,cnt);
            }
        else cnt=0;
    }
        return ans+2;
    }
};
