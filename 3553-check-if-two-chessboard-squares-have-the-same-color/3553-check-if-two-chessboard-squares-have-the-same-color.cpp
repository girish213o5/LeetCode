class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int c1 = 0, c2 = 0;
        if((coordinate1[0]+coordinate1[1]) %2 ==0)  c1=1;
        if((coordinate2[0]+coordinate2[1]) %2 ==0)  c2=1;

        if(c1==c2) return true;

        return false;
    }
};