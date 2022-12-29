#include<stdio.h>
int main()
{
    int n,i,o=4,e=1;
    scanf("%d",&n);
    printf("2 0 ");
    for(i=3;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",o);
            o=o*2;
        }
        else
        {
            printf("%d ",e);
            e=e*3;
        }
    }
}