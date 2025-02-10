class Solution {
public:
    int dfs(int i, int j, int r, int c, vector<vector<int>> & grid)
    {
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0)    return 0;
        grid[i][j]=0;
        int area=1;
        area+=dfs(i+1,j,r,c,grid);
        area+=dfs(i-1,j,r,c,grid);
        area+=dfs(i,j+1,r,c,grid);
        area+=dfs(i,j-1,r,c,grid);
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r= grid.size();
        int c= grid[0].size();
        int mx=0;
        for(int i=0 ; i<r ; i++)
        {
            for(int j=0 ; j<c; j++)
            {
                if(grid[i][j])
                {
                    mx= max(mx,dfs(i,j,r,c,grid));
                }
            }
        }
        return mx;
    }
};