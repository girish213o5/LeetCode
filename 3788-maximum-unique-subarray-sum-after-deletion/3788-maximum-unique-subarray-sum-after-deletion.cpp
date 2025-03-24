class Solution {
public:
    int maxSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = nums.size();
        if(nums[l-1] <= 0)
            return nums[l-1];
        int x = nums[l-1];
        int res = 0;
        
        for(int i=0 ; i< l ;i++)
        {
            if((nums[i] <= 0) || ( i<(l-1) && nums[i] == nums[i+1]) )
                continue;
            res += nums[i];
        }
        return res;
    }
};