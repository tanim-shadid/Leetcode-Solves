class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>m1,m2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
            {
                m1[s[i]]++;
            }
            else
            {
                m2[s[i]]++;
            }
        }
        int cnt1=0,cnt2=0;
        for(auto it:m1)
        {
            cnt1=max(cnt1,it.second);
        }
         for(auto it:m2)
        {
            cnt2=max(cnt2,it.second);
        }
        return cnt1+cnt2;


    }
};
