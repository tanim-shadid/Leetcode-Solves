class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_set<string>st(wordDict.begin(),wordDict.end());
        int maxLen=0;
        for(string word:wordDict)
        {
            maxLen=max(maxLen,(int)word.size());
        }
        vector<bool>dp(n+1,false);
        dp[0]=true;
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j>=max(0,i-maxLen);j--)
            {
                string word=s.substr(j,i-j);
                if(dp[j] && st.count(word))
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
