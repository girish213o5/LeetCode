class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int small = 0;
        int big = 0;
        int firstLetter = 0;

        if(word[0] >= 'A' && word[0] <='Z') ++firstLetter;

        for(int i=0 ;i< n ; i++)
        {
            if( word[i] >= 'A' && word[i] <= 'Z')
                ++big;
            else if( word[i] >= 'a' && word[i]<='z')
                ++small;
        }
        
        if(big == n || small == n)  return true;
        if( firstLetter &&  big == 1) return true;

        return false;        
    }
};