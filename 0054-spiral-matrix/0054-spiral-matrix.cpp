class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m=matrix.size();
        int n=matrix[0].size();
        int loop=0;
        int i=0,j=0;
        int up=-1,right=n,down=m,left=-1;
        while(loop<m*n)
        {
            j=left+1;
            while(loop<m*n && right>-1 && j<right)
            {
                res.push_back(matrix[up+1][j]);
                loop++;
                j++;
            }
            up++;
            i=up+1;
            while(loop<m*n && down>-1 && i<down)
            {
                res.push_back(matrix[i][right-1]);
                loop++;
                i++;
            }
            right--;
            j=right-1;
            while(loop<m*n && left<n && j>left)
            {
                res.push_back(matrix[down-1][j]);
                loop++;
                j--;
            }
            down--;
            i=down-1;
            while(loop<m*n && up<m && i>up)
            {
                res.push_back(matrix[i][left+1]);
                loop++;
                i--;
            }
            left++;
        }
        return res;
    }
};