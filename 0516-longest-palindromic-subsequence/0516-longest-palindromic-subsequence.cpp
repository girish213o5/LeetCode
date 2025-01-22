class Solution {
public:
    int sol(int i,int j,string& s,vector<vector<int>>& dp)
    {   
        if(i==j) return 1;
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]) return dp[i][j]= 2+sol(i+1,j-1,s,dp);
        else 
            return dp[i][j] = max(sol(i+1,j,s,dp),sol(i,j-1,s,dp));

    }
    int longestPalindromeSubseq(string s) {
        int x=s.size()-1;
        vector<vector<int>>dp(x+2,vector<int>(x+2,-1));
        return sol(0,x,s,dp);
        
    }
};