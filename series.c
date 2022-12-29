#include<stdio.h>
int main()
{
    int n,i,a=2,b=1;
    scanf("%d",&n);
    printf("%d %d ",b,a);
    for(i=1;i<n;i++)
    {
      if(i%2==0)
      {
          a=a*3+2;
          printf("%d ",a);
      }
      else
      {
          b=b*2+1;
          printf("%d ",b);
      }
    }
}