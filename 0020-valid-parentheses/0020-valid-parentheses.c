bool isValid(char * s){
    int i,n=strlen(s),j=-1,arr[n];
    if(n%2!=0 || s[0]==')' || s[0]=='}' ||s[0]==']' )
    return false;
    for(i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            j++;
            arr[j]=s[i];
            continue;
        }
        else if(j>=0 && ((s[i]==')' && arr[j]=='(')||(s[i]=='}' && arr[j]=='{')||(s[i]==']' && arr[j]=='['))){
            j--;
            continue;
        }
        else
            return false;
    }
    i--;
    if((s[i]==')' || s[i]=='}' || s[i]==']')&& j<0)
    return true;
    return false;
    
}