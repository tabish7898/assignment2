#include<stdio.h>
int main()
{
    int a[10],min;
    printf("Enter ten values\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(int j=1;j<10;j++)
    {
        if(min>a[j])
            min=a[j];
    }
    printf("min = %d",min);
    return 0;
}
