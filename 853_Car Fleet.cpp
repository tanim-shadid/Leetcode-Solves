class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>>fleet;
        for(int i=0;i<n;i++)
        {
            fleet.push_back({position[i],speed[i]});
        }
        sort(fleet.rbegin(),fleet.rend());
        stack<double>st;
        for(int i=0;i<n;i++)
        {
            double x=(double)(target-fleet[i].first)/(fleet[i].second);
            if(st.empty() || x>st.top())
            {
               st.push(x);
            }


        }
        return st.size();
    }
};
