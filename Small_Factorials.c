#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        c=1;
        for(j=1;j<=a;j++)
        {
            c=c*j;
        }
        printf("%d
",c);
    }
}