#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        i=i/10;
        count++;
    }
    printf("number of digits in %d are %d",n,count);
return 0;
}
