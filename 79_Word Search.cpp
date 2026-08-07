class Solution {
public:
bool dfs(vector<vector<char>>& board,string &word,int i,int j ,int inx)
{
    if(inx==word.size())return true;
    if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='#' ||
     board[i][j]!=word[inx])return false;
     board[i][j]='#';
    bool ans=dfs(board,word,i,j+1,inx+1) ||
             dfs(board,word,i,j-1,inx+1) ||
             dfs(board,word,i+1,j,inx+1) ||
             dfs(board,word,i-1,j,inx+1);
    board[i][j] = word[inx];
    return ans;

}
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                 if(dfs(board,word,i,j,0))return true;

            }
        }
        return false;

    }
};
