class Solution {
private:
    
    int sol(int i, int j,vector<vector<int>> &triangle,vector<vector<int>> &dp,int n)
    {
        if(i>=n)    return triangle[i][j];
        if(dp[i][j]!=-1)    return dp[i][j];

        return dp[i][j]= triangle[i][j]+min( sol(i+1,j,triangle,dp,n ),sol(i+1,j+1,triangle,dp,n));
    }

public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
        int m=triangle[0].size();
        return sol(0,0,triangle,dp,n-1);
    }
};