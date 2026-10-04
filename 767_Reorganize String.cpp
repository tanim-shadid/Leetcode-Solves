class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
           m[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:m)
        {
            pq.push({it.second,it.first});
        }
        string ans="";
        while(!pq.empty())
        {
           pair<int,char>tem=pq.top();
           pq.pop();
           int cnt=tem.first;
           char ch=tem.second;
           if(ans.size()>=1 && ans[ans.size()-1]==tem.second)
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
             ans+=ch;
             cnt--;
           }
           if(cnt>0)pq.push({cnt,ch});
        }
        if(ans.size()==s.size())return ans;
        else return "";
    }
};
