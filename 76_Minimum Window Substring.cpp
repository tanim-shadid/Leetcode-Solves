class Solution {
public:
    string minWindow(string s, string t) {
        string ans="";
        int l=0,r=0,minlen=INT_MAX,start=-1,cnt=0;
        int n=s.size(),m1=t.size();
        map<char,int>m;
        for(auto it:t)
        {
            m[it]++;
        }
        while(r<n)
        {
          if(m[s[r]]>0)
          {
            cnt++;

          }
          m[s[r]]--;
          while(cnt==m1)
          {
            if(r-l+1<minlen)
            {
                minlen=r-l+1;
                start=l;

            }
            m[s[l]]++;
            if(m[s[l]]>0)
            {
                cnt--;
            }
            l++;
          }
          r++;
        }
        if(start==-1)return ans;
        else return s.substr(start,minlen);


    }
};
