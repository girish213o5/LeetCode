class Solution {
public:
    int kItemsWithMaximumSum(int o, int z, int no, int k) {
        int n=0;
        if(k<=o)     return k;
        else
        {
            n=o;
            k-=o;
        }
        if(k<=z)    return n;
        else
        {
           k-=z;
        }
        return n-k;
    }
};