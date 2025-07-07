class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;
        int x= k % n;
        for(int i= n-x; i< nums.size() ; i++ )
        {
            res.push_back(nums[i]);
        }
        for(int i=0 ; i<n-x ; i++)
        {
            res.push_back(nums[i]);
        }
        for(int i=0 ; i< n ; i++)
        {
            nums[i] = res[i];
        }
    }
};