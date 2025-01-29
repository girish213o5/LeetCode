class Solution {
public:
    int sol(int i, int j, int m, int n,vector<vector<int>>& dp)
    {
        if(i>=m || j>=n)    return 0 ; 
        if(dp[i][j]!=-1)    return dp[i][j]; 
        if(i==m-1 && j==n-1)    return 1;    
        return    dp[i][j]= sol(i+1,j,m,n,dp)+ sol(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) 
    {        
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return sol(0,0,m,n,dp);   
    }
};