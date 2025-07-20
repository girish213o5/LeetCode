class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> res(500);
        for( int i =0 ; i< nums.size() ;i++){
            res[nums[i]-1]++;
        } 
        for(int i =0 ; i< 500 ; i++ ){
            if( res[i]%2 != 0)
                return false;
        }
    return true;
        
    }
};