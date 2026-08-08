class Solution {
public:
bool isPalindrome(string &s,int l,int r)
{
    while(l<=r)
    {
        if(s[l]!=s[r])return false;
        l++;
        r--;
    }
    return true;
}
void backtrack(string &s,vector<vector<string>>&ans,vector<string>&tem,int start)
{
    if(start==s.size())
    {
       ans.push_back(tem);
       return;

    }
    for(int i=start;i<s.size();i++)
    {
        if(isPalindrome(s,start,i))
        {
            tem.push_back(s.substr(start,i-start+1));
            backtrack(s,ans,tem,i+1);
            tem.pop_back();
        }

    }
}
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>tem;
        backtrack(s,ans,tem,0);
        return ans;
    }
};
