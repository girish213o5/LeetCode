class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        int m = stones.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for( int  j = 0 ; j < m ; j++)
            {
                if(jewels[i] == stones[j])
                    sum++;
            }
        }
        return sum;
    }
};