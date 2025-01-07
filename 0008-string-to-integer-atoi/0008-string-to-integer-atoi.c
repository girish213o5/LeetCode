int myAtoi(char* s) {
    
    int l=strlen(s);
    int i=0,sign=1;
    long sum=0;
    while(s[i]==' ' && i<l)
    i++;
    if(s[i]=='-') 
    {
        sign=-1;
        i++;
    }
    else if(s[i]=='+')
        i++;
    while(i<l && isdigit(s[i]))
    {
        sum=sum*10+ (s[i]-48);
        if(sum*sign<=-2147483648)
            return -2147483648;
        if(sum*sign>=2147483647)
            return 2147483647;
        i++;
    }
    return sum*sign;
}
    
