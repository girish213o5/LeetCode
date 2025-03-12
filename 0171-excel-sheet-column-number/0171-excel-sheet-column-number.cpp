class Solution {
public:
    int titleToNumber(string columnTitle) {
        int t=0;
        unsigned long p=1;
        for(int i=columnTitle.size()-1;i>=0;i--)
        {
            t=t+p*(columnTitle[i]-64);
            p=p*26;
        }
        return t;
    }
};