#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>99||x<-99)
        printf("It is a three digit number\n");
    else
        printf("It is not a three digit number\n");
    return 0;
}
