#include<stdio.h>
int main(){
    int n,fib=0,f1=0,f2=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("%d ",f2);
    for(int i=2;i<=n;i++)
    {
        fib=f1+f2;
        f1=f2;
        f2=fib;
        printf("%d ",fib);
    }
    return 0;
}
