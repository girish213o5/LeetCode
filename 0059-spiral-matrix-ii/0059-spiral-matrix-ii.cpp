class Solution {
public:
    vector<vector<int>> generateMatrix(int nm) {
        vector<vector<int>>res(nm,vector(nm,0));
        int top=0, bottom=nm-1 , left =0, right=nm-1;
        int n=1;
        while(n <= nm*nm)
        {
            for(int i=left; i<=right ; i++)
                res[top][i]=n++;
            ++top;

            for(int i=top; i<=bottom ; i++)
                res[i][right]=n++;
            --right;

            if (top <= bottom) {
            for(int i=right ; i>=left; i--)
                res[bottom][i]=n++;
            --bottom;
            }

            if (left <= right){
            for(int i=bottom; i>=top ; i--)
                res[i][left]=n++;
            ++left;
            }
        }
        return res;    
    }
};