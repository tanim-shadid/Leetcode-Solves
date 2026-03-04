class Solution {
    vector<pair<int,int>>directions={{1,0},{-1,0},{0,1},{0,-1}};
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int row=heights.size();
        int col=heights[0].size();
        vector<vector<bool>>pac(row,vector<bool>(col,false));
        vector<vector<bool>>atl(row,vector<bool>(col,false));
        queue<pair<int,int>>pacQueue,atlQueue;
        for(int j=0;j<col;j++)
        {
           pacQueue.push({0,j});
           atlQueue.push({row-1,j});
        }
        for(int i=0;i<row;i++)
        {
           pacQueue.push({i,0});
           atlQueue.push({i,col-1});
        }
        bfs(pacQueue,pac,heights);
        bfs(atlQueue,atl,heights);
        vector<vector<int>>ans;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(pac[i][j] && atl[i][j])
                {
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
    private:
      void bfs(queue<pair<int,int>>&q,vector<vector<bool>>& ocean,
      vector<vector<int>>& heights)
      {
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            ocean[r][c]=true;
            for(auto it:directions)
            {
                int nr=r+it.first;
                int nc=c+it.second;
                if(nr>=0 && nr<heights.size() && nc>=0 && nc<heights[0].size() &&
                   !ocean[nr][nc] &&heights[nr][nc]>=heights[r][c])
                   {
                     q.push({nr,nc});
                   }
            }
        }
      }
};
