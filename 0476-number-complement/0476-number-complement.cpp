class Solution {
public:
    int findComplement(int num) {
        long n =1;
        while( n <= num)
        {
            n*=2;
        }
        return abs(num-(n-1));
        
        
    }
};