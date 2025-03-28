class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        int j = 0, i = 0, c = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(fruits[i] <= baskets[j])
                {
                    c++;
                    baskets[j] = 0;
                    break;
                }
            }
        }
    return n-c;        
    }
};