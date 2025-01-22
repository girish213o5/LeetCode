bool areOccurrencesEqual(char* s) {
    char c[26];
    int x= strlen(s);
    int f=0;
    for(int i=0; i<x;i++)
    {
        c[s[i]-97]=c[s[i]-97]+1;
    }
    for(int i=0; i<=25; i++)
    {
        if(c[i]==0) continue;
        if(c[i]!=0) {
            f=c[i];
            break;
        }         
    }
    for(int i=0; i <26; i++)
    {
        if(c[i]==0) continue;
        if(c[i]!=f) return false;
    }
    return true;

}