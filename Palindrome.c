#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    scanf("%d",&n);
    int p=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(p==rev)
    printf("True");
    else
    printf("False");
}