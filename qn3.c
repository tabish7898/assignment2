#include<stdio.h>
int sume(int n)
{

    if(n==1)
        return 2;
    return (n*2)+sume((n-1));


}
int main()

{
    int n,ans;
    printf("Enter a number\n");
    scanf("%d",&n);
    ans=sume(n);
    printf("%d",ans);
    return 0;
}


