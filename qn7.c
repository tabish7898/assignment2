#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    b= a&1;
    (b==0)?printf("even\n"):printf("odd\n");

    return 0;
}
