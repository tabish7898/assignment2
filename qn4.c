#include<stdio.h>
int main()
{
    int a=5, b=6;

    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    a += b;
    b = a - b;
    a -= b;
    printf("%d %d",a,b);



    return 0;
}
