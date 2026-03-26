class Solution {
public:
    vector<int> topKFrequent(vector<int>&v, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }
        int cnt=0;
        vector<pair<int,int>>c;
        for(auto it:mp)
        {
          c.push_back({it.second,it.first});
        }
         sort(c.rbegin(),c.rend());
        for(int i=0;i<k;i++)
        {
            ans.push_back(c[i].second);
        }
        return ans;
    }
};
