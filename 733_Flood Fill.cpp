void dfs(vector<vector<int>>& image,int i,int j,int old,int color)
{
    //int old=image[i][j];
  if(i<0 || j<0 || i>=image.size() || j>=image[0].size())return ;
  if(image[i][j]!=old)return;
  image[i][j]=color;
  dfs(image,i,j+1,old,color);
  dfs(image,i,j-1,old,color);
  dfs(image,i-1,j,old,color);
  dfs(image,i+1,j,old,color);
}
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        if(inicolor!=color)
        {
                  dfs(image,sr,sc,inicolor,color);
        }

        return image;
    }
};
