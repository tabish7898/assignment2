#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n,factorial;
    printf("Enter a number\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("%d",factorial);

    return 0;
}
