class Solution {
public:
    string toBinary(int n) {
        if (n == 0) return "0";
        string res = "";
        while (n!=0) {
            res = to_string(n % 2) + res;  
            n /= 2;
        }
        return res;
    }

    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int mon = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        
        string yr = toBinary(year);
        string mn = toBinary(mon);
        string dy = toBinary(day);

        return yr + "-" + mn + "-" + dy;
    }
};
