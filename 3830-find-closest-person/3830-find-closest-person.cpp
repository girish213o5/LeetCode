class Solution {
public:
    int findClosest(int x, int y, int z) {
        int fst = abs(x-z);
        int scnd = abs(y-z);
        if( fst == scnd)
            return 0;
        else if( fst > scnd)
            return 2;
        else 
            return 1;
        
    }
};