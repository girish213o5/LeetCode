class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int ans = 1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        ans = max(nums[0]*nums[1]*nums[n-1], nums[n-3]*nums[n-2]*nums[n-1]);
        return ans;
    }
};