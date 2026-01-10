class Solution {
    int ans=0,cnt=0;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(grid,i,j);
                    ans=max(ans,cnt);
                    cnt=0;
                }
            }
        }
        return ans;

    }
    private:
    int dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() ||
         grid[i][j]==0)return 0;
        grid[i][j]=0;
        cnt++;
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        return cnt;


    }
};
