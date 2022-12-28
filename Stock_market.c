#include<stdio.h>
int main ()
{
    int t,i,j;
    scanf("%d",&t);
    int a[t][2];
    for(i=0;i<t;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        if(a[i][0]<a[i][1])
        printf("PROFIT
");
        else if(a[i][0]==a[i][1])
        printf("NEUTRAL
");
        else if(a[i][0]>a[i][1])
        printf("LOSS
");
    }
    
}