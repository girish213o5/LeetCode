class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        char c ;
        for(int i=0 ; i< 2 ; i++ )
        {
            for(int j= 0 ; j< 2 ; j++)
            {
                c = grid[i][j];
                if((grid[i][j+1] == c) && (grid[i+1][j]==c) )
                    return true;
            }
        }
        for(int i=2 ; i> 0; i-- )
        {
            for(int j= 2 ; j>0 ; j--)
            {
                c = grid[i][j];
                if((grid[i-1][j] == c) && (grid[i][j-1]==c) )
                    return true;
            }
        }
        for(int i=2 ; i>0 ; i-- )
        {
            for(int j= 0 ; j< 2 ; j++)
            {
                c = grid[i][j];
                if((grid[i][j+1] == c) && (grid[i-1][j]==c) )
                    return true;
            }
        }
        for(int i=0 ; i<2; i++ )
        {
            for(int j= 2 ; j>0 ; j--)
            {
                c = grid[i][j];
                if((grid[i+1][j] == c) && (grid[i][j-1]==c) )
                    return true;
            }
        }
        return false;

    }
};