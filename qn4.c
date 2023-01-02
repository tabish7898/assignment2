#include<stdio.h>
int main()
{
    int a[10],grt=0;
    printf("Enter ten values\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(grt<a[i])
            grt=a[i];
    }
    printf("greatest value  = %d",grt);

    return 0;
}

