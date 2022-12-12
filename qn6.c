#include<stdio.h>
int fact(int n)
{
    int factorial=1;
    for(int i=n;i>0;i--)
    {
      factorial=factorial*i;

    }
    return factorial;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("factorial = %d",fact(n));
    return 0;
}
