#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float c,d=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=sqrt(i);
        d=d+c;
    }
    
    printf("%.2f",d);
}