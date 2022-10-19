#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number and a digit\n");
    scanf("%d %d",&a,&b);
    a*=10;
    a+=b;
    printf("%d",a);
    return 0;
}
