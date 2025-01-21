int ck(int a,int b,int n)
{
    int c=a+b;
    if(n<=1)
        return b;
    return ck(b,c,--n);
}
int fib(int n){
    if(n==0) return 0;
    int x= ck(0,1,n);
    return x;
}