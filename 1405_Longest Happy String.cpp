class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        if(a>0)pq.push({a,'a'});
        if(b>0)pq.push({b,'b'});
        if(c>0)pq.push({c,'c'});
        string ans="";
        while(!pq.empty())
        {
            pair<int,char>tem=pq.top();
            pq.pop();
            int cnt=tem.first;
            char ch=tem.second;
            if(ans.size()>=2 && ans[ans.size()-1]==tem.second && ans[ans.size()-2]==tem.second)
            {
                if(pq.empty())break;
                pair<int,char>tem2=pq.top();
                pq.pop();
                ans+=tem2.second;
                if(tem2.first-1>0)
                {
                    pq.push({tem2.first-1,tem2.second});
                }

            }
            else
            {
                cnt--;
                ans+=ch;
            }
            if(cnt>0)pq.push({cnt,ch});
        }
        return ans;

    }
};
