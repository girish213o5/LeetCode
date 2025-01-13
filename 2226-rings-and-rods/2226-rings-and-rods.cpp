class Solution {
public:
    int countPoints(string rings) {
        int R[10];
        int G[10];
        int B[10];
        int count=0;
        int l =rings.size();
        for(int i=0 ; i< l-1 ; i+=2)
        {
            if(rings[i]=='B')
                B[(int)rings[i+1]-48]=1;
        
            if(rings[i]=='R')
                R[(int)rings[i+1]-'0']=1;
        
            if(rings[i]=='G')
                G[(int)rings[i+1]-'0']=1;
        }
        for(int i=0; i<10 ; i++)
            if(B[i]&R[i]&G[i])
                ++count;

        return count;
    }
};