#include<stdio.h>
int main()
{
    int n,m,k,a;
    scanf("%d%d%d",&n,&m,&k);
    a=m*k;
    if(n%a==0)
    printf("%d",n/a);
    else if(n%a>0)
    printf("%d",(n/a)+1);
}