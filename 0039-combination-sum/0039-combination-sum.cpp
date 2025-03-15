class Solution {
public:
    void bt(int st,vector<int>& candidates, vector<int>& curr, vector<vector<int>>& res, int t)
    {
        if(t<0)
            return ;
        if(t==0){
            res.push_back(curr);
            return;
        }
        for(int i= st; i<candidates.size(); i++)
        {
            curr.push_back(candidates[i]);
            bt(i,candidates,curr,res,t-candidates[i]);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        bt(0,candidates,curr,res,target);
        return res;
    }
};