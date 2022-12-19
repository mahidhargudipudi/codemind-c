#include<stdio.h>
int main()
{
    int l,r,k,f=0,i;
    scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
       if(i%k==0)
      f++ ;
    }
    printf("%d",f);
}