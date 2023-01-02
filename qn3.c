#include<stdio.h>
int main()
{
    int a[10],sumeven=0,sumodd=0;
    printf("Enter ten values\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0){
        sumeven=sumeven+a[i];
        }
        else
            sumodd=sumodd+a[i];
    }

    printf("sumeven = %d\n",sumeven);
    printf("sumodd = %d",sumodd);


    return 0;
}

