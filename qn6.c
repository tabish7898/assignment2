#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year\n");
    scanf("%d",&n);
    switch(n%100==0)
    {
    case 0:
        switch(n%4==0)
        {
        case 0:
            printf("not a leap year\n");
            break;
        case 1:
            printf("leap year\n");
            break;
        }
        break;
    case 1:
        switch(n%400==0)
        {
        case 0:
            printf("not a leap year\n");
            break;
        case 1:
            printf("leap year\n");
            break;
        }

    }
    return 0;
}
