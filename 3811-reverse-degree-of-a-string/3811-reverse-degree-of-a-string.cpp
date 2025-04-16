class Solution {
public:
    int reverseDegree(string s) {
        long count = 0;
        for (int i=0 ; i< s.size() ; i++)
        {
            count += (i+1) * (26-(s[i] - 97)); 
        }
        return count;
    }
};