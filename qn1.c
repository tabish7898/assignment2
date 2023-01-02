#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("Enter ten values\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum = %d",sum);

    return 0;
}
