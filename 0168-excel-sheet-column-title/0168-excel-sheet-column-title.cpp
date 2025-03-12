class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n=columnNumber;
        string s="";
        while(n)
        {
            s=(char)((n-1)%26 +65)+s;
            if(n==0) break;
            n=(n-1)/26;
        }
        return s;
    }
};