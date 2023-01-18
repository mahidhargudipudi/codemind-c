#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float c=0;
    for(i=1;i<=n;i++)
    {
        c=c+(1.0/i);
    }
    printf("%.2f",c);
}