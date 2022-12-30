//dd days ago
//>=ll&&<=rr
//if<ll==>too early
//if>rr==>too late
#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int d,l,r;
        scanf("%d %d %d
",&d,&l,&r);
        if(d>=l&&d<=r)
        printf("Take second dose now
");
        else if(d<l)
           printf("Too Early
");
           else if(d>r) 
           printf("Too Late
");
    }
}