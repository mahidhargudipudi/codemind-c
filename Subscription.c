#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>30)
        printf("YES
");
        else
        printf("NO
");
    }
    
}