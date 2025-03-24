class Solution {
public:
    int minimumOperations(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        int total = 0, res = 0;
        
        for(int i = 0 ; i < m ; i++)
        {
            total = 0;
            for(int j = 1 ; j<n ; j++)
            {
                if(g[j][i] <= g[j-1][i])
                {
                    total += g[j-1][i] - g[j][i] + 1;
                    g[j][i] = g[j][i] + ( g[j-1][i] - g[j][i] +1);
                }
            }
            res += total;
        }
        return res;
    }
};