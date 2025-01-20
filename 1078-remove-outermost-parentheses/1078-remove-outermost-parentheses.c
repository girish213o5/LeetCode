char* removeOuterParentheses(char* s) {
    int l=strlen(s);
    char stack[l];
    char *str=malloc(l);
    int top=-1,it=0,f=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(')
        {
            if(top==-1) f=1;
            else f=0;
            stack[++top]='(';
        }
        else
            top--;
        if(top==-1 || f==1)
            continue;
        str[it++]=s[i];
    }
    str[it]='\0';
    return str;
}