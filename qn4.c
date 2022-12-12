#include<stdio.h>
void nn(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
    }
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    nn(n);
    return 0;
}
