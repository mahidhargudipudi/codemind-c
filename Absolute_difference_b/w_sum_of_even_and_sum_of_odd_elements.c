#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        c=c+a[i];
        else if(a[i]%2!=0)
        s=s+a[i];
    }
    printf("%d",abs(c-s));
    
}