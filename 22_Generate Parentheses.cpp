class Solution {
public:
void backtrack(int n,vector<string>&ans,string &tem, int open, int close)
{
    if(open==close && open==n)
    {
        ans.push_back(tem);
        return;
    }
    if(open<n)
    {
        tem+='(';
        backtrack(n,ans,tem,open+1,close);
        tem.pop_back();
    }
    if(close<open)
    {
        tem+=')';
        backtrack(n,ans,tem,open,close+1);
        tem.pop_back();
    }
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string tem;
        backtrack(n,ans,tem,0,0);
        return ans;
    }
};
