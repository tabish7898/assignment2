#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",(i*i));
    }
    return 0;
}
