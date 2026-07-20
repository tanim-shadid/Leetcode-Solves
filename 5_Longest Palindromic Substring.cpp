class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int maxlen=0;
        int start=0;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                if(s[i]==s[j] && (j-i<=2 || dp[i+1][j-1]))
                {
                    dp[i][j]=true;
                    if(j-i+1>maxlen){
                        start=i;
                        maxlen=j-i+1;
                    }
                }
            }
        }
        return s.substr(start,maxlen);

    }
};
