#include<stdio.h>
int main()
{
    int x;
    printf("Enter the year\n");
    scanf("%d",&x);
    if(x%4==0)
    {
        if(x%100==0)
        {
            if(x%400==0)
        printf("%d is a leap year\n",x);
        else

            printf("%d is not a leap year\n",x);
        }
        else
            printf("%d is leap year\n",x);
    }
    else
        printf("%d is not a leap year\n",x);
    return 0;
}
