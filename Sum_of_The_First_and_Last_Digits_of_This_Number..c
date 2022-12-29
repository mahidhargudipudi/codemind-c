#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,b,c,n,d;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        n=log10(a[i])+1;
       b=a[i]%10;
       d=pow(10,n-1);
       c=a[i]/d;
       printf("%d
",b+c);
    }
}