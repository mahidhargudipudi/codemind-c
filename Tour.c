#include<stdio.h>
int main()
{
    int i,j, t;
    scanf("%d",&t);
    int a[t][2];
    for(i=0;i<t;i++)
    {
    for(j=0;j<2;j++) 
    {
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<t;i++)
    {
       printf("%d
",a[i][0]*5+a[i][1]*7) ;
    }
    
}