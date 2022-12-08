#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a==0)
        printf("%d is zero",a);
    else if(a<0)
        printf("%d is negative number\n",a);
    else
        printf("%d is a positive number\n",a);
    return 0;
}
