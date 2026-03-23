class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        int ans=0;
        int cnt=0;
        vector<int>hash(26);
        while(r<s.size())
        {
            hash[s[r]-'A']++;
            cnt=max(cnt,hash[s[r]-'A']);
            if(r-l+1-cnt>k)
            {
                hash[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
