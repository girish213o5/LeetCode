class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0 ; i < n ; i++)
        {
            for(int j=0 ; j<m-1 ;j++)
            {
                if(grid[j][i] != grid[j+1][i])
                    return false;
            }
        }
        for(int i=1 ; i< n ;i++)
        {
            if(grid[0][i-1] == grid[0][i] )
                return false;
        }
        return true;
    }
};