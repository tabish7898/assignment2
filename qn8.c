#include<stdio.h>
int main()
{
    int a[10],temp;
    printf("Enter ten array values\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

        printf("second largest = %d ",a[2]);


    return 0;
}

