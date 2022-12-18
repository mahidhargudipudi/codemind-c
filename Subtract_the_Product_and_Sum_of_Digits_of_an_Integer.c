#include<stdio.h>
int main()
{ 
    int a,i,r,s=0,p=1;
    scanf("%d",&a);
    for(i=a;a!=0;a=a/10)
    {
        r=a%10;
        s=s+r; 
        p=p*r;
        }
        printf("%d",p-s);
    
}