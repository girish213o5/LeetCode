class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1,0);
        int x= 1;
        for(int i=1 ; i<=n ; i++)
        {
            if(x * 2 == i)
                x= i;
            dp[i] = 1+ dp[i-x];
        }
    return dp;

    }
};