class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        backtrack(0,ans,board);
        return ans;
    }
    void backtrack(int c,vector<vector<string>>&ans,vector<string>&board)
    {
        if(c==board.size())
        {
            ans.push_back(board);
            return;
        }
        for(int r=0;r<board.size();r++)
        {
            if(isSafe(r,c,board))
            {
                board[r][c]='Q';
                backtrack(c+1,ans,board);
                board[r][c]='.';
            }
        }
    }
    bool isSafe(int r,int c,vector<string>&board)
    {
        for(int i=r-1,j=c-1;i>=0 &&j>=0;i--,j--)
        {
            if(board[i][j]=='Q')return false;
        }

        for(int j=c-1;j>=0;j--)
        {
            if(board[r][j]=='Q')return false;
        }

        for(int i=r+1,j=c-1;i<board.size() && j>=0;i++,j--)
        {
            if(board[i][j]=='Q')return false;
        }
        return true;
    }
};
