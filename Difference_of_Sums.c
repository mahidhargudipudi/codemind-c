#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c+pow(i,2);//55
    }
    for(j=1;j<=n;j++)
    {
        d=d+j;//15
    }
    printf("%d",d*d-c);
}