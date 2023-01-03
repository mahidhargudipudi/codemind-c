#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a/2;i++)
    {
        int n;
        n=2*i-1;
        printf("%d ",n);
    }
}