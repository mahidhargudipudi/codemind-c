#include<stdio.h>
int main()
{
    int n,i;
    float c=0;
    scanf("%d",&n);
    int a[n];
    float avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
           c=c+a[i];
    }
    avg=c/n;
    printf("%.2f",avg);
    
}