class Solution {
public:
    int sol(int i, int j, int n, int m, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp)
    {
        if(i>=n || j>=m ) return 0;
        if(obstacleGrid[i][j] == 1 )  return 0;
        if(i==n-1 && j==m-1 ) return 1;
        if (dp[i][j] != -1) return dp[i][j];
        return dp[i][j]= sol (i+1,j,n,m,obstacleGrid,dp)+sol (i,j+1,n,m,obstacleGrid,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n= obstacleGrid.size();
        int m= obstacleGrid[0].size();
        vector<vector<int>> dp (n, vector<int>(m, -1));
        return sol (0,0,n,m,obstacleGrid,dp);
    }
};