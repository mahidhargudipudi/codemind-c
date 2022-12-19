#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,z,a;
    scanf("%d%d%d",&x,&y,&m);
    z=pow(x,y);
    a=z%m;
    printf("%d",a);
}