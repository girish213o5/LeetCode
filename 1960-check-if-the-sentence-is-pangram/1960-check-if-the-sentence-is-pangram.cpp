class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alp(26,0);
        for(int i=0 ; i< sentence.size();i++)
        {
            alp[sentence[i]-97]++;
        }
        for(int i=0 ; i<26 ; i++)
        {
            if(alp[i] == 0)
            return false;
        }
        return true;
        
    }
};