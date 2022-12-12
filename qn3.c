#include<stdio.h>
int eodd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("%d",eodd(n));
    return 0;
}
