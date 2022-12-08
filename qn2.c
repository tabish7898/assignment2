#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x%5==0)
        printf("Number is divisible by 5\n");
    else
        printf("Number is not divisible by 5\n");
    return 0;
}
