class Solution {
public:
     int dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0)
        {
            return 1;
        }
        if(grid[i][j]==-1)return 0;
        grid[i][j]=-1;
        return (dfs(grid,i,j+1)+
        dfs(grid,i,j-1)+
        dfs(grid,i+1,j)+
        dfs(grid,i-1,j));
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    ans+=dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
};
