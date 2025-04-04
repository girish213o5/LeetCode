class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int x=cost[0];
        vector<int> res;
        res.push_back(x);
        for(int i =1 ; i< cost.size(); i++)
        {
            (x>cost[i])? x=cost[i]:(x);
            res.push_back(x);
        }
        return res;
        
    }
};