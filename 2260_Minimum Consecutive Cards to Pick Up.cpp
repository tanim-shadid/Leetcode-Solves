class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int inx=0;
        int ans=INT_MAX;
        int cnt=0;
        unordered_set<int>st;
        for(int i=0;i<cards.size();i++)
        {
            while(st.find(cards[i])!=st.end())
            {
                ans=min(ans,(i-inx+1));
                st.erase(cards[inx]);
                inx++;

            }
            st.insert(cards[i]);
        }
        if(ans==INT_MAX)return -1;
        else return ans;

    }
};
