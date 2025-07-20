class Solution {
public:
    int maxProduct(int n) {
        vector<int> x;
        while(n!=0){
            x.push_back(n%10);
            n/=10;
        }
        sort(x.rbegin(),x.rend());

        return x[0]*x[1];
        
    }
};