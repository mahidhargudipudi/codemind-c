#include<stdio.h>
int main()
{
    int a,i,rem,rev=0;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("%d",rev);
}