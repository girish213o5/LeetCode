class Solution {
public:
    int sol(vector<int>& nums1, vector<int>& nums2,int i,int j,vector<vector<int>>& dp)
    {   
        if(i>=nums1.size()||j>=nums2.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(nums1[i]==nums2[j])
            return dp[i][j]= 1+sol(nums1,nums2,i+1,j+1,dp);
        else
            return dp[i][j]= max(sol(nums1,nums2,i+1,j,dp),sol(nums1,nums2,i,j+1,dp));
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(),vector<int>(nums2.size(),-1));
        return sol(nums1,nums2,0,0,dp);
    }
};