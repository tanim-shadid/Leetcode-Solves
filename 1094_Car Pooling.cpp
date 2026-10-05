class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>m;
        for(auto t:trips)
        {
            int pass=t[0];
            int start=t[1];
            int end=t[2];
            m[start]+=pass;
            m[end]-=pass;

        }
        int ans=0;
        for(auto it:m)
        {
            ans+=it.second;
            if(ans>capacity)return false;
        }
        return true;
    }
};
