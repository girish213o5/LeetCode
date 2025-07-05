class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  n = prices.size();
        vector<int> a(n);
        vector<int> b(n);
        int x= INT_MAX;
        int max=0;
        for(int i=0 ;i< n ;i++)
        {
            if( x > prices[i]){
                a[i]= x= prices[i];
            } 
            else;
            a[i] = x;                                                                          
        }
        x=0;
        for(int i = n-1 ; i>=0 ; i--)
        {
            if(x<prices[i]){
                 
                b[i] = x= prices[i];
            }
            else 
                b[i] = x;
            
            int h= abs(a[i] - b[i]);
            if( max< h)
                max = h;

        }
        return max;
    }
};