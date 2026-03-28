class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt=0;
        int n=s.size();
        map<char,int>mp;
        int l=0,r=0;
        while(r<n)
        {
            if(mp[s[r]]>0)
            {

                mp.clear();
                l++;
                r=l;

            }
            int len=r-l+1;
             cnt=max(cnt,len);
            mp[s[r]]++;
            r++;

        }

        return cnt;

    }
};
