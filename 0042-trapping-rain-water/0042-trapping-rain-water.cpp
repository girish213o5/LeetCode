class Solution {
public:
    int trap(vector<int>& height) {
        
        int r=0;
        int lm=0,rm=0;
        int n= height.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if(height[i]<height[j])
            {
                if(height[i]>lm)
                {
                    lm=height[i];
                    i++;
                }
                else
                {
                    r+=lm-height[i];
                    i++;
                }
            }
            else
            {
                if(height[j]>rm)
                {
                    rm = height[j];
                    j--;
                }
                else
                {
                    r+=rm-height[j];
                    j--;
                }
            }
        }
        return r;
    }
};