#include<stdio.h>
void pf(int n)
{
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
           n= n/i;
        }
    }
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    pf(n);

    return 0;
}
