#include<stdio.h>
int main()
{
    int n;
    printf("enter a even number\n");
    scanf("%d",&n);
    switch(n%2==0)
    {
    case 1:
        n++;
        printf("upper nearest odd number is %d\n",n);
        break;
    default :
        printf("Invalid entry\n");

    }
    return 0;
}
