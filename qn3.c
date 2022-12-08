#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
