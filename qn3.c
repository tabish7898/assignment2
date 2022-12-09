#include<stdio.h>
int main()
{
    int n,fib=0,f1=0,f2=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i =2;i<=n;i++)
    {
       fib=f1+f2;
       f1=f2;
       f2=fib;
       if(fib==n||n==1)
       {
        printf("Fibonacci\n");
        break;
       }
       else if(fib!=n&&i==n)
        printf("Not fibonacci");
    }



    return 0;
}

