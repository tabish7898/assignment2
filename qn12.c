#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a three digit number\n");
    scanf("%d",&a);
    b = a%10;
    a=a/10+b*100;
    printf("%d",a);


    return 0;

}
