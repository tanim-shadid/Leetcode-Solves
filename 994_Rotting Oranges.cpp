class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int time=0,fresh=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    fresh++;
                }
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        vector<pair<int,int>>direction={{0,1},{0,-1},{1,0},{-1,0}};
        while(fresh>0 && !q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                auto curr=q.front();
                q.pop();
                int r=curr.first;
                int c=curr.second;
                for(auto it:direction)
                {
                    int row=r+it.first;
                    int col=c+it.second;
                    if(row>=0 && row<grid.size() && col>=0 && col<grid[0].size() &&
                    grid[row][col]==1)
                    {
                        grid[row][col]=2;
                        q.push({row,col});
                        fresh--;
                    }
                }
            }
            time++;
        }
        if(fresh==0)return time;
        else return -1;

    }
};
