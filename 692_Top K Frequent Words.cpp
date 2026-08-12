class Solution {
public:
    struct Compare {
        bool operator()(const pair<int, string>& a,
                        const pair<int, string>& b) {

            if (a.first == b.first)
                return a.second < b.second;

            return a.first > b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        map<string, int> mp;

        for (auto it : words) {
            mp[it]++;
        }

        priority_queue<
            pair<int, string>,
            vector<pair<int, string>>,
            Compare
        > pq;

        for (auto it : mp) {

            pq.push({it.second, it.first});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        vector<string> res;

        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
