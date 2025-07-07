class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int res = 0;
        for(int j=0 ; j< 31 ; j++)
        {
            count =0;
            for(int i=0 ; i< n ;i++)
            {
                if( nums[i] % 2 == 1)
                count ++;
                nums[i] = nums[i]>>1;
            }
            if(count >= k )
                res += pow(2,j);
        }
        return res;
    }
};