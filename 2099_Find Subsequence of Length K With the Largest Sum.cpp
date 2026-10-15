class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int cnt=n-k;
        for(int i=0;i<n;i++)
        {
            pq.push({nums[i],i});
            if(pq.size()>k)pq.pop();
        }

        vector<pair<int,int>>ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        sort(ans.begin(),ans.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
        return a.second < b.second;
});
        vector<int>v(ans.size());
        for(int i=0;i<ans.size();i++)
        {
            v[i]=ans[i].first;
        }
        return v;
    }
};
