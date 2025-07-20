class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0 ;
        int maxi = 0 ;
        for(int i=0 ;i < gain.size();i++){
            res += gain[i];
            maxi = max(maxi, res);
        }
        return maxi;
        
    }
};