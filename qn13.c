#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%2==0&&a%3==0)
        printf("Number is divisible by 3 and 2\n");
    else
        printf("Number is not divisible by 3 and 2\n");
    return 0;

}
