#include <stdio.h>
#include <math.h>
int main()
{
    int num,n=0,copy,re,ans=0;
    printf("Enter a number:");
    scanf("%d", &num);
    copy=num;
    while(copy!=0)
    {
        copy=copy/10;
        n++;
    }
    copy=num;
    while(copy!=0)
    {
        re=copy%10;
        ans=ans+pow(re,n);
        copy=copy/10;
    }
    if(ans==num)
    printf("The given number is an armstrong number");
    else
    printf("The given number is not an armstrong number");
    return 0;
}
