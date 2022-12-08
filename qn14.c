#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%7==0)
        printf("%d is divisible by 7\n",a);
    else if (a%3==0)
        printf("%d is divisible by 3\n",a);
    else
        printf("%d is not divisible by 7 or 3\n",a);
    return 0;
}
