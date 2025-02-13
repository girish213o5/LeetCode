class Solution {
public:
    bool valid(int r,int j,vector<string>& board,int n)
    {
        for(int i=r-1;i>=0;i--)
            if(board[i][j]=='Q') return false;
        int i=r-1,k=j-1;
        while(i>=0 and k>=0)
        {
            if(board[i][k]=='Q') return false;
            i--;
            k--;
        }
        i=r-1,k=j+1;
        while(i>=0 and k<n)
        {
            if(board[i][k]=='Q') return false;
            i--;
            k++;
        }
        return true;
    }
    void find(int r,int n,vector<string> &board,vector<vector<string>>& res)
    {
        if(r==n) 
        {
            res.push_back(board);
            return ;
        }
        for(int j=0;j<n;j++)
        {
            if(valid(r,j,board,n))
            {
                board[r][j]='Q';
                find(r+1,n,board,res);
                board[r][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>> res;
        find(0,n,board,res);
        return res;
    }
};