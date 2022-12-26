#include<stdio.h>
int sumsqr(int n)
{

    if(n==1)
        return 1;
    return (n*n)+sumsqr((n-1));


}
int main()

{
    int n,ans;
    printf("Enter a number\n");
    scanf("%d",&n);
    ans=sumsqr(n);
    printf("%d",ans);
    return 0;
}



