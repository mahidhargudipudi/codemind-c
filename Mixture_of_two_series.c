 #include<stdio.h>
int main()
{
    int i, n,b=1,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",b);
            b=b*3;
        }
        else
        {
           printf("%d ",a);
            a=a*2; 
        }
    }
}