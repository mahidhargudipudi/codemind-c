//age>=xx
//age<yy
#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int xx,yy,zz;
        scanf("%d %d %d
",&xx,&yy,&zz);
        if(zz>=xx&&zz<yy)
        {
        printf("YES
");
        }
        else{
        printf("NO
");
        }
    }
}