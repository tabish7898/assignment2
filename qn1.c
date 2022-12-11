#include<stdio.h>
int main()
{
    int n;
    printf("1.jan\n2.feb\n3.mar\n4.april\n5.may\n6.june\n7.july\n8.aug\n9sep\n10.oct\n11.nov\n12.dec\n");
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
        n=1;
    else if(n==2)
        n=2;
    else
        n=3;
    switch(n)
    {
case 1:
    printf("31 days");
    break;
case 2:
    printf("28 days");
    break;
case 3:
    printf("30 days");
    }
    return 0;
}
