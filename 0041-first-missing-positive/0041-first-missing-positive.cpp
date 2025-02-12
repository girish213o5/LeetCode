class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        if(n==1)
        {
            if(nums[0]==1) return 2;
            else return 1;
        }
        int t=1;
        sort(nums.begin(),nums.end());
        for(int i=0 ; i< n ; i++)
        {
            if(nums[i]<=0) continue;
            
            if(i>0 && nums[i-1] == nums[i]) continue;
            
            if(nums[i]!=t)  return t;
            t++;
        }
        return t;
    }
};