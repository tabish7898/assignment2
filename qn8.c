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
int arrangement(int n,int r)
{
    return fact(n)/fact(n-r);
}
int main()
{
    int n,r;
    printf("Enter two number\n");
    scanf("%d %d",&n,&r);
    printf("%d",arrangement(n,r));
    return 0;
}
