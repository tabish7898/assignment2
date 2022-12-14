#include<stdio.h>
 void pn(int n)
 {
     if(n==0)
        return ;
     printf("%d",n);
     pn(n-1);
 }
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    pn(n);
    return 0;
}
