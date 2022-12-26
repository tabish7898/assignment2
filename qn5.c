#include<stdio.h>
int sumdigit(int n)
{
    if(n%10==n)
        return n;
    return (n%10)+sumdigit(n/10);
}
int main()
{
    int n,sd;
    printf("Enter a number\n");
    scanf("%d",&n);
    sd=sumdigit(n);
    printf("%d",sd);

    return 0;
}
