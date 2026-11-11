class Solution {
    vector<vector<int>>ans;
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>tem;
        backtrack(1,n,k,tem);
        return ans;
    }

private:
    void backtrack(int i,int n,int k,vector<int>&tem) {
        if (i>n)
        {
            if(tem.size()==k)
            {
                ans.push_back(tem);
            }
            return;
        }
        tem.push_back(i);
        backtrack(i+1,n,k,tem);
        tem.pop_back();
        backtrack(i+1,n,k,tem);
    }
};
