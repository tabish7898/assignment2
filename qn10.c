#include<stdio.h>
int main()
{
    int n,t,r=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0){
        t=n%10;
        n=n/10;
        r=(r*10)+t;

    }
    printf("%d",r);

    return 0;
}
