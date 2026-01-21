class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(auto it:tasks)
        {
            freq[it-'A']++;
        }
        priority_queue<int>pq;
        for(auto it:freq)
        {
            if(it>0){
                pq.push(it);
            }
        }
        int time=0;
        while(!pq.empty())
        {
            vector<int>rem;
            int cycle=n+1;
            while(cycle && !pq.empty())
            {
                int max_freq=pq.top();
                pq.pop();
                if(max_freq>1)
                {
                    rem.push_back(max_freq-1);
                }
                time++;
                cycle--;
            }
            for(auto it:rem)
            {
                pq.push(it);
            }
            if(pq.empty())break;
            time+=cycle;
        }
        return time;

    }
};
