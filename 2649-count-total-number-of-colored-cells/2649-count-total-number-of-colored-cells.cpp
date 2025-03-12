class Solution {
public:
    long long coloredCells(int n) {
      
        long long val=0;
        int i=1;
        while(i <= (n*2-1))
        {
            if(i == (n*2-1)) {
                val += i;
                break;
            }
            val = val + (2*i);
            i+=2;
        }
        return val;
    }
};