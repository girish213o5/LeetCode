class Solution {
public:
    int minimumSum(int num) {
        int n,m;
        vector<int> x;
        while(num)
        {
            int y=num%10;
            x.push_back(y);
            num=num/10;
        }
        sort(x.begin(),x.end());
        n = x[0]*10 + x[3];
        m = x[1]*10 + x[2];

        return n+m;
    }
};