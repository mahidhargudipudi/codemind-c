#include<stdio.h>
int main()
{
  int n,k,x,y,c,d,t;
  scanf("%d%d%d%d",&n,&k,&x,&y);
  c=k*x;   
  if(x>y)
  d=(n-k)*y;
  else
  d=(n-k)*x;
  t=c+d;
  printf("%d",t);
}