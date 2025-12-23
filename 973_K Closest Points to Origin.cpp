class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>maxHeap;
        for(auto it:points)
        {
            int dis=it[0]*it[0]+it[1]*it[1];
            maxHeap.push({dis,{it[0],it[1]}});
            if(maxHeap.size()>k)
            {
                maxHeap.pop();
            }
        }
        vector<vector<int>>ans;
        while(!maxHeap.empty())
        {
            ans.push_back({maxHeap.top().second.first,
            maxHeap.top().second.second});
            maxHeap.pop();
        }
        return ans;
    }
};
