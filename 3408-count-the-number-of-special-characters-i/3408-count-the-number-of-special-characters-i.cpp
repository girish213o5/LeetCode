class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> a(26,0);
        vector<int> A(26,0);
        int c=0;
        for(int i=0 ; i<word.size(); i++)
        {
            if(word[i] >= 65 && word[i]<=90) A[word[i]-65] ++;  
            if(word[i] >= 97 && word[i]<=122) a[word[i]-97]++;  
        }
        for(int i =0 ; i< 26 ; i++)
            if(a[i]!= 0 && A[i]!=0)
                c++;
    return c;

    }
};