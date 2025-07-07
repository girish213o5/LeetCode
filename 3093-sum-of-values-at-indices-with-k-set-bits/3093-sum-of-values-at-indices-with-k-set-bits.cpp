class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int x=1, sum = 0;
        vector<int> dp (n,0);
        for(int i=1 ; i<n ; i++)
        {
            if( x*2 == i )
                x=i;
            dp[i]= 1+dp[i-x];
        }

        for(int i = 0 ; i < n ; i++)
        {
            if( dp[i] == k)
                sum += nums[i];
        }
        return sum;

    }
};