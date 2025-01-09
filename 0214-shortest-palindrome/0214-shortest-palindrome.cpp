class Solution {
public:
static int lps(string str){
    int i=1,j=0;
    int n=str.size();
    vector<int>v(n);
    while(i<n){
        if(str[i]==str[j]){
            v[i]=++j;
             i++;
        }
        else{
            if(j!=0) j = v[j - 1];
            else i++;
        }
    }
    return j;
}
    string shortestPalindrome(string s) {
        string oppo=s;
        reverse(oppo.begin(),oppo.end());
        oppo=s+'#'+oppo;
        int in=lps(oppo);
        string temp=s.substr(in);
        reverse(temp.begin(),temp.end());
        
        return temp+s;
    }

    
};