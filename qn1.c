#include<stdio.h>
int sum(int n)
{

    if(n==1)
        return 1;
    return n+sum(n-1);


}
int main()

{
    int n,ans;
    printf("Enter a number\n");
    scanf("%d",&n);
    ans=sum(n);
    printf("%d",ans);
    return 0;
}
