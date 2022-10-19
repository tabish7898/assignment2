#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("%d %d",a,b);
    return 0;
}
