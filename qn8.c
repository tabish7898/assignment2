#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=2;i<=(n);i++)
    {
        if(n%i==0)
{


            printf("not prime");
            break;}
        else{
            printf("prime");
            break;
    }
    }
    return 0;
}
