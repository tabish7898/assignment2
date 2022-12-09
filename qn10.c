#include <stdio.h>
#include <math.h>
int main()
{
    int num,n=0,copy,re,ans=0;
    for(int i=1;i<=1000;i++)
        {
    copy=i;
    n=0;
    ans=0;
    re=0;
    while(copy!=0)
    {
        copy=copy/10;
        n++;
    }
    copy=i;
    while(copy!=0)
    {
        re=copy%10;
        ans=ans+pow(re,n);
        copy=copy/10;
    }
    if(ans==i)
        printf("%d ",ans);
    }
    return 0;
}
