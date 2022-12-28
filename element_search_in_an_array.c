#include<stdio.h>
int main()
{
    int i,s=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
       if(b==a[i])
       s++;
    }
    if(s>=1)
     printf("True");
    else
    printf("False");
   
}
