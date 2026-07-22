class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v(temperatures.size(),0);
        stack<pair<int,int>>st;
        for(int i=0;i<temperatures.size();i++)
        {
           while(!st.empty() && temperatures[i]>st.top().first)
           {
              auto pair=st.top();
              st.pop();
              v[pair.second]=i-pair.second;
           }
           st.push({temperatures[i],i});
        }
        return v;

    }
};
