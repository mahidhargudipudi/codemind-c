#include<stdio.h>
int main()
{
    int a,r,i,c=0,d=1;
    scanf("%d",&a);
    for(i=a;a!=0;a=a/10)
    {
        r=a%10;
        c=c+r;
        d=d*r;
    }
    if(c==d)
    printf("Spy Number");
    else 
    printf("Not Spy Number");
}