class Solution {
public:
    int wiggleMaxLength(vector<int>& n) {
        if(n.size()<2) return n.size();
        int up=1,dn=1;
        for(int i=0; i<n.size()-1; i++)
        {
            if(n[i]<n[i+1])
                up=dn+1;
            if(n[i]>n[i+1])
                dn=up+1;
        }
        return max(up,dn);
        
    }
};